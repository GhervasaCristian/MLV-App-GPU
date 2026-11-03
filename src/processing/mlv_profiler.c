#include "mlv_profiler.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

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

typedef struct {
    uint64_t frame_index;
    double   t_total_frame_ms;
    double   t_gpu_debayer_ms;
    double   t_rbf_ms;
    double   t_lj92_ms;
    double   t_diso_ms;
    double   t_grading_ms;
    int      is_cache_hit;
    int      ring_ready_slots;
    int      ring_total_slots;
    double   elapsed_sec;
} mlv_log_record_t;

static mlv_telemetry_t   s_current;
static mlv_telemetry_t   s_latest;
static pthread_mutex_t   s_prof_mutex = PTHREAD_MUTEX_INITIALIZER;

static mlv_log_record_t *s_log_entries = NULL;
static size_t            s_log_count = 0;
static size_t            s_log_capacity = 0;
static volatile int      s_is_logging = 0;
static double            s_log_start_time = 0.0;
static char              s_log_clip_name[512] = {0};
static char              s_log_debayer_name[128] = {0};
static int               s_log_width = 0;
static int               s_log_height = 0;

void mlv_profiler_init(void) {
    pthread_mutex_lock(&s_prof_mutex);
    memset(&s_current, 0, sizeof(s_current));
    memset(&s_latest, 0, sizeof(s_latest));
    pthread_mutex_unlock(&s_prof_mutex);
}

void mlv_profiler_record_lj92(double ms) {
    pthread_mutex_lock(&s_prof_mutex);
    s_current.t_lj92_ms = ms;
    pthread_mutex_unlock(&s_prof_mutex);
}

void mlv_profiler_record_diso(double ms) {
    pthread_mutex_lock(&s_prof_mutex);
    s_current.t_diso_ms = ms;
    pthread_mutex_unlock(&s_prof_mutex);
}

void mlv_profiler_record_debayer(double ms, int cache_hit) {
    pthread_mutex_lock(&s_prof_mutex);
    s_current.t_gpu_debayer_ms = ms;
    s_current.is_cache_hit = cache_hit;
    pthread_mutex_unlock(&s_prof_mutex);
}

void mlv_profiler_record_rbf(double ms) {
    pthread_mutex_lock(&s_prof_mutex);
    s_current.t_rbf_ms = ms;
    pthread_mutex_unlock(&s_prof_mutex);
}

void mlv_profiler_record_grading(double ms) {
    pthread_mutex_lock(&s_prof_mutex);
    s_current.t_grading_ms = ms;
    pthread_mutex_unlock(&s_prof_mutex);
}

void mlv_profiler_record_frame_done(uint64_t frame_index, double total_ms, int ring_ready, int ring_total) {
    pthread_mutex_lock(&s_prof_mutex);
    s_current.frame_index = frame_index;
    s_current.t_total_frame_ms = total_ms;
    s_current.ring_ready_slots = ring_ready;
    s_current.ring_total_slots = ring_total;
    s_latest = s_current;

    if (s_is_logging) {
        if (s_log_count >= s_log_capacity) {
            size_t new_cap = (s_log_capacity == 0) ? 1024 : s_log_capacity * 2;
            mlv_log_record_t *new_arr = (mlv_log_record_t*)realloc(s_log_entries, new_cap * sizeof(mlv_log_record_t));
            if (new_arr) {
                s_log_entries = new_arr;
                s_log_capacity = new_cap;
            }
        }

        if (s_log_count < s_log_capacity) {
            mlv_log_record_t *rec = &s_log_entries[s_log_count++];
            rec->frame_index = frame_index;
            rec->t_total_frame_ms = total_ms;
            rec->t_gpu_debayer_ms = s_current.t_gpu_debayer_ms;
            rec->t_rbf_ms = s_current.t_rbf_ms;
            rec->t_lj92_ms = s_current.t_lj92_ms;
            rec->t_diso_ms = s_current.t_diso_ms;
            rec->t_grading_ms = s_current.t_grading_ms;
            rec->is_cache_hit = s_current.is_cache_hit;
            rec->ring_ready_slots = ring_ready;
            rec->ring_total_slots = ring_total;
            rec->elapsed_sec = (mlv_get_time_ms() - s_log_start_time) / 1000.0;
        }
    }

    memset(&s_current, 0, sizeof(s_current));
    pthread_mutex_unlock(&s_prof_mutex);
}

void mlv_profiler_get_latest(mlv_telemetry_t *dest) {
    if (dest) {
        pthread_mutex_lock(&s_prof_mutex);
        *dest = s_latest;
        pthread_mutex_unlock(&s_prof_mutex);
    }
}

void mlv_profiler_start_logging(const char *clip_name, int width, int height, const char *debayer_name) {
    pthread_mutex_lock(&s_prof_mutex);
    s_log_count = 0;
    s_log_start_time = mlv_get_time_ms();
    if (clip_name) {
        strncpy(s_log_clip_name, clip_name, sizeof(s_log_clip_name) - 1);
        s_log_clip_name[sizeof(s_log_clip_name) - 1] = '\0';
    } else {
        strcpy(s_log_clip_name, "Unknown Clip");
    }
    if (debayer_name) {
        strncpy(s_log_debayer_name, debayer_name, sizeof(s_log_debayer_name) - 1);
        s_log_debayer_name[sizeof(s_log_debayer_name) - 1] = '\0';
    } else {
        strcpy(s_log_debayer_name, "Default");
    }
    s_log_width = width;
    s_log_height = height;
    s_is_logging = 1;
    pthread_mutex_unlock(&s_prof_mutex);
}

