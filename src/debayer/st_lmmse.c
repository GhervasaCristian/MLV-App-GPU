#include <cuda_runtime.h>
#include "st_lmmse.h"

#define CUDA_CHECK(call) \
    do { \
        cudaError_t err = call; \
        if (err != cudaSuccess) { \
            return 0; \
        } \
    } while (0)

// Ring buffer size: T-1, T, T+1
#define RING_BUFFER_SIZE 3

struct StLmmseContext {
    uint16_t* d_ring_buffer[RING_BUFFER_SIZE]; // Device pointers for raw frames
    uint16_t* d_output_rgb;   // Device pointer for output RGB
    
    cudaStream_t stream;
    
    int width;
    int height;
    size_t frame_size_bytes; // Size of one raw frame
    size_t rgb_size_bytes;   // Size of output RGB frame
    
    // State tracking
    uint64_t cached_frame_indices[RING_BUFFER_SIZE]; // Which frame is in which slot
    int current_slot_idx; // Pointer to the "current" T frame in the ring
};

// --- Kernels (Placeholder for now) ---

#define TILE_W 32
#define TILE_H 32
#define APRON 2
#define SMEM_W (TILE_W + 2 * APRON)
#define SMEM_H (TILE_H + 2 * APRON)

// Bayer Colors
#define BAYER_R 0
#define BAYER_G 1
#define BAYER_B 2

__device__ inline int get_bayer_color(int x, int y, int cfa) {
    // cfa: 0x01000201 (GBRG), 0x00010102 (BGGR), 0x01020001 (GRBG), 0x02010100 (RGGB)
    // Simplify: check 2x2 block
    // We can extract bytes.
    // But typically: 
    // GBRG: (0,0)=G, (1,0)=B, (0,1)=R, (1,1)=G
    int row_phase = y & 1;
    int col_phase = x & 1;
    
    // Heuristic based on common patterns passed as int.
    // 0x02010100 (RGGB): R at (0,0)
    // 0x01000201 (GBRG): G at (0,0), B at (1,0)
    // Let's decode bytes dynamically for safety.
    // Be careful with endianness logic, but usually this matches the struct layout
    // cfa pattern is usually 0x(0,0)(0,1)(1,0)(1,1) ? Or row major?
    // MLV App: "0x01000201 GBRG" -> 1=G(0,0), 0=R(0,1), 2=B(1,0), 1=G(1,1)? No GBRG means G B / R G.
    // Let's just implement GBRG, BGGR, RGGB, GRBG switch based on value.
    
    if (cfa == 0x01000201) { // GBRG
        if (row_phase == 0) return (col_phase == 0) ? BAYER_G : BAYER_B;
        else                return (col_phase == 0) ? BAYER_R : BAYER_G;
    } 
    else if (cfa == 0x00010102) { // BGGR
        if (row_phase == 0) return (col_phase == 0) ? BAYER_B : BAYER_G;
        else                return (col_phase == 0) ? BAYER_G : BAYER_R;
    }
    else if (cfa == 0x01020001) { // GRBG
        if (row_phase == 0) return (col_phase == 0) ? BAYER_G : BAYER_R;
        else                return (col_phase == 0) ? BAYER_B : BAYER_G;
    }
    else { // RGGB (Default or 0x02010100)
         if (row_phase == 0) return (col_phase == 0) ? BAYER_R : BAYER_G;
         else                return (col_phase == 0) ? BAYER_G : BAYER_B;
    }
}

