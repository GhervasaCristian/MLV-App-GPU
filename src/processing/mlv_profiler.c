#include "mlv_profiler.h"
#include <string.h>

#ifdef _WIN32
#include <windows.h>
static LARGE_INTEGER s_qpc_freq;
static int s_qpc_inited = 0;

double mlv_get_time_ms(void) {
    if (!s_qpc_inited) {
        QueryPerformanceFrequency(&s_qpc_freq);
        s_qpc_inited = 1;
    }
    LARGE_INTEGER now;
    QueryPerformanceCounter(&now);
    return ((double)now.QuadPart * 1000.0) / (double)s_qpc_freq.QuadPart;
}
#else
#include <time.h>
double mlv_get_time_ms(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (double)ts.tv_sec * 1000.0 + (double)ts.tv_nsec / 1000000.0;
}
#endif

static mlv_telemetry_t s_current;
static mlv_telemetry_t s_latest;

void mlv_profiler_init(void) {
    memset(&s_current, 0, sizeof(s_current));
    memset(&s_latest, 0, sizeof(s_latest));
}

void mlv_profiler_record_lj92(double ms) {
    s_current.t_lj92_ms = ms;
}

void mlv_profiler_record_diso(double ms) {
    s_current.t_diso_ms = ms;
}

void mlv_profiler_record_debayer(double ms, int cache_hit) {
    s_current.t_gpu_debayer_ms = ms;
    s_current.is_cache_hit = cache_hit;
}

void mlv_profiler_record_rbf(double ms) {
    s_current.t_rbf_ms = ms;
}

void mlv_profiler_record_grading(double ms) {
    s_current.t_grading_ms = ms;
}

void mlv_profiler_record_frame_done(uint64_t frame_index, double total_ms, int ring_ready, int ring_total) {
    s_current.frame_index = frame_index;
    s_current.t_total_frame_ms = total_ms;
    s_current.ring_ready_slots = ring_ready;
    s_current.ring_total_slots = ring_total;
    s_latest = s_current;
    memset(&s_current, 0, sizeof(s_current));
}

void mlv_profiler_get_latest(mlv_telemetry_t *dest) {
    if (dest) {
        *dest = s_latest;
    }
}
