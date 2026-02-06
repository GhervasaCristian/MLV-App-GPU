#include "debayer.h"
#include "st_lmmse.h"
#include <stdio.h>

int debayerStLmmseHasFrame(void* gpu_context, uint64_t frame_index) {
    return gpu_context ? st_lmmse_has_frame(gpu_context, frame_index) : 0;
}

void debayerStLmmseUpload(void* gpu_context, uint64_t frame_index, uint16_t* raw_data) {
    if (gpu_context) st_lmmse_upload_frame(gpu_context, frame_index, raw_data);
}

void debayerStLmmseGpu(uint16_t * __restrict debayerto, int width, int height, void* gpu_context, uint64_t frame_index, int algo_mode, int black, int white, int cfa_pattern)
{
    // If context is managed externally (in mlvObject), we assume it's valid or checked before call.
    // However, the actual CUDA calls are in st_lmmse.c.
    // This function acts as the bridge if needed, but since we are calling st_lmmse_process_frame directly from frame_caching or via this wrapper.
    
    // We can just call the handle directly
    if (gpu_context) {
        st_lmmse_process_frame(gpu_context, debayerto, width, height, frame_index, algo_mode, black, white, cfa_pattern);
    }
}