__device__ float estimate_g(float* smem, int tx, int ty, int smem_w, float val_center, int black, int white) {
    // Spatial Green interpolation at R/B location
    // Using simple Hamilton-Adams or LMMSE-like directional gradients
    
    // Neighbors
    float g_u = smem[(ty - 1) * smem_w + tx];
    float g_d = smem[(ty + 1) * smem_w + tx];
    float g_l = smem[ty * smem_w + (tx - 1)];
    float g_r = smem[ty * smem_w + (tx + 1)];
    
    float c_u = smem[(ty - 2) * smem_w + tx]; // Chroma neighbor (R or B)
    float c_d = smem[(ty + 2) * smem_w + tx];
    float c_l = smem[ty * smem_w + (tx - 2)];
    float c_r = smem[ty * smem_w + (tx + 2)];
    
    // Gradients
    float grad_h = fabsf(g_l - g_r) + fabsf(2.0f * val_center - c_l - c_r);
    float grad_v = fabsf(g_u - g_d) + fabsf(2.0f * val_center - c_u - c_d);
    
    float eps = 1e-6f;
    float w_h = 1.0f / (grad_h * grad_h + eps);
    float w_v = 1.0f / (grad_v * grad_v + eps);
    
    // Estimates
    float est_h = (g_l + g_r) * 0.5f + (2.0f * val_center - c_l - c_r) * 0.25f;
    float est_v = (g_u + g_d) * 0.5f + (2.0f * val_center - c_u - c_d) * 0.25f;
    
    return (w_h * est_h + w_v * est_v) / (w_h + w_v);
}

__device__ void do_spatial_demosaic(
    float* smem, 
    uint16_t* output, 
    int width, 
    int height, 
    int x_out, 
    int y_out, 
    int tx, 
    int ty, 
    int black_level, 
    int white_level, 
    int cfa_pattern
) {
    if (x_out >= width || y_out >= height) return;
    
    int sx = tx + APRON;
    int sy = ty + APRON;
    
    int color = get_bayer_color(x_out, y_out, cfa_pattern);
    float val_center = smem[sy * SMEM_W + sx];
    
    float r = 0, g = 0, b = 0;
    
    if (color == BAYER_G) {
        g = val_center;
        int color_left = get_bayer_color(x_out - 1, y_out, cfa_pattern);
        
        float v_left  = smem[sy * SMEM_W + (sx - 1)];
        float v_right = smem[sy * SMEM_W + (sx + 1)];
        float v_up    = smem[(sy - 1) * SMEM_W + sx];
        float v_down  = smem[(sy + 1) * SMEM_W + sx];
        
        float r_est = 0, b_est = 0;
        
        if (color_left == BAYER_R) {
            r_est = (v_left + v_right) * 0.5f;
            b_est = (v_up + v_down) * 0.5f;
        } else {
            b_est = (v_left + v_right) * 0.5f;
            r_est = (v_up + v_down) * 0.5f;
        }
        r = r_est; 
        b = b_est; 
    }
    else if (color == BAYER_R) {
        r = val_center;
        g = estimate_g(smem, sx, sy, SMEM_W, val_center, black_level, white_level);
        float b_nw = smem[(sy-1)*SMEM_W + (sx-1)];
        float b_ne = smem[(sy-1)*SMEM_W + (sx+1)];
        float b_sw = smem[(sy+1)*SMEM_W + (sx-1)];
        float b_se = smem[(sy+1)*SMEM_W + (sx+1)];
        b = (b_nw + b_ne + b_sw + b_se) * 0.25f;
    }
    else { // BAYER_B
        b = val_center;
        g = estimate_g(smem, sx, sy, SMEM_W, val_center, black_level, white_level);
        float r_nw = smem[(sy-1)*SMEM_W + (sx-1)];
        float r_ne = smem[(sy-1)*SMEM_W + (sx+1)];
        float r_sw = smem[(sy+1)*SMEM_W + (sx-1)];
        float r_se = smem[(sy+1)*SMEM_W + (sx+1)];
        r = (r_nw + r_ne + r_sw + r_se) * 0.25f;
    }
    
    int idx_rgb = (y_out * width + x_out) * 3;
    output[idx_rgb + 0] = (uint16_t)max(0.0f, min(65535.0f, r));
    output[idx_rgb + 1] = (uint16_t)max(0.0f, min(65535.0f, g));
    output[idx_rgb + 2] = (uint16_t)max(0.0f, min(65535.0f, b));
}

