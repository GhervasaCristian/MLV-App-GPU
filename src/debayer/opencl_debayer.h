#ifndef OPENCL_DEBAYER_H
#define OPENCL_DEBAYER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
    GPU_DEBAYER_FAST = 0,       /* Fast Single Pass - ultra fast playback */
    GPU_DEBAYER_CINEMA = 1,     /* RCD v1 (3-pass with median) */
    GPU_DEBAYER_CINEMA_V2 = 2   /* RCD v2 (RawTherapee v2.3 ratio-corrected, zero red fringe) */
};

int opencl_debayer_init(void);
void opencl_debayer_free(void);
int opencl_debayer_is_available(void);
const char* opencl_debayer_get_device_name(void);

/* Standalone GPU debayer */
int opencl_debayer_process(
    uint16_t *debayerto,
    const uint16_t *bayerdata,
    int width,
    int height,
    int black,
    int white,
    int cfa_pattern,
    int algorithm
);

/* Standalone GPU Dual ISO fusion to 16-bit linear Bayer */
int opencl_dualiso_process(
    uint16_t *bayer_fused_out,
    const uint16_t *raw_in,
    int width,
    int height,
    int black,
    int white,
    int white_darkened,
    float corr_ev,
    float overlap,
    const int is_bright[4]
);

/* Full Unified GPU Pipeline (Dual ISO Fusion + Debayering) */
int opencl_process_full_frame(
    uint16_t *rgb_out_16,
    uint8_t *rgb_out_8,
    const uint16_t *raw_in,
    int width,
    int height,
    int black,
    int white,
    int white_darkened,
    int cfa_pattern,
    int is_dual_iso,
    float corr_ev,
    float overlap,
    const int is_bright[4],
    int algorithm
);

#ifdef __cplusplus
}
#endif

#endif /* OPENCL_DEBAYER_H */
