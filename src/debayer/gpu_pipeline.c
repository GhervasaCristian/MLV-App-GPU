#include "gpu_pipeline.h"
#include "opencl_debayer.h"
#include "../mlv/video_mlv.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int gpu_pipeline_init(void) {
    return opencl_debayer_init();
}

void gpu_pipeline_free(void) {
    opencl_debayer_free();
}

int gpu_pipeline_is_available(void) {
    return opencl_debayer_is_available();
}

const char* gpu_pipeline_device_name(void) {
    return opencl_debayer_get_device_name();
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
    size_t pixels_count = (size_t)width * height;
    size_t raw_size = pixels_count * sizeof(uint16_t);

    uint16_t *raw_frame = (uint16_t *)malloc(raw_size);
    if (!raw_frame) return 0;

    if (getMlvRawFrameUint16(video, frame_index, raw_frame) != 0) {
        free(raw_frame);
        return 0;
    }

    int is_dual_iso = (video->llrawproc && video->llrawproc->diso_validity && video->llrawproc->dual_iso);
    int saved_diso = 0;

    /* Apply low-level raw fixes (bad pixels, focus pixels, pattern noise) on CPU */
    if (video->llrawproc) {
        saved_diso = video->llrawproc->dual_iso;
        if (is_dual_iso) {
            video->llrawproc->dual_iso = 0; /* Temporarily bypass CPU dual ISO */
        }
        applyLLRawProcObject(video, raw_frame, raw_size);
        video->llrawproc->dual_iso = saved_diso;
    }

    int black = getMlvBlackLevel(video);
    int white = getMlvWhiteLevel(video);
    int white_darkened = white;
    int cfa = video->RAWI.raw_info.cfa_pattern;

    float corr_ev = 0.0f;
    float overlap = 3.0f;
    int is_bright[4] = { 0, 1, 0, 1 };

    if (is_dual_iso) {
        int diso1 = video->llrawproc->diso1;
        int diso2 = video->llrawproc->diso2;
        if (diso1 > 0 && diso2 > 0) {
            corr_ev = (float)fabs(log2((double)diso2 / (double)diso1));
            overlap = fmax(0.5f, 11.0f - corr_ev);
            white_darkened = (int)((white - black) * pow(2.0, -(double)corr_ev) + black);
        }
        int pattern = video->llrawproc->diso_pattern;
        /* Default row brightness pattern based on ML DISO block */
        if (pattern == 1) {
            is_bright[0] = 1; is_bright[1] = 0; is_bright[2] = 1; is_bright[3] = 0;
        } else {
            is_bright[0] = 0; is_bright[1] = 1; is_bright[2] = 0; is_bright[3] = 1;
        }
    }

    int algo = (gpu_algorithm == GPU_ALGO_CINEMA) ? GPU_DEBAYER_CINEMA : GPU_DEBAYER_FAST;

    int success = opencl_process_full_frame(
        output_rgb16,
        NULL,
        raw_frame,
        width,
        height,
        black,
        white,
        white_darkened,
        cfa,
        is_dual_iso,
        corr_ev,
        overlap,
        is_bright,
        algo
    );

    free(raw_frame);
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
    size_t pixels_count = (size_t)width * height;
    size_t raw_size = pixels_count * sizeof(uint16_t);

    uint16_t *raw_frame = (uint16_t *)malloc(raw_size);
    if (!raw_frame) return 0;

    if (getMlvRawFrameUint16(video, frame_index, raw_frame) != 0) {
        free(raw_frame);
        return 0;
    }

    int saved_diso = 0;
    if (video->llrawproc) {
        saved_diso = video->llrawproc->dual_iso;
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

    int diso1 = video->llrawproc ? video->llrawproc->diso1 : 100;
    int diso2 = video->llrawproc ? video->llrawproc->diso2 : 800;
    if (diso1 > 0 && diso2 > 0) {
        corr_ev = (float)fabs(log2((double)diso2 / (double)diso1));
        overlap = fmax(0.5f, 11.0f - corr_ev);
        white_darkened = (int)((white - black) * pow(2.0, -(double)corr_ev) + black);
    }
    int pattern = video->llrawproc ? video->llrawproc->diso_pattern : 0;
    if (pattern == 1) {
        is_bright[0] = 1; is_bright[1] = 0; is_bright[2] = 1; is_bright[3] = 0;
    } else {
        is_bright[0] = 0; is_bright[1] = 1; is_bright[2] = 0; is_bright[3] = 1;
    }

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