__global__ void k_st_lmmse_demosaic(
    const uint16_t* __restrict__ input,
    uint16_t* __restrict__ output,
    int width, 
    int height,
    int black_level,
    int white_level,
    int cfa_pattern
) {
    __shared__ float smem[SMEM_H * SMEM_W];
    int tx = threadIdx.x;
    int ty = threadIdx.y;
    int apron_start_x = blockIdx.x * TILE_W - APRON;
    int apron_start_y = blockIdx.y * TILE_H - APRON;
    
    // Pattern to load tile + apron (36x36) using 32x32 threads
    // Just loop simplistic approach for this phase
    for (int y = ty; y < SMEM_H; y += TILE_H) {
        for (int x = tx; x < SMEM_W; x += TILE_W) {
            int global_x = apron_start_x + x;
            int global_y = apron_start_y + y;
            global_x = max(0, min(width - 1, global_x));
            global_y = max(0, min(height - 1, global_y));
            smem[y * SMEM_W + x] = (float)input[global_y * width + global_x];
        }
    }
    
    __syncthreads();
    
    int x_out = blockIdx.x * TILE_W + tx;
    int y_out = blockIdx.y * TILE_H + ty;
    
    do_spatial_demosaic(smem, output, width, height, x_out, y_out, tx, ty, black_level, white_level, cfa_pattern);
}

__global__ void k_st_lmmse_temporal(
    const uint16_t* __restrict__ input_curr,
    const uint16_t* __restrict__ input_prev,
    const uint16_t* __restrict__ input_next,
    uint16_t* __restrict__ output,
    int width, 
    int height,
    int black_level,
    int white_level,
    int cfa_pattern
) {
    __shared__ float smem[SMEM_H * SMEM_W];
    int tx = threadIdx.x;
    int ty = threadIdx.y;
    int apron_start_x = blockIdx.x * TILE_W - APRON;
    int apron_start_y = blockIdx.y * TILE_H - APRON;
    
    float threshold = (white_level - black_level) * 0.05f; // 5% motion threshold
    
    // Fused Load
    for (int y = ty; y < SMEM_H; y += TILE_H) {
        for (int x = tx; x < SMEM_W; x += TILE_W) {
            int global_x = apron_start_x + x;
            int global_y = apron_start_y + y;
            global_x = max(0, min(width - 1, global_x));
            global_y = max(0, min(height - 1, global_y));
            
            int idx = global_y * width + global_x;
            float val_c = (float)input_curr[idx];
            float val_p = (float)input_prev[idx];
            float val_n = (float)input_next[idx];
            
            // Motion Detection
            float diff = max(fabsf(val_c - val_p), fabsf(val_c - val_n));
            
            // Soft blend
            float alpha = min(1.0f, diff / threshold); // 0 = Static, 1 = Motion
            
            float val_temporal = (val_p + val_n + val_c * 2.0f) * 0.25f;
            float val_fused = val_c * alpha + val_temporal * (1.0f - alpha);
            
            smem[y * SMEM_W + x] = val_fused;
        }
    }
    
    __syncthreads();
    
    int x_out = blockIdx.x * TILE_W + tx;
    int y_out = blockIdx.y * TILE_H + ty;
    
    do_spatial_demosaic(smem, output, width, height, x_out, y_out, tx, ty, black_level, white_level, cfa_pattern);
}

// --- Host Functions ---

extern "C" GpuContextHandle st_lmmse_init_context(int width, int height) {
    StLmmseContext* ctx = (StLmmseContext*)malloc(sizeof(StLmmseContext));
    if (!ctx) return NULL;
    ctx->width = width;
    ctx->height = height;
    ctx->frame_size_bytes = width * height * sizeof(uint16_t);
    ctx->rgb_size_bytes = width * height * 3 * sizeof(uint16_t);
    ctx->current_slot_idx = 0;
    
    for (int i = 0; i < RING_BUFFER_SIZE; i++) {
        CUDA_CHECK(cudaMalloc(&ctx->d_ring_buffer[i], ctx->frame_size_bytes));
        ctx->cached_frame_indices[i] = (uint64_t)-1;
    }
    
    CUDA_CHECK(cudaMalloc(&ctx->d_output_rgb, ctx->rgb_size_bytes));
    CUDA_CHECK(cudaStreamCreate(&ctx->stream));
    
    return (GpuContextHandle)ctx;
}

