#ifndef MLV_PROFILER_H
#define MLV_PROFILER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    double t_lj92_ms;        /* Raw disk read & LJ92 bitstream decompression */
    double t_diso_ms;        /* Dual ISO fusion */
    double t_gpu_debayer_ms; /* OpenCL raw->RGB debayer & transfer time */
    double t_rbf_ms;         /* RBF Denoise time (recursive bilateral filter) */
    double t_grading_ms;     /* Tone mapping, color matrix, curves */
    double t_total_frame_ms; /* Full pipeline frame latency */
    int    ring_ready_slots; /* Pre-debayered frames currently queued in ring */
    int    ring_total_slots; /* Total slots in ring buffer */
    int    is_cache_hit;     /* 1 if frame was instant cache hit from ring */
    uint64_t frame_index;    /* Frame number measured */
} mlv_telemetry_t;

/* Reset / initialize profiler */
void mlv_profiler_init(void);

/* Record stage durations */
void mlv_profiler_record_lj92(double ms);
void mlv_profiler_record_diso(double ms);
void mlv_profiler_record_debayer(double ms, int cache_hit);
void mlv_profiler_record_rbf(double ms);
void mlv_profiler_record_grading(double ms);
void mlv_profiler_record_frame_done(uint64_t frame_index, double total_ms, int ring_ready, int ring_total);

/* Retrieve snapshot of latest telemetry */
void mlv_profiler_get_latest(mlv_telemetry_t *dest);

/* High-resolution timer helpers (in milliseconds) */
double mlv_get_time_ms(void);

/* Session Logging API */
void mlv_profiler_start_logging(const char *clip_name, int width, int height, const char *debayer_name);
void mlv_profiler_stop_logging(void);
int  mlv_profiler_is_logging(void);
int  mlv_profiler_get_logged_count(void);
int  mlv_profiler_save_log(const char *filename, const char *parameters_header);

#ifdef __cplusplus
}
#endif

#endif /* MLV_PROFILER_H */
