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

#define RING_SIZE 4

typedef struct {
    uint16_t *buffer;
    size_t alloc_bytes;
    uint64_t frame_index;
    mlvObject_t *video;
    int is_preview;
    volatile int ready; /* 0: empty/invalid, 1: ready */
} ring_slot_t;

static ring_slot_t s_ring[RING_SIZE];
static pthread_mutex_t s_ring_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t  s_ring_cond  = PTHREAD_COND_INITIALIZER;
static pthread_t       s_worker_thread;
static volatile int    s_worker_started = 0;
static volatile int    s_worker_running = 1;
static mlvObject_t*    s_active_video = NULL;
static volatile uint64_t s_prefetch_next = 0;
static volatile int    s_prefetch_is_preview = 1;

static void* prefetch_worker_func(void* arg) {
    (void)arg;
    while (s_worker_running) {
        pthread_mutex_lock(&s_ring_mutex);

        while (s_worker_running && !s_active_video) {
            pthread_cond_wait(&s_ring_cond, &s_ring_mutex);
        }
        if (!s_worker_running) {
            pthread_mutex_unlock(&s_ring_mutex);
            break;
        }

        mlvObject_t *video = s_active_video;
        uint64_t target = s_prefetch_next;
        int is_prev = s_prefetch_is_preview;
        uint64_t total_frames = video ? getMlvFrames(video) : 0;

        if (!video || target >= total_frames) {
            /* Past end of file or no video: sleep until consumer changes position */
            pthread_cond_wait(&s_ring_cond, &s_ring_mutex);
            pthread_mutex_unlock(&s_ring_mutex);
            continue;
        }

        /* Check if target frame is already in ring */
        int already_present = 0;
        for (int i = 0; i < RING_SIZE; i++) {
            if (s_ring[i].video == video && s_ring[i].frame_index == target && s_ring[i].ready && s_ring[i].is_preview == is_prev) {
                already_present = 1;
                break;
            }
        }
        if (already_present) {
            s_prefetch_next = target + 1;
            pthread_mutex_unlock(&s_ring_mutex);
            continue;
        }

        /* Find an empty slot in ring */
        int slot = -1;
        for (int i = 0; i < RING_SIZE; i++) {
            if (!s_ring[i].ready) {
                slot = i;
                break;
            }
        }

        if (slot < 0) {
            /* All slots full: wait for consumer to take a frame */
            pthread_cond_wait(&s_ring_cond, &s_ring_mutex);
            pthread_mutex_unlock(&s_ring_mutex);
            continue;
        }

        /* Reserve slot */
        s_ring[slot].video = video;
        s_ring[slot].frame_index = target;
        s_ring[slot].is_preview = is_prev;
        s_ring[slot].ready = 0;

        int width = getMlvWidth(video);
        int height = getMlvHeight(video);
        size_t needed = (size_t)width * height * sizeof(uint16_t);

        if (s_ring[slot].alloc_bytes < needed) {
            free(s_ring[slot].buffer);
            s_ring[slot].buffer = (uint16_t*)malloc(needed);
            s_ring[slot].alloc_bytes = s_ring[slot].buffer ? needed : 0;
        }
        uint16_t *dest = s_ring[slot].buffer;
        s_prefetch_next = target + 1;
        pthread_mutex_unlock(&s_ring_mutex);

        if (!dest) continue;

        /* Load raw frame without holding ring mutex */
        int ok = (getMlvRawFrameUint16(video, target, dest) == 0);
        if (ok && video->llrawproc) {
            int is_dual_iso = (video->llrawproc->diso_validity && video->llrawproc->dual_iso);
            int saved_averaging = video->llrawproc->diso_averaging;
            int saved_chroma = video->llrawproc->chroma_smooth;

            if (is_dual_iso && is_prev) {
                video->llrawproc->diso_averaging = 1; /* Fast mean23 for real-time playback */
                video->llrawproc->chroma_smooth = 0;  /* Bypass heavy 3x3 blur during playback */
            }

            applyLLRawProcObject(video, dest, needed);

            if (is_dual_iso && is_prev) {
                video->llrawproc->diso_averaging = saved_averaging;
                video->llrawproc->chroma_smooth = saved_chroma;
            }
        }

        pthread_mutex_lock(&s_ring_mutex);
        if (s_ring[slot].video == video && s_ring[slot].frame_index == target && s_ring[slot].is_preview == is_prev) {
            s_ring[slot].ready = ok ? 1 : 0;
        }
        pthread_cond_broadcast(&s_ring_cond);
        pthread_mutex_unlock(&s_ring_mutex);
    }
    return NULL;
}

