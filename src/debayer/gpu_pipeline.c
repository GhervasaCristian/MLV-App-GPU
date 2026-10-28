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

    /* If no empty slot, check for slots that are too far ahead (e.g. > current_frame + NUM_PREFETCH_SLOTS) */
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
            goto apply_fixes;
        }
    }
    pthread_mutex_unlock(&s_prefetch_mutex);

    /* Cache miss: load synchronously */
    if (getMlvRawFrameUint16(video, frame_index, raw_frame) != 0) {
        return 0;
    }

apply_fixes:
    if (video->llrawproc) {
        applyLLRawProcObject(video, raw_frame, raw_size);
    }

    return 1;
}

static void setup_dualiso_params(
    mlvObject_t *video,
    int black,
    int white,
    float *corr_ev,
    float *overlap,
    int *white_darkened,
    int is_bright[4]
) {
    int diso1 = video->llrawproc->diso1;
    int diso2 = video->llrawproc->diso2;
    if (diso1 > 0 && diso2 > 0) {
        *corr_ev = (float)fabs(log2((double)diso2 / (double)diso1));
        *overlap = fmax(0.5f, 11.0f - *corr_ev);
        *white_darkened = (int)((white - black) * pow(2.0, -(double)(*corr_ev)) + black);
    }
    int pattern = video->llrawproc->diso_pattern;
    if (pattern == 1) {
        is_bright[0] = 1; is_bright[1] = 0; is_bright[2] = 1; is_bright[3] = 0;
    } else if (pattern == 2) {
        is_bright[0] = 0; is_bright[1] = 0; is_bright[2] = 1; is_bright[3] = 1;
    } else if (pattern == 3) {
        is_bright[0] = 0; is_bright[1] = 1; is_bright[2] = 1; is_bright[3] = 0;
    } else {
        is_bright[0] = 0; is_bright[1] = 1; is_bright[2] = 0; is_bright[3] = 1;
    }
}


int gpu_pipeline_process_frame_8(
    mlvObject_t *video,
    uint64_t frame_index,
    uint8_t *output_rgb8,
    int gpu_algorithm
) {
    if (!video || !output_rgb8) return 0;
    int width = getMlvWidth(video);
    int height = getMlvHeight(video);
    size_t rgb_size = (size_t)width * height * 3 * sizeof(uint16_t);

    static uint16_t *s_tmp_debayer = NULL;
    static uint16_t *s_tmp_proc = NULL;
    static size_t s_tmp_alloc = 0;
    if (s_tmp_alloc < rgb_size) {
        free(s_tmp_debayer);
        free(s_tmp_proc);
        s_tmp_debayer = (uint16_t*)malloc(rgb_size);
        s_tmp_proc = (uint16_t*)malloc(rgb_size);
        s_tmp_alloc = (s_tmp_debayer && s_tmp_proc) ? rgb_size : 0;
    }
    if (!s_tmp_debayer || !s_tmp_proc) return 0;

    if (!gpu_pipeline_process_frame(video, frame_index, s_tmp_debayer, gpu_algorithm)) {
        return 0;
    }

    applyProcessingObject(video->processing, width, height, s_tmp_debayer, s_tmp_proc, 12, 1, frame_index);

    size_t np = (size_t)width * height * 3;
    #pragma omp parallel for
    for (size_t i = 0; i < np; i++) {
        output_rgb8[i] = (uint8_t)(s_tmp_proc[i] >> 8);
    }
    return 1;
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
    size_t raw_size = (size_t)width * height * sizeof(uint16_t);

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

    /* Shift raw sensor data to full 16-bit range if not already 16-bit (e.g. non-HQ Dual ISO or normal clips) */
    int shift_val = (llrpHQDualIso(video)) ? 0 : (16 - getMlvBitdepth(video));
    if (shift_val > 0) {
        size_t npix = (size_t)width * height;
        #pragma omp parallel for
        for (size_t i = 0; i < npix; i++) {
            s_raw_cache_16[i] <<= shift_val;
        }
    }


    int black = getMlvBlackLevel(video) << shift_val;
    int white = getMlvWhiteLevel(video) << shift_val;
    int cfa = video->RAWI.raw_info.cfa_pattern;
    if (!cfa) cfa = 0x02010100;

    int algo = GPU_DEBAYER_FAST;
    if (gpu_algorithm == GPU_ALGO_CINEMA) algo = GPU_DEBAYER_CINEMA;
    else if (gpu_algorithm == GPU_ALGO_CINEMA_V2) algo = GPU_DEBAYER_CINEMA_V2;

    int success = opencl_debayer_process(
        output_rgb16,
        s_raw_cache_16,
        width,
        height,
        black,
        white,
        cfa,
        algo
    );

    return success;
}

int gpu_pipeline_dualiso_to_bayer(
    mlvObject_t *video,
    uint64_t frame_index,
    uint16_t *bayer_fused_out
) {
    if (!video || !bayer_fused_out) return 0;
    if (!gpu_pipeline_is_available()) return 0;

    int width = getMlvWidth(video);
    int height = getMlvHeight(video);
    size_t raw_size = (size_t)width * height * sizeof(uint16_t);

    uint16_t *raw_frame = (uint16_t*)malloc(raw_size);
    if (!raw_frame) return 0;

    if (getMlvRawFrameUint16(video, frame_index, raw_frame) != 0) {
        free(raw_frame);
        return 0;
    }

    if (video->llrawproc) {
        int saved_diso = video->llrawproc->dual_iso;
        video->llrawproc->dual_iso = 0;
        applyLLRawProcObject(video, raw_frame, raw_size);
        video->llrawproc->dual_iso = saved_diso;
    }

    int black = getMlvBlackLevel(video);
    int white = getMlvWhiteLevel(video);
    int white_darkened = white;

    float corr_ev = 0.0f;
    float overlap = 3.0f;
    int is_bright[4] = { 0, 1, 0, 1 };

    setup_dualiso_params(video, black, white, &corr_ev, &overlap, &white_darkened, is_bright);

    int success = opencl_dualiso_process(
        bayer_fused_out,
        raw_frame,
        width,
        height,
        black,
        white,
        white_darkened,
        corr_ev,
        overlap,
        is_bright
    );

    free(raw_frame);
    return success;
}
