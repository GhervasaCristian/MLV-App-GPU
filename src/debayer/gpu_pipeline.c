#include "gpu_pipeline.h"
#include "opencl_debayer.h"
#include "../mlv/video_mlv.h"
#include "../processing/raw_processing.h"
#include "../mlv/llrawproc/llrawproc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <pthread.h>

#define NUM_PREFETCH_SLOTS 8

typedef struct {
    uint16_t *buffer;
    size_t alloc_bytes;
    uint64_t frame_index;
    mlvObject_t *video;
    volatile int state; /* 0: empty, 1: loading, 2: ready */
    pthread_t thread;
} prefetch_slot_t;

static prefetch_slot_t s_slots[NUM_PREFETCH_SLOTS];
static pthread_mutex_t s_prefetch_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t  s_prefetch_cond  = PTHREAD_COND_INITIALIZER;

typedef struct {
    int slot_id;
    mlvObject_t *video;
    uint64_t frame_index;
} worker_arg_t;

static void* prefetch_slot_worker(void* arg) {
    worker_arg_t *w = (worker_arg_t*)arg;
    int slot = w->slot_id;
    mlvObject_t *video = w->video;
    uint64_t frame_index = w->frame_index;
    free(w);

    pthread_mutex_lock(&s_prefetch_mutex);
    uint16_t *dest = s_slots[slot].buffer;
    pthread_mutex_unlock(&s_prefetch_mutex);

    int ok = 0;
    if (video && dest) {
        ok = (getMlvRawFrameUint16(video, frame_index, dest) == 0);
        if (ok && video->llrawproc) {
            int is_dual_iso = (video->llrawproc->diso_validity && video->llrawproc->dual_iso);
            int saved_averaging = video->llrawproc->diso_averaging;
            int saved_chroma = video->llrawproc->chroma_smooth;

            if (is_dual_iso) {
                video->llrawproc->diso_averaging = 1; /* Fast mean23 for real-time playback */
                video->llrawproc->chroma_smooth = 0;  /* Bypass heavy 3x3 CPU blur during playback */
            }

            int width = getMlvWidth(video);
            int height = getMlvHeight(video);
            size_t raw_size = (size_t)width * height * sizeof(uint16_t);
            applyLLRawProcObject(video, dest, raw_size);

            if (is_dual_iso) {
                video->llrawproc->diso_averaging = saved_averaging;
                video->llrawproc->chroma_smooth = saved_chroma;
            }
        }
    }

    pthread_mutex_lock(&s_prefetch_mutex);
    if (s_slots[slot].video == video && s_slots[slot].frame_index == frame_index) {
        s_slots[slot].state = ok ? 2 : 0;
    }
    pthread_cond_broadcast(&s_prefetch_cond);
    pthread_mutex_unlock(&s_prefetch_mutex);

    return NULL;
}

static void evict_stale_slots_locked(mlvObject_t *video, uint64_t current_frame) {
    for (int i = 0; i < NUM_PREFETCH_SLOTS; i++) {
        if (s_slots[i].state == 2) {
            /* Ready slot: if from different video or in the past, evict immediately */
            if (s_slots[i].video != video || s_slots[i].frame_index < current_frame) {
                s_slots[i].state = 0;
            }
        }
    }
}

