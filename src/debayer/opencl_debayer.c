#include "opencl_debayer.h"
#include "opencl_loader.h"
#include "opencl_multigradient_kernels.h"
#include "opencl_rcd_kernels.h"
#include "opencl_rcdv2_kernels.h"
#include "opencl_dualiso_kernels.h"
#include "opencl_postprocess_kernels.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

static pthread_mutex_t s_ocl_mutex = PTHREAD_MUTEX_INITIALIZER;
static int s_ocl_initialized = 0;
static int s_ocl_available = 0;
static char s_device_name[128] = "None";

static cl_context s_ctx = NULL;
static cl_command_queue s_queue = NULL;

/* Programs and Kernels */
static cl_program s_prog_mg = NULL;
static cl_kernel s_k_mg_green = NULL;
static cl_kernel s_k_mg_rgb = NULL;
static cl_kernel s_k_mg_fast = NULL;

static cl_program s_prog_rcd = NULL;
static cl_kernel s_k_rcd_step1 = NULL;
static cl_kernel s_k_rcd_step2 = NULL;
static cl_kernel s_k_rcd_step3 = NULL;

static cl_program s_prog_rcdv2 = NULL;
static cl_kernel s_k_rcdv2_step1 = NULL;
static cl_kernel s_k_rcdv2_step2 = NULL;
static cl_kernel s_k_rcdv2_step3 = NULL;
static cl_kernel s_k_rcdv2_step4 = NULL;

static cl_program s_prog_diso = NULL;
static cl_kernel s_k_diso_interp = NULL;
static cl_kernel s_k_diso_fusion = NULL;
static cl_program s_prog_post = NULL;
static cl_kernel s_k_postprocess = NULL;

/* Reusable VRAM Buffers */
static cl_mem s_buf_raw = NULL;
static cl_mem s_buf_bayer_fused = NULL;
static cl_mem s_buf_lpf = NULL;
static cl_mem s_buf_green = NULL;
static cl_mem s_buf_vh_dir = NULL;
static cl_mem s_buf_diff_r = NULL;
static cl_mem s_buf_diff_b = NULL;
static cl_mem s_buf_diso_dark = NULL;
static cl_mem s_buf_diso_bright = NULL;
static cl_mem s_buf_rgb = NULL;
static cl_mem s_buf_rgb8 = NULL;
static cl_mem s_buf_matrix = NULL;
static cl_mem s_buf_levels_lut = NULL;
static cl_mem s_buf_gamma_lut = NULL;
static cl_mem s_buf_rgb_processed = NULL;

static int s_buf_width = 0;
static int s_buf_height = 0;

static int ensure_buffers(int width, int height) {
    if (s_buf_width == width && s_buf_height == height && s_buf_raw != NULL) {
        return 1;
    }

    if (s_buf_raw) { cl_ReleaseMemObject(s_buf_raw); s_buf_raw = NULL; }
    if (s_buf_bayer_fused) { cl_ReleaseMemObject(s_buf_bayer_fused); s_buf_bayer_fused = NULL; }
    if (s_buf_lpf) { cl_ReleaseMemObject(s_buf_lpf); s_buf_lpf = NULL; }
    if (s_buf_green) { cl_ReleaseMemObject(s_buf_green); s_buf_green = NULL; }
    if (s_buf_vh_dir) { cl_ReleaseMemObject(s_buf_vh_dir); s_buf_vh_dir = NULL; }
    if (s_buf_diff_r) { cl_ReleaseMemObject(s_buf_diff_r); s_buf_diff_r = NULL; }
    if (s_buf_diff_b) { cl_ReleaseMemObject(s_buf_diff_b); s_buf_diff_b = NULL; }
    if (s_buf_diso_dark) { cl_ReleaseMemObject(s_buf_diso_dark); s_buf_diso_dark = NULL; }
    if (s_buf_diso_bright) { cl_ReleaseMemObject(s_buf_diso_bright); s_buf_diso_bright = NULL; }
    if (s_buf_rgb) { cl_ReleaseMemObject(s_buf_rgb); s_buf_rgb = NULL; }
    if (s_buf_rgb8) { cl_ReleaseMemObject(s_buf_rgb8); s_buf_rgb8 = NULL; }
    if (s_buf_matrix) { cl_ReleaseMemObject(s_buf_matrix); s_buf_matrix = NULL; }
    if (s_buf_levels_lut) { cl_ReleaseMemObject(s_buf_levels_lut); s_buf_levels_lut = NULL; }
    if (s_buf_gamma_lut) { cl_ReleaseMemObject(s_buf_gamma_lut); s_buf_gamma_lut = NULL; }
    if (s_buf_rgb_processed) { cl_ReleaseMemObject(s_buf_rgb_processed); s_buf_rgb_processed = NULL; }

    cl_int err = CL_SUCCESS;
    size_t num_pixels = (size_t)width * height;

    s_buf_raw = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(uint16_t), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_bayer_fused = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(uint16_t), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_lpf = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(float), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_green = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(float), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_vh_dir = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(float), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_diff_r = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(float), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_diff_b = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(float), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_diso_dark = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(uint16_t), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_diso_bright = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * sizeof(uint16_t), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_rgb = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * 3 * sizeof(uint16_t), NULL, &err);
    s_buf_rgb8 = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * 3 * sizeof(uint8_t), NULL, &err);
    s_buf_matrix = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, 9 * sizeof(float), NULL, &err);
    s_buf_levels_lut = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, 65536 * sizeof(uint16_t), NULL, &err);
    if (err != CL_SUCCESS) return 0;
    s_buf_gamma_lut = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, 65536 * sizeof(uint16_t), NULL, &err);
    s_buf_rgb_processed = cl_CreateBuffer(s_ctx, CL_MEM_READ_WRITE, num_pixels * 3 * sizeof(uint16_t), NULL, &err);
    if (err != CL_SUCCESS) return 0;

    s_buf_width = width;
    s_buf_height = height;
    return 1;
}

