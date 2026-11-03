#include "../processing/mlv_profiler.h"
#include "gpu_pipeline.h"
#include "opencl_debayer.h"
#include "debayer.h"
#include "../mlv/video_mlv.h"
#include "../processing/raw_processing.h"
#include "../mlv/llrawproc/llrawproc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <pthread.h>

#define RING_SIZE 16

typedef struct {
    uint16_t *buffer;       /* 16-bit linear RGB debayered buffer */
    size_t alloc_bytes;
    uint64_t frame_index;
    mlvObject_t *video;
    int gpu_algo;
    volatile int ready;     /* 0: empty/decoding, 1: ready */
} ring_slot_t;

static ring_slot_t s_ring[RING_SIZE];
static pthread_mutex_t s_ring_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t  s_ring_cond  = PTHREAD_COND_INITIALIZER;
static pthread_mutex_t s_io_mutex   = PTHREAD_MUTEX_INITIALIZER;
static pthread_t       s_worker_thread;
static volatile int    s_worker_started = 0;
static volatile int    s_worker_running = 1;
static mlvObject_t*    s_active_video = NULL;
static volatile uint64_t s_prefetch_next = 0;
static volatile int    s_prefetch_algo = GPU_ALGO_CINEMA;

static uint16_t *s_worker_raw = NULL;
static size_t s_worker_raw_alloc = 0;

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
        int algo = s_prefetch_algo;
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
            if (s_ring[i].video == video && s_ring[i].frame_index == target && s_ring[i].gpu_algo == algo) {
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
            if (!s_ring[i].ready && s_ring[i].frame_index != target) {
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

        /* Reserve slot for 16-bit RGB debayered frame */
        s_ring[slot].video = video;
        s_ring[slot].frame_index = target;
        s_ring[slot].gpu_algo = algo;
        s_ring[slot].ready = 0;
        s_prefetch_next = target + 1;

        int width = getMlvWidth(video);
        int height = getMlvHeight(video);
        size_t npix = (size_t)width * height;
        size_t rgb_needed = npix * 3 * sizeof(uint16_t);

        if (s_ring[slot].alloc_bytes < rgb_needed) {
            free(s_ring[slot].buffer);
            s_ring[slot].buffer = (uint16_t*)malloc(rgb_needed);
            s_ring[slot].alloc_bytes = s_ring[slot].buffer ? rgb_needed : 0;
        }
        uint16_t *dest_rgb = s_ring[slot].buffer;
        pthread_mutex_unlock(&s_ring_mutex);

        if (!dest_rgb) continue;

        /* Allocate persistent worker raw Bayer buffer */
        size_t raw_needed = npix * sizeof(uint16_t);
        if (s_worker_raw_alloc < raw_needed) {
            free(s_worker_raw);
            s_worker_raw = (uint16_t*)malloc(raw_needed);
            s_worker_raw_alloc = s_worker_raw ? raw_needed : 0;
        }
        if (!s_worker_raw) continue;

        /* Read raw frame holding s_io_mutex ONLY during disk read (<0.5ms) */
        double t_io0 = mlv_get_time_ms();
        pthread_mutex_lock(&s_io_mutex);
        int ok = (getMlvRawFrameUint16(video, target, s_worker_raw) == 0);
        pthread_mutex_unlock(&s_io_mutex);
        mlv_profiler_record_lj92(mlv_get_time_ms() - t_io0);

        if (ok && video->llrawproc && video->llrawproc->fix_raw) {
            double t_diso0 = mlv_get_time_ms();
            applyLLRawProcObject(video, s_worker_raw, raw_needed);
            mlv_profiler_record_diso(mlv_get_time_ms() - t_diso0);
        }

        int shift_val = (llrpHQDualIso(video)) ? 0 : (16 - getMlvBitdepth(video));
        if (shift_val > 0) {
            #pragma omp parallel for
            for (size_t i = 0; i < npix; i++) {
                s_worker_raw[i] <<= shift_val;
            }
        }

        int black = (llrpHQDualIso(video)) ? (video->processing ? (int)video->processing->black_level : (getMlvBlackLevel(video) << (16 - getMlvBitdepth(video)))) : (getMlvBlackLevel(video) << shift_val);
        int white = (llrpHQDualIso(video)) ? (video->processing ? (int)video->processing->white_level : (getMlvWhiteLevel(video) << (16 - getMlvBitdepth(video)))) : (getMlvWhiteLevel(video) << shift_val);
        int cfa = video->RAWI.raw_info.cfa_pattern ? video->RAWI.raw_info.cfa_pattern : 0x02010100;

        int debayer_algo = GPU_DEBAYER_FAST;
        if (algo == GPU_ALGO_CINEMA) debayer_algo = GPU_DEBAYER_CINEMA;
        else if (algo == GPU_ALGO_CINEMA_V2) debayer_algo = GPU_DEBAYER_CINEMA_V2;
        else if (algo == GPU_ALGO_CINEMA_V3) debayer_algo = GPU_DEBAYER_CINEMA_V3;

        int debayer_ok = 0;
        if (ok) {
            debayer_ok = debayerGpu(dest_rgb, s_worker_raw, width, height, black, white, cfa, debayer_algo);
        }

        pthread_mutex_lock(&s_ring_mutex);
        if (s_ring[slot].video == video && s_ring[slot].frame_index == target && s_ring[slot].gpu_algo == algo) {
            s_ring[slot].ready = (ok && debayer_ok) ? 1 : 0;
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


int gpu_pipeline_get_ring_ready_count(void) {
    pthread_mutex_lock(&s_ring_mutex);
    int count = 0;
    for (int i = 0; i < RING_SIZE; i++) {
        if (s_ring[i].ready) count++;
    }
    pthread_mutex_unlock(&s_ring_mutex);
    return count;
}

void gpu_pipeline_trigger_prefetch(mlvObject_t *video, uint64_t next_frame_index) {
    if (!video) return;
    start_worker_if_needed();
    pthread_mutex_lock(&s_ring_mutex);
    s_active_video = video;
    if (s_prefetch_next < next_frame_index) {
        s_prefetch_next = next_frame_index;
    }
    pthread_cond_broadcast(&s_ring_cond);
    pthread_mutex_unlock(&s_ring_mutex);
}

void gpu_pipeline_flush_cache(void) {
    pthread_mutex_lock(&s_ring_mutex);
    s_active_video = NULL;
    s_prefetch_next = 0;
    for (int i = 0; i < RING_SIZE; i++) {
        s_ring[i].ready = 0;
        s_ring[i].video = NULL;
        s_ring[i].frame_index = (uint64_t)-1;
    }
    pthread_cond_broadcast(&s_ring_cond);
    pthread_mutex_unlock(&s_ring_mutex);

    /* Wait for any active file I/O to finish */
    pthread_mutex_lock(&s_io_mutex);
    pthread_mutex_unlock(&s_io_mutex);
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
    if (s_worker_raw) {
        free(s_worker_raw);
        s_worker_raw = NULL;
        s_worker_raw_alloc = 0;
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

int gpu_pipeline_get_device_count(void) {
    return opencl_debayer_get_device_count();
}

int gpu_pipeline_get_device_info(int index, gpu_device_entry_t *info) {
    return opencl_debayer_get_device_info(index, info);
}

int gpu_pipeline_get_selected_device(void) {
    return opencl_debayer_get_selected_device();
}

int gpu_pipeline_get_active_device_index(void) {
    return opencl_debayer_get_active_device_index();
}

int gpu_pipeline_set_selected_device(int index) {
    gpu_pipeline_free();
    int ok = opencl_debayer_set_selected_device(index);
    if (ok) {
        gpu_pipeline_init();
    }
    return ok;
}

int gpu_pipeline_set_selected_device_by_name(const char *name) {
    gpu_pipeline_free();
    int ok = opencl_debayer_set_selected_device_by_name(name);
    if (ok) {
        gpu_pipeline_init();
    }
    return ok;
}

/* Internal helper: loads raw Bayer frame */
static int load_raw_bayer_frame(mlvObject_t *video, uint64_t frame_index, uint16_t *raw_frame, size_t raw_size) {
    if (!video || !raw_frame) return 0;
    pthread_mutex_lock(&s_io_mutex);
    int ok = (getMlvRawFrameUint16(video, frame_index, raw_frame) == 0);
    pthread_mutex_unlock(&s_io_mutex);

    if (ok && video->llrawproc && video->llrawproc->fix_raw) {
        applyLLRawProcObject(video, raw_frame, raw_size);
    }
    return ok;
}

/* Debayers a frame on GPU into 16-bit linear RGB (unprocessed).
 * Uses background prefetch ring buffer when available. */
int gpu_pipeline_debayer_frame(
    mlvObject_t *video,
    uint64_t frame_index,
    uint16_t *debayered_rgb16,
    int gpu_algorithm
) {
    if (!video || !debayered_rgb16) return 0;
    if (!gpu_pipeline_is_available()) return 0;

    start_worker_if_needed();
    double t_deb0 = mlv_get_time_ms();

    int width = getMlvWidth(video);
    int height = getMlvHeight(video);
    size_t npix = (size_t)width * height;
    size_t rgb_size = npix * 3 * sizeof(uint16_t);

    pthread_mutex_lock(&s_ring_mutex);
    s_active_video = video;
    s_prefetch_algo = gpu_algorithm;

    /* Check if target frame is already in ring buffer */
    for (int i = 0; i < RING_SIZE; i++) {
        if (s_ring[i].video == video && s_ring[i].frame_index == frame_index && s_ring[i].gpu_algo == gpu_algorithm) {
            /* If worker is currently debayering this exact frame, wait for it */
            if (!s_ring[i].ready) {
                while (!s_ring[i].ready && s_ring[i].video == video && s_ring[i].frame_index == frame_index && s_worker_running) {
                    pthread_cond_wait(&s_ring_cond, &s_ring_mutex);
                }
            }

            if (s_ring[i].ready && s_ring[i].video == video && s_ring[i].frame_index == frame_index) {
                memcpy(debayered_rgb16, s_ring[i].buffer, rgb_size);
                s_ring[i].ready = 0; /* Consumed */
                s_ring[i].video = NULL;

                if (s_prefetch_next <= frame_index) {
                    s_prefetch_next = frame_index + 1;
                }
                pthread_cond_broadcast(&s_ring_cond);
                pthread_mutex_unlock(&s_ring_mutex);
                mlv_profiler_record_debayer(mlv_get_time_ms() - t_deb0, 1);
                return 1; /* Instant cache hit! */
            }
            break;
        }
    }

    /* Cache miss: advance prefetch pointer to frame_index + 1 so worker follows immediately */
    if (s_prefetch_next <= frame_index || s_prefetch_next > frame_index + RING_SIZE) {
        s_prefetch_next = frame_index + 1;
    }
    pthread_cond_broadcast(&s_ring_cond);
    pthread_mutex_unlock(&s_ring_mutex);

    /* Synchronous decode and debayer fallback for this frame */
    static uint16_t *s_sync_raw = NULL;
    static size_t s_sync_raw_alloc = 0;
    static pthread_mutex_t s_sync_mutex = PTHREAD_MUTEX_INITIALIZER;

    pthread_mutex_lock(&s_sync_mutex);
    size_t raw_size = npix * sizeof(uint16_t);
    if (s_sync_raw_alloc < raw_size) {
        free(s_sync_raw);
        s_sync_raw = (uint16_t*)malloc(raw_size);
        s_sync_raw_alloc = s_sync_raw ? raw_size : 0;
    }
    if (!s_sync_raw) {
        pthread_mutex_unlock(&s_sync_mutex);
        return 0;
    }

    if (!load_raw_bayer_frame(video, frame_index, s_sync_raw, raw_size)) {
        pthread_mutex_unlock(&s_sync_mutex);
        return 0;
    }

    int shift_val = (llrpHQDualIso(video)) ? 0 : (16 - getMlvBitdepth(video));
    if (shift_val > 0) {
        #pragma omp parallel for
        for (size_t i = 0; i < npix; i++) {
            s_sync_raw[i] <<= shift_val;
        }
    }

    int black = (llrpHQDualIso(video)) ? (video->processing ? (int)video->processing->black_level : (getMlvBlackLevel(video) << (16 - getMlvBitdepth(video)))) : (getMlvBlackLevel(video) << shift_val);
    int white = (llrpHQDualIso(video)) ? (video->processing ? (int)video->processing->white_level : (getMlvWhiteLevel(video) << (16 - getMlvBitdepth(video)))) : (getMlvWhiteLevel(video) << shift_val);
    int cfa = video->RAWI.raw_info.cfa_pattern ? video->RAWI.raw_info.cfa_pattern : 0x02010100;

    int debayer_algo = GPU_DEBAYER_FAST;
    if (gpu_algorithm == GPU_ALGO_CINEMA) debayer_algo = GPU_DEBAYER_CINEMA;
    else if (gpu_algorithm == GPU_ALGO_CINEMA_V2) debayer_algo = GPU_DEBAYER_CINEMA_V2;
    else if (gpu_algorithm == GPU_ALGO_CINEMA_V3) debayer_algo = GPU_DEBAYER_CINEMA_V3;

    int debayer_ok = debayerGpu(debayered_rgb16, s_sync_raw, width, height, black, white, cfa, debayer_algo);
    pthread_mutex_unlock(&s_sync_mutex);
    mlv_profiler_record_debayer(mlv_get_time_ms() - t_deb0, 0);

    return debayer_ok;
}

int gpu_pipeline_process_frame(
    mlvObject_t *video,
    uint64_t frame_index,
    uint16_t *output_rgb16,
    int gpu_algorithm
) {
    if (!video || !output_rgb16) return 0;
    int width = getMlvWidth(video);
    int height = getMlvHeight(video);
    size_t npix = (size_t)width * height;
    size_t rgb_size = npix * 3 * sizeof(uint16_t);

    uint16_t *unprocessed = (uint16_t*)malloc(rgb_size);
    if (!unprocessed) return 0;

    int ok = gpu_pipeline_debayer_frame(video, frame_index, unprocessed, gpu_algorithm);
    if (ok) {
        int threads = video->cpu_cores > 0 ? video->cpu_cores : 8;
        applyProcessingObject(video->processing, width, height, unprocessed, output_rgb16, threads, 1, frame_index);
    }
    free(unprocessed);
    return ok;
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
    size_t npix = (size_t)width * height;
    size_t rgb_size = npix * 3 * sizeof(uint16_t);

    uint16_t *proc16 = (uint16_t*)malloc(rgb_size);
    if (!proc16) return 0;

    int ok = gpu_pipeline_process_frame(video, frame_index, proc16, gpu_algorithm);
    if (ok) {
        #pragma omp parallel for
        for (size_t i = 0; i < npix * 3; i++) {
            output_rgb8[i] = (uint8_t)(proc16[i] >> 8);
        }
    }
    free(proc16);
    return ok;
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
    size_t npix = (size_t)width * height;
    size_t raw_size = npix * sizeof(uint16_t);

    static uint16_t *s_raw_cache_diso = NULL;
    static size_t s_raw_alloc_diso = 0;
    if (s_raw_alloc_diso < raw_size) {
        free(s_raw_cache_diso);
        s_raw_cache_diso = (uint16_t*)malloc(raw_size);
        s_raw_alloc_diso = s_raw_cache_diso ? raw_size : 0;
    }
    if (!s_raw_cache_diso) return 0;

    if (!load_raw_bayer_frame(video, frame_index, s_raw_cache_diso, raw_size)) {
        return 0;
    }

    int shift_val = (llrpHQDualIso(video)) ? 0 : (16 - getMlvBitdepth(video));
    if (shift_val > 0) {
        #pragma omp parallel for
        for (size_t i = 0; i < npix; i++) {
            s_raw_cache_diso[i] <<= shift_val;
        }
    }

    int black = (llrpHQDualIso(video)) ? (video->processing ? video->processing->black_level : (getMlvBlackLevel(video) << (16 - getMlvBitdepth(video)))) : (getMlvBlackLevel(video) << shift_val);
    int white = (llrpHQDualIso(video)) ? (video->processing ? video->processing->white_level : (getMlvWhiteLevel(video) << (16 - getMlvBitdepth(video)))) : (getMlvWhiteLevel(video) << shift_val);

    float corr_ev = 0.0f;
    float overlap = 3.0f;
    int is_bright[4] = {1, 1, 0, 0};
    int white_darkened = white;

    if (video->llrawproc && video->llrawproc->diso_validity && video->llrawproc->dual_iso) {
        int iso1 = video->llrawproc->diso1;
        int iso2 = video->llrawproc->diso2;
        int low_iso = (iso1 < iso2) ? iso1 : iso2;
        int high_iso = (iso1 > iso2) ? iso1 : iso2;
        if (low_iso > 0 && high_iso > 0) {
            corr_ev = log2f((float)high_iso / (float)low_iso);
            if (high_iso >= 6400 && corr_ev > 0.0f) corr_ev -= 1.0f;
        }
        if (video->llrawproc->diso_ev_correction < 0.0) {
            corr_ev = (float)fabs(video->llrawproc->diso_ev_correction);
        }
        white_darkened = (int)((white - black) * powf(2.0f, -corr_ev) + black);

        const int iso_patterns[4][4] = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 0, 1, 1}, {0, 1, 1, 0}};
        int p_idx = video->llrawproc->diso_pattern;
        if (p_idx > 0 && p_idx <= 4) {
            memcpy(is_bright, iso_patterns[p_idx - 1], sizeof(is_bright));
        }
    }

    return opencl_dualiso_process(
        bayer_fused_out,
        s_raw_cache_diso,
        width,
        height,
        black,
        white,
        white_darkened,
        corr_ev,
        overlap,
        is_bright
    );
}