static void start_worker_if_needed(void) {
    if (!s_worker_started) {
        pthread_mutex_lock(&s_ring_mutex);
        if (!s_worker_started) {
            s_worker_running = 1;
            pthread_create(&s_worker_thread, NULL, prefetch_worker_func, NULL);
            s_worker_started = 1;
        }
        pthread_mutex_unlock(&s_ring_mutex);
    }
}

void gpu_pipeline_trigger_prefetch(mlvObject_t *video, uint64_t next_frame_index) {
    if (!video) return;
    start_worker_if_needed();
    pthread_mutex_lock(&s_ring_mutex);
    s_active_video = video;
    if (s_prefetch_next < next_frame_index) {
        s_prefetch_next = next_frame_index;
    }
    pthread_cond_signal(&s_ring_cond);
    pthread_mutex_unlock(&s_ring_mutex);
}

int gpu_pipeline_init(void) {
    start_worker_if_needed();
    return opencl_debayer_init();
}

void gpu_pipeline_free(void) {
    pthread_mutex_lock(&s_ring_mutex);
    s_worker_running = 0;
    pthread_cond_broadcast(&s_ring_cond);
    pthread_mutex_unlock(&s_ring_mutex);

    if (s_worker_started) {
        pthread_join(s_worker_thread, NULL);
        s_worker_started = 0;
    }

    pthread_mutex_lock(&s_ring_mutex);
    for (int i = 0; i < RING_SIZE; i++) {
        if (s_ring[i].buffer) {
            free(s_ring[i].buffer);
            s_ring[i].buffer = NULL;
            s_ring[i].alloc_bytes = 0;
        }
        s_ring[i].ready = 0;
    }
    s_active_video = NULL;
    pthread_mutex_unlock(&s_ring_mutex);

    opencl_debayer_free();
}

int gpu_pipeline_is_available(void) {
    return opencl_debayer_is_available();
}

const char* gpu_pipeline_device_name(void) {
    return opencl_debayer_get_device_name();
}

/* Internal helper: loads frame using prefetch cache when available */
static int load_raw_frame(mlvObject_t *video, uint64_t frame_index, uint16_t *raw_frame, size_t raw_size, int is_preview) {
    if (!video || !raw_frame) return 0;
    start_worker_if_needed();

    pthread_mutex_lock(&s_ring_mutex);
    s_active_video = video;
    s_prefetch_is_preview = is_preview;

    /* Check if target frame is already in ring buffer */
    for (int i = 0; i < RING_SIZE; i++) {
        if (s_ring[i].video == video && s_ring[i].frame_index == frame_index && s_ring[i].ready && s_ring[i].is_preview == is_preview) {
            memcpy(raw_frame, s_ring[i].buffer, raw_size);
            s_ring[i].ready = 0; /* Consumed */

            if (s_prefetch_next <= frame_index) {
                s_prefetch_next = frame_index + 1;
            }
            pthread_cond_signal(&s_ring_cond);
            pthread_mutex_unlock(&s_ring_mutex);
            return 1; /* Cache hit! */
        }
    }

    /* Cache miss: invalidate slots older than requested frame and trigger worker */
    for (int i = 0; i < RING_SIZE; i++) {
        if (s_ring[i].video != video || s_ring[i].frame_index <= frame_index) {
            s_ring[i].ready = 0;
        }
    }
    s_prefetch_next = frame_index + 1;
    pthread_cond_signal(&s_ring_cond);
    pthread_mutex_unlock(&s_ring_mutex);

    /* Synchronous read for current frame */
    if (getMlvRawFrameUint16(video, frame_index, raw_frame) != 0) {
        return 0;
    }

    if (video->llrawproc) {
        int is_dual_iso = (video->llrawproc->diso_validity && video->llrawproc->dual_iso);
        int saved_averaging = video->llrawproc->diso_averaging;
        int saved_chroma = video->llrawproc->chroma_smooth;

        if (is_dual_iso && is_preview) {
            video->llrawproc->diso_averaging = 1; /* Fast mean23 for real-time playback */
            video->llrawproc->chroma_smooth = 0;  /* Bypass heavy 3x3 CPU blur during playback */
        }

        applyLLRawProcObject(video, raw_frame, raw_size);

        if (is_dual_iso && is_preview) {
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

    if (!load_raw_frame(video, frame_index, s_raw_cache, raw_size, 1)) {
        return 0;
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

    if (!load_raw_frame(video, frame_index, s_raw_cache_16, raw_size, 0)) {
        return 0;
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