static void trigger_prefetch_slot(mlvObject_t *video, uint64_t frame_index, uint64_t current_frame) {
    if (!video || frame_index >= getMlvFrames(video)) return;

    pthread_mutex_lock(&s_prefetch_mutex);

    evict_stale_slots_locked(video, current_frame);

    /* Check if already in slots */
    for (int i = 0; i < NUM_PREFETCH_SLOTS; i++) {
        if (s_slots[i].video == video && s_slots[i].frame_index == frame_index && s_slots[i].state != 0) {
            pthread_mutex_unlock(&s_prefetch_mutex);
            return;
        }
    }

    /* Find an empty slot */
    int target_slot = -1;
    for (int i = 0; i < NUM_PREFETCH_SLOTS; i++) {
        if (s_slots[i].state == 0) {
            target_slot = i;
            break;
        }
    }

    /* If no empty slot, check for slots that are too far ahead */
    if (target_slot < 0) {
        for (int i = 0; i < NUM_PREFETCH_SLOTS; i++) {
            if (s_slots[i].state == 2 && s_slots[i].frame_index > current_frame + NUM_PREFETCH_SLOTS) {
                s_slots[i].state = 0;
                target_slot = i;
                break;
            }
        }
    }

    if (target_slot < 0) {
        pthread_mutex_unlock(&s_prefetch_mutex);
        return;
    }

    int width = getMlvWidth(video);
    int height = getMlvHeight(video);
    size_t needed = (size_t)width * height * sizeof(uint16_t);

    if (s_slots[target_slot].alloc_bytes < needed) {
        free(s_slots[target_slot].buffer);
        s_slots[target_slot].buffer = (uint16_t*)malloc(needed);
        s_slots[target_slot].alloc_bytes = s_slots[target_slot].buffer ? needed : 0;
    }

    if (!s_slots[target_slot].buffer) {
        pthread_mutex_unlock(&s_prefetch_mutex);
        return;
    }

    s_slots[target_slot].video = video;
    s_slots[target_slot].frame_index = frame_index;
    s_slots[target_slot].state = 1; /* loading */

    worker_arg_t *w = (worker_arg_t*)malloc(sizeof(worker_arg_t));
    w->slot_id = target_slot;
    w->video = video;
    w->frame_index = frame_index;

    pthread_create(&s_slots[target_slot].thread, NULL, prefetch_slot_worker, w);
    pthread_detach(s_slots[target_slot].thread);

    pthread_mutex_unlock(&s_prefetch_mutex);
}

void gpu_pipeline_trigger_prefetch(mlvObject_t *video, uint64_t next_frame_index) {
    for (int f = 0; f < NUM_PREFETCH_SLOTS; f++) {
        uint64_t ahead = next_frame_index + f;
        if (video && ahead < getMlvFrames(video)) {
            trigger_prefetch_slot(video, ahead, next_frame_index);
        }
    }
}

int gpu_pipeline_init(void) {
    return opencl_debayer_init();
}

void gpu_pipeline_free(void) {
    pthread_mutex_lock(&s_prefetch_mutex);
    for (int i = 0; i < NUM_PREFETCH_SLOTS; i++) {
        if (s_slots[i].buffer) {
            free(s_slots[i].buffer);
            s_slots[i].buffer = NULL;
            s_slots[i].alloc_bytes = 0;
        }
        s_slots[i].state = 0;
    }
    pthread_mutex_unlock(&s_prefetch_mutex);

    opencl_debayer_free();
}

int gpu_pipeline_is_available(void) {
    return opencl_debayer_is_available();
}

const char* gpu_pipeline_device_name(void) {
    return opencl_debayer_get_device_name();
}

/* Internal helper: loads frame using prefetch cache when available */
static int load_raw_frame(mlvObject_t *video, uint64_t frame_index, uint16_t *raw_frame, size_t raw_size) {
    int found_slot = -1;

    pthread_mutex_lock(&s_prefetch_mutex);
    evict_stale_slots_locked(video, frame_index);

    for (int i = 0; i < NUM_PREFETCH_SLOTS; i++) {
        if (s_slots[i].video == video && s_slots[i].frame_index == frame_index) {
            found_slot = i;
            break;
        }
    }

    if (found_slot >= 0) {
        while (s_slots[found_slot].state == 1) {
            pthread_cond_wait(&s_prefetch_cond, &s_prefetch_mutex);
        }

        if (s_slots[found_slot].state == 2 && s_slots[found_slot].buffer) {
            memcpy(raw_frame, s_slots[found_slot].buffer, raw_size);
            s_slots[found_slot].state = 0; /* Consumed */
            evict_stale_slots_locked(video, frame_index + 1);
            pthread_mutex_unlock(&s_prefetch_mutex);
            return 1;
        }
    }
    pthread_mutex_unlock(&s_prefetch_mutex);

    /* Cache miss: load synchronously */
    if (getMlvRawFrameUint16(video, frame_index, raw_frame) != 0) {
        return 0;
    }

    if (video->llrawproc) {
        int is_dual_iso = (video->llrawproc->diso_validity && video->llrawproc->dual_iso);
        int saved_averaging = video->llrawproc->diso_averaging;
        int saved_chroma = video->llrawproc->chroma_smooth;

        if (is_dual_iso) {
            video->llrawproc->diso_averaging = 1; /* Fast mean23 for real-time playback */
            video->llrawproc->chroma_smooth = 0;  /* Bypass heavy 3x3 CPU blur during playback */
        }

        applyLLRawProcObject(video, raw_frame, raw_size);

        if (is_dual_iso) {
            video->llrawproc->diso_averaging = saved_averaging;
            video->llrawproc->chroma_smooth = saved_chroma;
        }
    }

    return 1;
}