static cl_program build_program(cl_context ctx, cl_device_id dev, const char* src) {
    cl_int err = CL_SUCCESS;
    size_t len = strlen(src);
    cl_program prog = cl_CreateProgramWithSource(ctx, 1, &src, &len, &err);
    if (err != CL_SUCCESS || !prog) return NULL;

    err = cl_BuildProgram(prog, 1, &dev, "-cl-fast-relaxed-math", NULL, NULL);
    if (err != CL_SUCCESS) {
#ifndef STDOUT_SILENT
        char log[4096] = {0};
        cl_GetProgramBuildInfo(prog, dev, CL_PROGRAM_BUILD_LOG, sizeof(log), log, NULL);
        printf("[OpenCL Build Error]:\n%s\n", log);
#endif
        cl_ReleaseProgram(prog);
        return NULL;
    }
    return prog;
}

int opencl_debayer_init(void) {
    pthread_mutex_lock(&s_ocl_mutex);
    if (s_ocl_initialized) {
        int avail = s_ocl_available;
        pthread_mutex_unlock(&s_ocl_mutex);
        return avail;
    }
    s_ocl_initialized = 1;

    if (!ocl_load_library()) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    cl_uint num_platforms = 0;
    cl_int err = cl_GetPlatformIDs(0, NULL, &num_platforms);
    if (err != CL_SUCCESS || num_platforms == 0) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    cl_platform_id* platforms = (cl_platform_id*)malloc(num_platforms * sizeof(cl_platform_id));
    cl_GetPlatformIDs(num_platforms, platforms, NULL);

    cl_device_id selected_device = NULL;
    /* Pass 0: Discrete GPU (NVIDIA/AMD), Pass 1: Any GPU */
    for (int pass = 0; pass < 2 && !selected_device; pass++) {
        for (cl_uint p = 0; p < num_platforms; p++) {
            cl_uint num_devices = 0;
            err = cl_GetDeviceIDs(platforms[p], CL_DEVICE_TYPE_GPU, 0, NULL, &num_devices);
            if (err == CL_SUCCESS && num_devices > 0) {
                cl_device_id* devices = (cl_device_id*)malloc(num_devices * sizeof(cl_device_id));
                cl_GetDeviceIDs(platforms[p], CL_DEVICE_TYPE_GPU, num_devices, devices, NULL);
                for (cl_uint d = 0; d < num_devices; d++) {
                    char vendor[128] = {0};
                    cl_GetDeviceInfo(devices[d], CL_DEVICE_VENDOR, sizeof(vendor), vendor, NULL);
                    int is_discrete = (strstr(vendor, "NVIDIA") != NULL || strstr(vendor, "AMD") != NULL || strstr(vendor, "ATI") != NULL);
                    if ((pass == 0 && is_discrete) || (pass == 1 && !selected_device)) {
                        selected_device = devices[d];
                        cl_GetDeviceInfo(selected_device, CL_DEVICE_NAME, sizeof(s_device_name), s_device_name, NULL);
                        break;
                    }
                }
                free(devices);
                if (selected_device) break;
            }
        }
    }
    free(platforms);

    if (!selected_device) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    s_ctx = cl_CreateContext(NULL, 1, &selected_device, NULL, NULL, &err);
    if (err != CL_SUCCESS || !s_ctx) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    s_queue = cl_CreateCommandQueue(s_ctx, selected_device, 0, &err);
    if (err != CL_SUCCESS || !s_queue) {
        cl_ReleaseContext(s_ctx);
        s_ctx = NULL;
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    /* Build Fast Single-Pass program */
    s_prog_mg = build_program(s_ctx, selected_device, s_multigradient_kernel_src);
    if (s_prog_mg) {
        s_k_mg_fast = cl_CreateKernel(s_prog_mg, "k_mg_fast_single_pass", &err);
    }

    /* Build RCD v1 program */
    s_prog_rcd = build_program(s_ctx, selected_device, s_rcd_kernel_src);
    if (s_prog_rcd) {
        s_k_rcd_step1 = cl_CreateKernel(s_prog_rcd, "k_rcd_step1_green", &err);
        s_k_rcd_step2 = cl_CreateKernel(s_prog_rcd, "k_rcd_step2_chroma", &err);
        s_k_rcd_step3 = cl_CreateKernel(s_prog_rcd, "k_rcd_step3_rgb", &err);
    }

    /* Build RCD v2 program */
    s_prog_rcdv2 = build_program(s_ctx, selected_device, s_rcdv2_kernel_src);
    if (s_prog_rcdv2) {
        s_k_rcdv2_step1 = cl_CreateKernel(s_prog_rcdv2, "k_rcdv2_step1_lpf_vh", &err);
        s_k_rcdv2_step2 = cl_CreateKernel(s_prog_rcdv2, "k_rcdv2_step2_green", &err);
        s_k_rcdv2_step3 = cl_CreateKernel(s_prog_rcdv2, "k_rcdv2_step3_rb_diag", &err);
        s_k_rcdv2_step4 = cl_CreateKernel(s_prog_rcdv2, "k_rcdv2_step4_synthesis", &err);
    }

    /* Build Dual ISO program */
    s_prog_diso = build_program(s_ctx, selected_device, s_dualiso_kernel_src);
    if (s_prog_diso) {
        s_k_diso_interp = cl_CreateKernel(s_prog_diso, "k_dualiso_interpolate", &err);
        s_k_diso_fusion = cl_CreateKernel(s_prog_diso, "k_dualiso_fusion", &err);
    }
    s_prog_post = build_program(s_ctx, selected_device, s_opencl_postprocess_source);
    if (s_prog_post) {
        s_k_postprocess = cl_CreateKernel(s_prog_post, "k_postprocess_frame", &err);
    }

    if (!s_k_mg_fast || !s_k_rcd_step1 || !s_k_rcd_step2 || !s_k_rcd_step3 || !s_k_rcdv2_step1 || !s_k_rcdv2_step2 || !s_k_rcdv2_step3 || !s_k_rcdv2_step4 || !s_k_diso_interp || !s_k_diso_fusion) {
        opencl_debayer_free();
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    s_ocl_available = 1;
#ifndef STDOUT_SILENT
    printf("[OpenCL Init] Successfully initialized GPU Pipeline on: %s\n", s_device_name);
#endif
    pthread_mutex_unlock(&s_ocl_mutex);
    return 1;
}

void opencl_debayer_free(void) {
    pthread_mutex_lock(&s_ocl_mutex);
    if (s_buf_raw) { cl_ReleaseMemObject(s_buf_raw); s_buf_raw = NULL; }
    if (s_buf_bayer_fused) { cl_ReleaseMemObject(s_buf_bayer_fused); s_buf_bayer_fused = NULL; }
    if (s_buf_lpf) { cl_ReleaseMemObject(s_buf_lpf); s_buf_lpf = NULL; }
    if (s_buf_green) { cl_ReleaseMemObject(s_buf_green); s_buf_green = NULL; }
    if (s_buf_vh_dir) { cl_ReleaseMemObject(s_buf_vh_dir); s_buf_vh_dir = NULL; }
    if (s_buf_diff_r) { cl_ReleaseMemObject(s_buf_diff_r); s_buf_diff_r = NULL; }
    if (s_buf_diff_b) { cl_ReleaseMemObject(s_buf_diff_b); s_buf_diff_b = NULL; }
    if (s_buf_diso_dark) { cl_ReleaseMemObject(s_buf_diso_dark); s_buf_diso_dark = NULL; }
    if (s_buf_diso_bright) { cl_ReleaseMemObject(s_buf_diso_bright); s_buf_diso_bright = NULL; }
    if (s_buf_rgb) { cl_ReleaseMemObject(s_buf_rgb); s_buf_rgb = NULL; }
    if (s_buf_rgb8) { cl_ReleaseMemObject(s_buf_rgb8); s_buf_rgb8 = NULL; }
    if (s_buf_matrix) { cl_ReleaseMemObject(s_buf_matrix); s_buf_matrix = NULL; }
    if (s_buf_levels_lut) { cl_ReleaseMemObject(s_buf_levels_lut); s_buf_levels_lut = NULL; }
    if (s_buf_gamma_lut) { cl_ReleaseMemObject(s_buf_gamma_lut); s_buf_gamma_lut = NULL; }
    if (s_buf_rgb_processed) { cl_ReleaseMemObject(s_buf_rgb_processed); s_buf_rgb_processed = NULL; }
    s_buf_width = s_buf_height = 0;

    if (s_k_mg_fast) { cl_ReleaseKernel(s_k_mg_fast); s_k_mg_fast = NULL; }
    if (s_prog_mg) { cl_ReleaseProgram(s_prog_mg); s_prog_mg = NULL; }

    if (s_k_rcd_step1) { cl_ReleaseKernel(s_k_rcd_step1); s_k_rcd_step1 = NULL; }
    if (s_k_rcd_step2) { cl_ReleaseKernel(s_k_rcd_step2); s_k_rcd_step2 = NULL; }
    if (s_k_rcd_step3) { cl_ReleaseKernel(s_k_rcd_step3); s_k_rcd_step3 = NULL; }
    if (s_prog_rcd) { cl_ReleaseProgram(s_prog_rcd); s_prog_rcd = NULL; }

    if (s_k_rcdv2_step1) { cl_ReleaseKernel(s_k_rcdv2_step1); s_k_rcdv2_step1 = NULL; }
    if (s_k_rcdv2_step2) { cl_ReleaseKernel(s_k_rcdv2_step2); s_k_rcdv2_step2 = NULL; }
    if (s_k_rcdv2_step3) { cl_ReleaseKernel(s_k_rcdv2_step3); s_k_rcdv2_step3 = NULL; }
    if (s_k_rcdv2_step4) { cl_ReleaseKernel(s_k_rcdv2_step4); s_k_rcdv2_step4 = NULL; }
    if (s_prog_rcdv2) { cl_ReleaseProgram(s_prog_rcdv2); s_prog_rcdv2 = NULL; }

    if (s_k_diso_interp) { cl_ReleaseKernel(s_k_diso_interp); s_k_diso_interp = NULL; }
    if (s_k_diso_fusion) { cl_ReleaseKernel(s_k_diso_fusion); s_k_diso_fusion = NULL; }
    if (s_prog_diso) { cl_ReleaseProgram(s_prog_diso); s_prog_diso = NULL; }
    if (s_k_postprocess) { cl_ReleaseKernel(s_k_postprocess); s_k_postprocess = NULL; }
    if (s_prog_post) { cl_ReleaseProgram(s_prog_post); s_prog_post = NULL; }

    if (s_queue) { cl_ReleaseCommandQueue(s_queue); s_queue = NULL; }
    if (s_ctx) { cl_ReleaseContext(s_ctx); s_ctx = NULL; }

    s_ocl_available = 0;
    s_ocl_initialized = 0;
    strcpy(s_device_name, "None");
    pthread_mutex_unlock(&s_ocl_mutex);
}

int opencl_debayer_is_available(void) {
    if (!s_ocl_initialized) opencl_debayer_init();
    return s_ocl_available;
}

const char* opencl_debayer_get_device_name(void) {
    return s_device_name;
}

/* Internal: Execute debayer on cl_mem bayer_buf */
static int execute_debayer(cl_mem bayer_buf, int width, int height, int cfa_pattern, int algorithm) {
    size_t global_ws[2] = {
        ((size_t)width + 15) & ~15,
        ((size_t)height + 15) & ~15
    };
    size_t local_ws[2] = { 16, 16 };
    cl_int err = CL_SUCCESS;

    if ((algorithm == GPU_DEBAYER_CINEMA_V2 || algorithm == 12) && s_k_rcdv2_step1 && s_k_rcdv2_step2 && s_k_rcdv2_step3 && s_k_rcdv2_step4) {
        /* Pass 1: Multispectral LPF and VH Discrimination */
        cl_SetKernelArg(s_k_rcdv2_step1, 0, sizeof(cl_mem), &bayer_buf);
        cl_SetKernelArg(s_k_rcdv2_step1, 1, sizeof(cl_mem), &s_buf_lpf);
        cl_SetKernelArg(s_k_rcdv2_step1, 2, sizeof(cl_mem), &s_buf_vh_dir);
        cl_SetKernelArg(s_k_rcdv2_step1, 3, sizeof(int), &width);
        cl_SetKernelArg(s_k_rcdv2_step1, 4, sizeof(int), &height);
        cl_SetKernelArg(s_k_rcdv2_step1, 5, sizeof(int), &cfa_pattern);

        err = cl_EnqueueNDRangeKernel(s_queue, s_k_rcdv2_step1, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;

        /* Pass 2: Ratio-Corrected Green Interpolation */
        cl_SetKernelArg(s_k_rcdv2_step2, 0, sizeof(cl_mem), &bayer_buf);
        cl_SetKernelArg(s_k_rcdv2_step2, 1, sizeof(cl_mem), &s_buf_lpf);
        cl_SetKernelArg(s_k_rcdv2_step2, 2, sizeof(cl_mem), &s_buf_vh_dir);
        cl_SetKernelArg(s_k_rcdv2_step2, 3, sizeof(cl_mem), &s_buf_green);
        cl_SetKernelArg(s_k_rcdv2_step2, 4, sizeof(int), &width);
        cl_SetKernelArg(s_k_rcdv2_step2, 5, sizeof(int), &height);
        cl_SetKernelArg(s_k_rcdv2_step2, 6, sizeof(int), &cfa_pattern);

        err = cl_EnqueueNDRangeKernel(s_queue, s_k_rcdv2_step2, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;

        /* Pass 3: Diagonal R@B and B@R */
        cl_SetKernelArg(s_k_rcdv2_step3, 0, sizeof(cl_mem), &bayer_buf);
        cl_SetKernelArg(s_k_rcdv2_step3, 1, sizeof(cl_mem), &s_buf_green);
        cl_SetKernelArg(s_k_rcdv2_step3, 2, sizeof(cl_mem), &s_buf_diff_r);
        cl_SetKernelArg(s_k_rcdv2_step3, 3, sizeof(cl_mem), &s_buf_diff_b);
        cl_SetKernelArg(s_k_rcdv2_step3, 4, sizeof(int), &width);
        cl_SetKernelArg(s_k_rcdv2_step3, 5, sizeof(int), &height);
        cl_SetKernelArg(s_k_rcdv2_step3, 6, sizeof(int), &cfa_pattern);

        err = cl_EnqueueNDRangeKernel(s_queue, s_k_rcdv2_step3, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;

        /* Pass 4: Final Synthesis */
        cl_SetKernelArg(s_k_rcdv2_step4, 0, sizeof(cl_mem), &s_buf_green);
        cl_SetKernelArg(s_k_rcdv2_step4, 1, sizeof(cl_mem), &s_buf_diff_r);
        cl_SetKernelArg(s_k_rcdv2_step4, 2, sizeof(cl_mem), &s_buf_diff_b);
        cl_SetKernelArg(s_k_rcdv2_step4, 3, sizeof(cl_mem), &s_buf_vh_dir);
        cl_SetKernelArg(s_k_rcdv2_step4, 4, sizeof(cl_mem), &s_buf_rgb);
        cl_SetKernelArg(s_k_rcdv2_step4, 5, sizeof(int), &width);
        cl_SetKernelArg(s_k_rcdv2_step4, 6, sizeof(int), &height);
        cl_SetKernelArg(s_k_rcdv2_step4, 7, sizeof(int), &cfa_pattern);

        err = cl_EnqueueNDRangeKernel(s_queue, s_k_rcdv2_step4, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;
    } else if ((algorithm == GPU_DEBAYER_CINEMA || algorithm == 11) && s_k_rcd_step1 && s_k_rcd_step2 && s_k_rcd_step3) {
        /* Pass 1: RCD Step 1 Green Reconstruction with 4th-power edge-locking */
        cl_SetKernelArg(s_k_rcd_step1, 0, sizeof(cl_mem), &bayer_buf);
        cl_SetKernelArg(s_k_rcd_step1, 1, sizeof(cl_mem), &s_buf_green);
        cl_SetKernelArg(s_k_rcd_step1, 2, sizeof(int), &width);
        cl_SetKernelArg(s_k_rcd_step1, 3, sizeof(int), &height);
        cl_SetKernelArg(s_k_rcd_step1, 4, sizeof(int), &cfa_pattern);

        err = cl_EnqueueNDRangeKernel(s_queue, s_k_rcd_step1, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;

        /* Pass 2: RCD Step 2 Directional Chromatic Difference Fields (Diff_R, Diff_B) */
        cl_SetKernelArg(s_k_rcd_step2, 0, sizeof(cl_mem), &bayer_buf);
        cl_SetKernelArg(s_k_rcd_step2, 1, sizeof(cl_mem), &s_buf_green);
        cl_SetKernelArg(s_k_rcd_step2, 2, sizeof(cl_mem), &s_buf_diff_r);
        cl_SetKernelArg(s_k_rcd_step2, 3, sizeof(cl_mem), &s_buf_diff_b);
        cl_SetKernelArg(s_k_rcd_step2, 4, sizeof(int), &width);
        cl_SetKernelArg(s_k_rcd_step2, 5, sizeof(int), &height);
        cl_SetKernelArg(s_k_rcd_step2, 6, sizeof(int), &cfa_pattern);

        err = cl_EnqueueNDRangeKernel(s_queue, s_k_rcd_step2, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;

        /* Pass 3: RCD Step 3 3x3 Sorting Network Median Filter & Full RGB Synthesis */
        cl_SetKernelArg(s_k_rcd_step3, 0, sizeof(cl_mem), &s_buf_green);
        cl_SetKernelArg(s_k_rcd_step3, 1, sizeof(cl_mem), &s_buf_diff_r);
        cl_SetKernelArg(s_k_rcd_step3, 2, sizeof(cl_mem), &s_buf_diff_b);
        cl_SetKernelArg(s_k_rcd_step3, 3, sizeof(cl_mem), &s_buf_rgb);
        cl_SetKernelArg(s_k_rcd_step3, 4, sizeof(int), &width);
        cl_SetKernelArg(s_k_rcd_step3, 5, sizeof(int), &height);

        err = cl_EnqueueNDRangeKernel(s_queue, s_k_rcd_step3, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;
    } else {
        /* GPU FAST: Ultra-Fast Single-Pass Debayer */
        cl_SetKernelArg(s_k_mg_fast, 0, sizeof(cl_mem), &bayer_buf);
        cl_SetKernelArg(s_k_mg_fast, 1, sizeof(cl_mem), &s_buf_rgb);
        cl_SetKernelArg(s_k_mg_fast, 2, sizeof(int), &width);
        cl_SetKernelArg(s_k_mg_fast, 3, sizeof(int), &height);
        cl_SetKernelArg(s_k_mg_fast, 4, sizeof(int), &cfa_pattern);

        err = cl_EnqueueNDRangeKernel(s_queue, s_k_mg_fast, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;
    }

    return 1;
}

/* Internal: Execute Dual ISO fusion in VRAM */
static int execute_dualiso(
    int width, int height,
    int black, int white, int white_darkened,
    float corr_ev, float overlap,
    const int is_bright[4]
) {
    size_t global_ws[2] = {
        ((size_t)width + 15) & ~15,
        ((size_t)height + 15) & ~15
    };
    size_t local_ws[2] = { 16, 16 };
    cl_int err = CL_SUCCESS;

    /* Kernel 1: 9-Vector Edge Interpolation */
    cl_SetKernelArg(s_k_diso_interp, 0, sizeof(cl_mem), &s_buf_raw);
    cl_SetKernelArg(s_k_diso_interp, 1, sizeof(cl_mem), &s_buf_diso_dark);
    cl_SetKernelArg(s_k_diso_interp, 2, sizeof(cl_mem), &s_buf_diso_bright);
    cl_SetKernelArg(s_k_diso_interp, 3, sizeof(int), &width);
    cl_SetKernelArg(s_k_diso_interp, 4, sizeof(int), &height);
    cl_SetKernelArg(s_k_diso_interp, 5, sizeof(int), &black);
    cl_SetKernelArg(s_k_diso_interp, 6, sizeof(int), &white);
    cl_SetKernelArg(s_k_diso_interp, 7, sizeof(int), &white_darkened);
    cl_SetKernelArg(s_k_diso_interp, 8, sizeof(int), &is_bright[0]);
    cl_SetKernelArg(s_k_diso_interp, 9, sizeof(int), &is_bright[1]);
    cl_SetKernelArg(s_k_diso_interp, 10, sizeof(int), &is_bright[2]);
    cl_SetKernelArg(s_k_diso_interp, 11, sizeof(int), &is_bright[3]);

    err = cl_EnqueueNDRangeKernel(s_queue, s_k_diso_interp, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
    if (err != CL_SUCCESS) return 0;

    /* Kernel 2: Full-Resolution Fusion */
    cl_SetKernelArg(s_k_diso_fusion, 0, sizeof(cl_mem), &s_buf_diso_dark);
    cl_SetKernelArg(s_k_diso_fusion, 1, sizeof(cl_mem), &s_buf_diso_bright);
    cl_SetKernelArg(s_k_diso_fusion, 2, sizeof(cl_mem), &s_buf_bayer_fused);
    cl_SetKernelArg(s_k_diso_fusion, 3, sizeof(int), &width);
    cl_SetKernelArg(s_k_diso_fusion, 4, sizeof(int), &height);
    cl_SetKernelArg(s_k_diso_fusion, 5, sizeof(int), &black);
    cl_SetKernelArg(s_k_diso_fusion, 6, sizeof(int), &white);
    cl_SetKernelArg(s_k_diso_fusion, 7, sizeof(int), &white_darkened);
    cl_SetKernelArg(s_k_diso_fusion, 8, sizeof(float), &corr_ev);
    cl_SetKernelArg(s_k_diso_fusion, 9, sizeof(float), &overlap);
    cl_SetKernelArg(s_k_diso_fusion, 10, sizeof(int), &is_bright[0]);
    cl_SetKernelArg(s_k_diso_fusion, 11, sizeof(int), &is_bright[1]);
    cl_SetKernelArg(s_k_diso_fusion, 12, sizeof(int), &is_bright[2]);
    cl_SetKernelArg(s_k_diso_fusion, 13, sizeof(int), &is_bright[3]);

    err = cl_EnqueueNDRangeKernel(s_queue, s_k_diso_fusion, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
    if (err != CL_SUCCESS) return 0;

    return 1;
}

int opencl_debayer_process(
    uint16_t *debayerto,
    const uint16_t *bayerdata,
    int width,
    int height,
    int black,
    int white,
    int cfa_pattern,
    int algorithm
) {
    (void)black;
    (void)white;
    if (!opencl_debayer_is_available()) return 0;

    pthread_mutex_lock(&s_ocl_mutex);
    if (!ensure_buffers(width, height)) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    size_t raw_size = (size_t)width * height * sizeof(uint16_t);
    size_t rgb_size = (size_t)width * height * 3 * sizeof(uint16_t);

    cl_int err = cl_EnqueueWriteBuffer(s_queue, s_buf_raw, CL_FALSE, 0, raw_size, bayerdata, 0, NULL, NULL);
    if (err != CL_SUCCESS) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    if (!execute_debayer(s_buf_raw, width, height, cfa_pattern, algorithm)) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    err = cl_EnqueueReadBuffer(s_queue, s_buf_rgb, CL_TRUE, 0, rgb_size, debayerto, 0, NULL, NULL);
    pthread_mutex_unlock(&s_ocl_mutex);

    return (err == CL_SUCCESS);
}

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
) {
    if (!opencl_debayer_is_available()) return 0;

    pthread_mutex_lock(&s_ocl_mutex);
    if (!ensure_buffers(width, height)) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    size_t raw_size = (size_t)width * height * sizeof(uint16_t);
    cl_int err = cl_EnqueueWriteBuffer(s_queue, s_buf_raw, CL_FALSE, 0, raw_size, raw_in, 0, NULL, NULL);
    if (err != CL_SUCCESS) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    if (!execute_dualiso(width, height, black, white, white_darkened, corr_ev, overlap, is_bright)) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    err = cl_EnqueueReadBuffer(s_queue, s_buf_bayer_fused, CL_TRUE, 0, raw_size, bayer_fused_out, 0, NULL, NULL);
    pthread_mutex_unlock(&s_ocl_mutex);

    return (err == CL_SUCCESS);
}

static int execute_postprocess(
    int width, int height,
    const gpu_postprocess_params_t *params,
    int output_8bit
) {
    if (!s_k_postprocess || !params) return 0;

    cl_int err;
    err = cl_EnqueueWriteBuffer(s_queue, s_buf_matrix, CL_FALSE, 0, 9 * sizeof(float), params->matrix, 0, NULL, NULL);
    if (err != CL_SUCCESS) return 0;

    if (params->levels_lut) {
        err = cl_EnqueueWriteBuffer(s_queue, s_buf_levels_lut, CL_FALSE, 0, 65536 * sizeof(uint16_t), params->levels_lut, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;
    }
    if (params->gamma_lut) {
        err = cl_EnqueueWriteBuffer(s_queue, s_buf_gamma_lut, CL_FALSE, 0, 65536 * sizeof(uint16_t), params->gamma_lut, 0, NULL, NULL);
        if (err != CL_SUCCESS) return 0;
    }

    cl_mem out8 = output_8bit ? s_buf_rgb8 : NULL;
    cl_mem out16 = output_8bit ? NULL : s_buf_rgb_processed;

    float y_r = params->rgb_to_Y[0];
    float y_g = params->rgb_to_Y[1];
    float y_b = params->rgb_to_Y[2];
    float d0 = params->wb_mult[0];
    float d4 = params->wb_mult[1];
    float d8 = params->wb_mult[2];
    int agx = params->agx;

    cl_SetKernelArg(s_k_postprocess, 0, sizeof(cl_mem), &s_buf_rgb);
    cl_SetKernelArg(s_k_postprocess, 1, sizeof(cl_mem), &out8);
    cl_SetKernelArg(s_k_postprocess, 2, sizeof(cl_mem), &out16);
    cl_SetKernelArg(s_k_postprocess, 3, sizeof(int), &width);
    cl_SetKernelArg(s_k_postprocess, 4, sizeof(int), &height);
    cl_SetKernelArg(s_k_postprocess, 5, sizeof(cl_mem), &s_buf_matrix);
    cl_SetKernelArg(s_k_postprocess, 6, sizeof(float), &d0);
    cl_SetKernelArg(s_k_postprocess, 7, sizeof(float), &d4);
    cl_SetKernelArg(s_k_postprocess, 8, sizeof(float), &d8);
    cl_SetKernelArg(s_k_postprocess, 9, sizeof(cl_mem), &s_buf_levels_lut);
    cl_SetKernelArg(s_k_postprocess, 10, sizeof(cl_mem), &s_buf_gamma_lut);
    cl_SetKernelArg(s_k_postprocess, 11, sizeof(float), &params->sharpen_strength);
    cl_SetKernelArg(s_k_postprocess, 12, sizeof(float), &y_r);
    cl_SetKernelArg(s_k_postprocess, 13, sizeof(float), &y_g);
    cl_SetKernelArg(s_k_postprocess, 14, sizeof(float), &y_b);
    cl_SetKernelArg(s_k_postprocess, 15, sizeof(int), &agx);

    size_t global_ws[2] = { ((size_t)width + 15) / 16 * 16, ((size_t)height + 15) / 16 * 16 };
    size_t local_ws[2]  = { 16, 16 };

    err = cl_EnqueueNDRangeKernel(s_queue, s_k_postprocess, 2, NULL, global_ws, local_ws, 0, NULL, NULL);
    return (err == CL_SUCCESS);
}

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
    int algorithm,
    const gpu_postprocess_params_t *post_params
) {
    (void)black;
    (void)white;
    if (!opencl_debayer_is_available()) return 0;

    pthread_mutex_lock(&s_ocl_mutex);
    if (!ensure_buffers(width, height)) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    size_t raw_size = (size_t)width * height * sizeof(uint16_t);
    size_t rgb_size = (size_t)width * height * 3 * sizeof(uint16_t);

    cl_int err = cl_EnqueueWriteBuffer(s_queue, s_buf_raw, CL_FALSE, 0, raw_size, raw_in, 0, NULL, NULL);
    if (err != CL_SUCCESS) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    cl_mem target_bayer = s_buf_raw;
    if (is_dual_iso) {
        if (!execute_dualiso(width, height, black, white, white_darkened, corr_ev, overlap, is_bright)) {
            pthread_mutex_unlock(&s_ocl_mutex);
            return 0;
        }
        target_bayer = s_buf_bayer_fused;
    }

    if (!execute_debayer(target_bayer, width, height, cfa_pattern, algorithm)) {
        pthread_mutex_unlock(&s_ocl_mutex);
        return 0;
    }

    int did_postprocess = 0;
    if (post_params && s_k_postprocess) {
        did_postprocess = execute_postprocess(width, height, post_params, (rgb_out_8 != NULL));
    }

    if (rgb_out_8) {
        if (did_postprocess) {
            size_t rgb8_size = (size_t)width * height * 3 * sizeof(uint8_t);
            err = cl_EnqueueReadBuffer(s_queue, s_buf_rgb8, CL_TRUE, 0, rgb8_size, rgb_out_8, 0, NULL, NULL);
        } else {
            uint16_t* tmp_16 = (uint16_t*)malloc(rgb_size);
            if (tmp_16) {
                err = cl_EnqueueReadBuffer(s_queue, s_buf_rgb, CL_TRUE, 0, rgb_size, tmp_16, 0, NULL, NULL);
                if (err == CL_SUCCESS) {
                    size_t num_components = (size_t)width * height * 3;
                    #pragma omp parallel for
                    for (size_t i = 0; i < num_components; i++) {
                        rgb_out_8[i] = (uint8_t)(tmp_16[i] >> 8);
                    }
                }
                free(tmp_16);
            } else {
                err = -1;
            }
        }
    } else if (rgb_out_16) {
        cl_mem read_target = did_postprocess ? s_buf_rgb_processed : s_buf_rgb;
        err = cl_EnqueueReadBuffer(s_queue, read_target, CL_TRUE, 0, rgb_size, rgb_out_16, 0, NULL, NULL);
    }

    pthread_mutex_unlock(&s_ocl_mutex);
    return (err == CL_SUCCESS);
}
