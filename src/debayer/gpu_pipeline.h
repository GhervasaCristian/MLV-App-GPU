#ifndef GPU_PIPELINE_H
#define GPU_PIPELINE_H

#include <stdint.h>
#include "../mlv/mlv_object.h"
#include "opencl_debayer.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GPU Algorithms */
#define GPU_ALGO_FAST       0   /* Multi-Gradient (Hamilton-Adams) - Real-time Playback */
#define GPU_ALGO_CINEMA     1   /* RCD v1 (3-pass with median) */
#define GPU_ALGO_CINEMA_V2  2   /* RCD v2 (RawTherapee v2.3 ratio-corrected, zero red fringe) */
#define GPU_ALGO_CINEMA_V3  3   /* RCD v3 (Ultra Cinema 6-pass guided bilateral anti-moiré) */

int gpu_pipeline_init(void);
void gpu_pipeline_free(void);
int gpu_pipeline_is_available(void);
const char* gpu_pipeline_device_name(void);

/* Device enumeration and selection */
int gpu_pipeline_get_device_count(void);
int gpu_pipeline_get_device_info(int index, gpu_device_entry_t *info);
int gpu_pipeline_get_selected_device(void);
int gpu_pipeline_get_active_device_index(void);
int gpu_pipeline_set_selected_device(int index);
int gpu_pipeline_set_selected_device_by_name(const char *name);

/* Debayers a frame on GPU into 16-bit linear RGB (unprocessed).
 * Uses background prefetch ring buffer when available.
 * Returns 1 on success, 0 on failure (for fail-proof CPU fallback). */
int gpu_pipeline_get_ring_ready_count(void);

int gpu_pipeline_debayer_frame(
    mlvObject_t *video,
    uint64_t frame_index,
    uint16_t *debayered_rgb16,
    int gpu_algorithm
);

/* Process a raw frame through GPU Debayer and applyProcessingObject to 16-bit RGB.
 * Returns 1 on success, 0 on failure (for fail-proof CPU fallback). */
int gpu_pipeline_process_frame(
    mlvObject_t *video,
    uint64_t frame_index,
    uint16_t *output_rgb16,
    int gpu_algorithm
);

/* Process a raw frame through GPU Dual ISO, GPU Debayer, and GPU Post-Processing directly to 8-bit RGB preview.
 * Returns 1 on success, 0 on failure (for fail-proof CPU fallback). */
int gpu_pipeline_process_frame_8(
    mlvObject_t *video,
    uint64_t frame_index,
    uint8_t *output_rgb8,
    int gpu_algorithm
);

/* Process Dual ISO frame to 16-bit fused Bayer on GPU (for CinemaDNG export) */
int gpu_pipeline_dualiso_to_bayer(
    mlvObject_t *video,
    uint64_t frame_index,
    uint16_t *bayer_fused_out
);

/* Background asynchronous frame prefetching */
void gpu_pipeline_trigger_prefetch(mlvObject_t *video, uint64_t next_frame_index);

/* Flush ring buffer cache */
void gpu_pipeline_flush_cache(void);

#ifdef __cplusplus
}
#endif

#endif /* GPU_PIPELINE_H */