int gpu_pipeline_process_frame_8(
    mlvObject_t *video,
    uint64_t frame_index,
    uint8_t *output_rgb8,
    int gpu_algorithm
) {
    if (!video || !output_rgb8) return 0;
    if (!gpu_pipeline_is_available()) return 0;

    int width = getMlvWidth(video);
    int height = getMlvHeight(video);
    size_t npix = (size_t)width * height;
    size_t raw_size = npix * sizeof(uint16_t);

    static uint16_t *s_raw_cache = NULL;
    static size_t s_raw_alloc = 0;
    if (s_raw_alloc < raw_size) {
        free(s_raw_cache);
        s_raw_cache = (uint16_t*)malloc(raw_size);
        s_raw_alloc = s_raw_cache ? raw_size : 0;
    }
    if (!s_raw_cache) return 0;

    if (!load_raw_frame(video, frame_index, s_raw_cache, raw_size)) {
        return 0;
    }

    for (int f = 1; f <= NUM_PREFETCH_SLOTS; f++) {
        uint64_t ahead = frame_index + f;
        if (ahead < getMlvFrames(video)) {
            trigger_prefetch_slot(video, ahead, frame_index);
        }
    }

    int shift_val = (llrpHQDualIso(video)) ? 0 : (16 - getMlvBitdepth(video));
    if (shift_val > 0) {
        #pragma omp parallel for
        for (size_t i = 0; i < npix; i++) {
            s_raw_cache[i] <<= shift_val;
        }
    }

    int black = (llrpHQDualIso(video)) ? video->processing->black_level : (getMlvBlackLevel(video) << shift_val);
    int white = (llrpHQDualIso(video)) ? video->processing->white_level : (getMlvWhiteLevel(video) << shift_val);
    int cfa = video->RAWI.raw_info.cfa_pattern;
    if (!cfa) cfa = 0x02010100;

    int algo = GPU_DEBAYER_FAST;
    if (gpu_algorithm == GPU_ALGO_CINEMA) algo = GPU_DEBAYER_CINEMA;
    else if (gpu_algorithm == GPU_ALGO_CINEMA_V2) algo = GPU_DEBAYER_CINEMA_V2;

    processingObject_t *p = video->processing;
    gpu_postprocess_params_t post;
    memset(&post, 0, sizeof(post));
    if (p->use_cam_matrix > 0) {
        for (int i = 0; i < 9; i++) post.matrix[i] = (float)p->proper_wb_matrix[i];
    } else {
        post.matrix[0] = 1.0f; post.matrix[4] = 1.0f; post.matrix[8] = 1.0f;
    }
    post.wb_mult[0] = (float)p->final_matrix[0];
    post.wb_mult[1] = (float)p->final_matrix[4];
    post.wb_mult[2] = (float)p->final_matrix[8];
    post.levels_lut = p->pre_calc_levels;

    static uint16_t s_composed_gamma_8[65536];
    if (p->allow_creative_adjustments) {
        #pragma omp parallel for
        for (int i = 0; i < 65536; i++) {
            s_composed_gamma_8[i] = p->pre_calc_curve_r[p->pre_calc_gamma[i]];
        }
    } else {
        #pragma omp parallel for
        for (int i = 0; i < 65536; i++) {
            s_composed_gamma_8[i] = p->pre_calc_gamma[i];
        }
    }
    post.gamma_lut = s_composed_gamma_8;
    post.sharpen_strength = (float)p->sharpen;
    post.rgb_to_Y[0] = 0.21267285f;
    post.rgb_to_Y[1] = 0.71515217f;
    post.rgb_to_Y[2] = 0.07217500f;
    post.agx = p->AgX;

    int is_bright[4] = {0, 0, 1, 1};
    int ok = opencl_process_full_frame(
        NULL,
        output_rgb8,
        s_raw_cache,
        width,
        height,
        black,
        white,
        white,
        cfa,
        0, 0.0f, 3.0f, is_bright,
        algo,
        &post
    );

    return ok;
}