extern "C" void st_lmmse_free_context(GpuContextHandle handle) {
    StLmmseContext* ctx = (StLmmseContext*)handle;
    if (!ctx) return;
    
    for (int i = 0; i < RING_BUFFER_SIZE; i++) {
        cudaFree(ctx->d_ring_buffer[i]);
    }
    cudaFree(ctx->d_output_rgb);
    cudaStreamDestroy(ctx->stream);
    free(ctx);
}

extern "C" int st_lmmse_has_frame(GpuContextHandle handle, uint64_t frame_idx) {
    StLmmseContext* ctx = (StLmmseContext*)handle;
    if (!ctx) return 0;
    
    for (int i = 0; i < RING_BUFFER_SIZE; i++) {
        if (ctx->cached_frame_indices[i] == frame_idx) return 1;
    }
    return 0;
}

extern "C" int st_lmmse_upload_frame(GpuContextHandle handle, uint64_t frame_idx, uint16_t* raw_data) {
    StLmmseContext* ctx = (StLmmseContext*)handle;
    if (!ctx) return 0;
    
    int slot = frame_idx % RING_BUFFER_SIZE;
    CUDA_CHECK(cudaMemcpyAsync(ctx->d_ring_buffer[slot], raw_data, ctx->frame_size_bytes, cudaMemcpyHostToDevice, ctx->stream));
    ctx->cached_frame_indices[slot] = frame_idx;
    return 1;
}

extern "C" int st_lmmse_process_frame(
    GpuContextHandle handle,
    uint16_t* output_rgb_frame,
    int width,
    int height,
    uint64_t frame_idx,
    int algorithm_mode,
    int black_level,
    int white_level,
    int cfa_pattern
) {
    StLmmseContext* ctx = (StLmmseContext*)handle;
    if (!ctx) return 0;
    
    // Slots
    int slot_curr = frame_idx % RING_BUFFER_SIZE;
    int slot_prev = (frame_idx > 0) ? (frame_idx - 1) % RING_BUFFER_SIZE : slot_curr;
    int slot_next = (frame_idx + 1) % RING_BUFFER_SIZE;
    
    // Check Current
    if (ctx->cached_frame_indices[slot_curr] != frame_idx) return 0;
    
    // Check Neighbors for Temporal
    bool can_do_temporal = (algorithm_mode == 1);
    if (can_do_temporal) {
        if (ctx->cached_frame_indices[slot_prev] != (frame_idx > 0 ? frame_idx - 1 : 0)) slot_prev = slot_curr;
        if (ctx->cached_frame_indices[slot_next] != frame_idx + 1) slot_next = slot_curr; // Fallback to current if next missing
    }
    
    dim3 block(TILE_W, TILE_H);
    dim3 grid((width + TILE_W - 1) / TILE_W, (height + TILE_H - 1) / TILE_H);
    
    if (algorithm_mode == 1) {
        k_st_lmmse_temporal<<<grid, block, 0, ctx->stream>>>(
            ctx->d_ring_buffer[slot_curr],
            ctx->d_ring_buffer[slot_prev],
            ctx->d_ring_buffer[slot_next],
            ctx->d_output_rgb,
            width, height, black_level, white_level, cfa_pattern
        );
    } else {
        k_st_lmmse_demosaic<<<grid, block, 0, ctx->stream>>>(
            ctx->d_ring_buffer[slot_curr],
            ctx->d_output_rgb,
            width, height, black_level, white_level, cfa_pattern
        );
    }
    
    CUDA_CHECK(cudaMemcpyAsync(output_rgb_frame, ctx->d_output_rgb, ctx->rgb_size_bytes, cudaMemcpyDeviceToHost, ctx->stream));
    CUDA_CHECK(cudaStreamSynchronize(ctx->stream));
    
    return 1;
}
