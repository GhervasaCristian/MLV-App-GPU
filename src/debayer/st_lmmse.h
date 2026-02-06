#ifndef ST_LMMSE_H
#define ST_LMMSE_H

#include <stdint.h>
#include "../mlv/video_mlv.h"

#ifdef __cplusplus
extern "C" {
#endif

// Opaque handle for GPU context (to keep CUDA types out of C headers)
typedef void* GpuContextHandle;

// Context management
GpuContextHandle st_lmmse_init_context(int width, int height);
void st_lmmse_free_context(GpuContextHandle handle);

// Check if frame is cached in GPU ring buffer
int st_lmmse_has_frame(GpuContextHandle handle, uint64_t frame_idx);

// Upload frame to GPU ring buffer
int st_lmmse_upload_frame(GpuContextHandle handle, uint64_t frame_idx, uint16_t* raw_data);

// Process frame (Frame data must be pre-uploaded)
int st_lmmse_process_frame(
    GpuContextHandle handle,
    uint16_t* output_rgb_frame, // Host pointer to output RGB buffer
    int width,
    int height,
    uint64_t frame_idx,
    int algorithm_mode,
    int black_level,
    int white_level,
    int cfa_pattern
);

#ifdef __cplusplus
}
#endif

#endif // ST_LMMSE_H