int gpu_pipeline_process_frame(
    mlvObject_t *video,
    uint64_t frame_index,
    uint16_t *output_rgb16,
    int gpu_algorithm
) {
    if (!video || !output_rgb16) return 0;
    if (!gpu_pipeline_is_available()) return 0;

    int width = getMlvWidth(video);
    int height = getMlvHeight(video);
    size_t npix = (size_t)width * height;
    size_t raw_size = npix * sizeof(uint16_t);

    static uint16_t *s_raw_cache_16 = NULL;
    static size_t s_raw_alloc_16 = 0;
    if (s_raw_alloc_16 < raw_size) {
        free(s_raw_cache_16);
        s_raw_cache_16 = (uint16_t*)malloc(raw_size);
        s_raw_alloc_16 = s_raw_cache_16 ? raw_size : 0;
    }
    if (!s_raw_cache_16) return 0;

    if (!load_raw_frame(video, frame_index, s_raw_cache_16, raw_size)) {
        return 0;
    }

    for (int f = 1; f <= NUM_PREFETCH_SLOTS; f++) {
        uint64_t ahead = frame_index + f;
        if (ahead < getMlvFrames(video)) {
            trigger_prefetch_slot(video, ahead, frame_index);
        }
    }

    int shift_val = (llrpHQDualIso(video)) ? 0 : (16 - getMlvBitdepth(video));
    if (shift_val > 0) {
        #pragma omp parallel for
        for (size_t i = 0; i < npix; i++) {
            s_raw_cache_16[i] <<= shift_val;
        }
    }

    int black = (llrpHQDualIso(video)) ? video->processing->black_level : (getMlvBlackLevel(video) << shift_val);
    int white = (llrpHQDualIso(video)) ? video->processing->white_level : (getMlvWhiteLevel(video) << shift_val);
    int cfa = video->RAWI.raw_info.cfa_pattern;
    if (!cfa) cfa = 0x02010100;

    int algo = GPU_DEBAYER_FAST;
    if (gpu_algorithm == GPU_ALGO_CINEMA) algo = GPU_DEBAYER_CINEMA;
    else if (gpu_algorithm == GPU_ALGO_CINEMA_V2) algo = GPU_DEBAYER_CINEMA_V2;

    processingObject_t *p = video->processing;
    gpu_postprocess_params_t post;
    memset(&post, 0, sizeof(post));
    if (p->use_cam_matrix > 0) {
        for (int i = 0; i < 9; i++) post.matrix[i] = (float)p->proper_wb_matrix[i];
    } else {
        post.matrix[0] = 1.0f; post.matrix[4] = 1.0f; post.matrix[8] = 1.0f;
    }
    post.wb_mult[0] = (float)p->final_matrix[0];
    post.wb_mult[1] = (float)p->final_matrix[4];
    post.wb_mult[2] = (float)p->final_matrix[8];
    post.levels_lut = p->pre_calc_levels;

    static uint16_t s_composed_gamma_16[65536];
    if (p->allow_creative_adjustments) {
        #pragma omp parallel for
        for (int i = 0; i < 65536; i++) {
            s_composed_gamma_16[i] = p->pre_calc_curve_r[p->pre_calc_gamma[i]];
        }
    } else {
        #pragma omp parallel for
        for (int i = 0; i < 65536; i++) {
            s_composed_gamma_16[i] = p->pre_calc_gamma[i];
        }
    }
    post.gamma_lut = s_composed_gamma_16;
    post.sharpen_strength = (float)p->sharpen;
    post.rgb_to_Y[0] = 0.21267285f;
    post.rgb_to_Y[1] = 0.71515217f;
    post.rgb_to_Y[2] = 0.07217500f;
    post.agx = p->AgX;

    int is_bright[4] = {0, 0, 1, 1};
    return opencl_process_full_frame(
        output_rgb16,
        NULL,
        s_raw_cache_16,
        width,
        height,
        black,
        white,
        white,
        cfa,
        0, 0.0f, 3.0f, is_bright,
        algo,
        &post
    );
}