void mlv_profiler_stop_logging(void) {
    pthread_mutex_lock(&s_prof_mutex);
    s_is_logging = 0;
    pthread_mutex_unlock(&s_prof_mutex);
}

int mlv_profiler_is_logging(void) {
    return s_is_logging;
}

int mlv_profiler_get_logged_count(void) {
    pthread_mutex_lock(&s_prof_mutex);
    int count = (int)s_log_count;
    pthread_mutex_unlock(&s_prof_mutex);
    return count;
}

int mlv_profiler_save_log(const char *filename, const char *parameters_header) {
    if (!filename) return 0;

    pthread_mutex_lock(&s_prof_mutex);
    if (s_log_count == 0) {
        pthread_mutex_unlock(&s_prof_mutex);
        return 0;
    }

    FILE *f = fopen(filename, "w");
    if (!f) {
        pthread_mutex_unlock(&s_prof_mutex);
        return 0;
    }

    /* Compute Summary Statistics */
    double total_frame_sum = 0.0;
    double min_total = 1e9, max_total = 0.0;
    double gpu_deb_sum = 0.0;
    double rbf_sum = 0.0;
    double lj92_sum = 0.0;
    double diso_sum = 0.0;
    int cache_hits = 0;
    int stalls = 0;

    for (size_t i = 0; i < s_log_count; i++) {
        const mlv_log_record_t *r = &s_log_entries[i];
        total_frame_sum += r->t_total_frame_ms;
        if (r->t_total_frame_ms < min_total) min_total = r->t_total_frame_ms;
        if (r->t_total_frame_ms > max_total) max_total = r->t_total_frame_ms;
        if (r->t_total_frame_ms > 80.0) stalls++;

        gpu_deb_sum += r->t_gpu_debayer_ms;
        rbf_sum += r->t_rbf_ms;
        lj92_sum += r->t_lj92_ms;
        diso_sum += r->t_diso_ms;
        if (r->is_cache_hit) cache_hits++;
    }

    double avg_total = total_frame_sum / (double)s_log_count;
    double avg_fps = (avg_total > 0.0) ? (1000.0 / avg_total) : 0.0;
    double avg_gpu = gpu_deb_sum / (double)s_log_count;
    double avg_rbf = rbf_sum / (double)s_log_count;
    double avg_lj92 = lj92_sum / (double)s_log_count;
    double avg_diso = diso_sum / (double)s_log_count;
    double hit_rate = (double)cache_hits * 100.0 / (double)s_log_count;

    /* Write Human-Readable Header */
    fprintf(f, "================================================================================\n");
    fprintf(f, "MLV App - Performance Profiling Log\n");
    fprintf(f, "Clip:               %s\n", s_log_clip_name);
    fprintf(f, "Resolution:         %dx%d\n", s_log_width, s_log_height);
    fprintf(f, "Debayer Algorithm:  %s\n", s_log_debayer_name);
    fprintf(f, "================================================================================\n\n");

    if (parameters_header && *parameters_header) {
        fprintf(f, "%s\n", parameters_header);
        fprintf(f, "================================================================================\n\n");
    }

    fprintf(f, "EXECUTIVE SUMMARY:\n");
    fprintf(f, "  Total Frames Recorded: %zu\n", s_log_count);
    fprintf(f, "  Average Playback Speed: %.1f FPS\n", avg_fps);
    fprintf(f, "  Average Frame Time:     %.2f ms (Min: %.2f ms, Max: %.2f ms)\n", avg_total, min_total, max_total);
    fprintf(f, "  Average GPU Debayer:    %.2f ms (Cache Hit Rate: %.1f%%)\n", avg_gpu, hit_rate);
    fprintf(f, "  Average RBF Denoise:    %.2f ms\n", avg_rbf);
    fprintf(f, "  Average LJ92 Decode:    %.2f ms\n", avg_lj92);
    fprintf(f, "  Average Dual ISO:       %.2f ms\n", avg_diso);
    fprintf(f, "  Playback Stalls (>80ms): %d / %zu (%.1f%%)\n\n", stalls, s_log_count, (double)stalls * 100.0 / (double)s_log_count);

    fprintf(f, "================================================================================\n");
    fprintf(f, "DETAILED PER-FRAME METRICS (CSV FORMAT):\n");
    fprintf(f, "Frame,Elapsed_Sec,FPS,Total_ms,GPU_Debayer_ms,Cache_Hit,RBF_Denoise_ms,LJ92_Decode_ms,DualISO_ms,RingBuffer_Ready\n");

    for (size_t i = 0; i < s_log_count; i++) {
        const mlv_log_record_t *r = &s_log_entries[i];
        double fps = (r->t_total_frame_ms > 0.0) ? (1000.0 / r->t_total_frame_ms) : 0.0;
        fprintf(f, "%llu,%.3f,%.1f,%.2f,%.2f,%s,%.2f,%.2f,%.2f,%d/%d\n",
                (unsigned long long)r->frame_index,
                r->elapsed_sec,
                fps,
                r->t_total_frame_ms,
                r->t_gpu_debayer_ms,
                r->is_cache_hit ? "Hit" : "Miss",
                r->t_rbf_ms,
                r->t_lj92_ms,
                r->t_diso_ms,
                r->ring_ready_slots,
                r->ring_total_slots);
    }

    fclose(f);
    pthread_mutex_unlock(&s_prof_mutex);
    return 1;
}
