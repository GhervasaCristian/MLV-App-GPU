#ifndef OPENCL_LOADER_H
#define OPENCL_LOADER_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OpenCL types */
typedef void* cl_platform_id;
typedef void* cl_device_id;
typedef void* cl_context;
typedef void* cl_command_queue;
typedef void* cl_mem;
typedef void* cl_program;
typedef void* cl_kernel;
typedef void* cl_event;
typedef void* cl_sampler;

typedef int32_t cl_int;
typedef uint32_t cl_uint;
typedef uint64_t cl_ulong;
typedef uint64_t cl_mem_flags;
typedef uint64_t cl_device_type;
typedef uint32_t cl_bool;

/* OpenCL Constants */
#define CL_SUCCESS                                  0
#define CL_DEVICE_TYPE_DEFAULT                      (1 << 0)
#define CL_DEVICE_TYPE_CPU                          (1 << 1)
#define CL_DEVICE_TYPE_GPU                          (1 << 2)
#define CL_DEVICE_TYPE_ALL                          0xFFFFFFFF

#define CL_DEVICE_NAME                              0x102B
#define CL_DEVICE_VENDOR                            0x102C
#define CL_DEVICE_TYPE                              0x1000

#define CL_MEM_READ_WRITE                           (1 << 0)
#define CL_MEM_WRITE_ONLY                           (1 << 1)
#define CL_MEM_READ_ONLY                            (1 << 2)
#define CL_MEM_USE_HOST_PTR                         (1 << 3)
#define CL_MEM_ALLOC_HOST_PTR                       (1 << 4)
#define CL_MEM_COPY_HOST_PTR                        (1 << 5)

#define CL_MAP_READ                                 (1 << 0)
#define CL_MAP_WRITE                                (1 << 1)
#define CL_MAP_WRITE_INVALIDATE_REGION              (1 << 2)

#define CL_PROGRAM_BUILD_LOG                        0x1183
#define CL_PROGRAM_BUILD_STATUS                     0x1181

#define CL_TRUE                                     1
#define CL_FALSE                                    0

/* OpenCL function pointer types */
#if defined(_WIN32)
#define CL_API_CALL __stdcall
#else
#define CL_API_CALL
#endif

typedef cl_int (CL_API_CALL *pfn_clGetPlatformIDs)(cl_uint num_entries, cl_platform_id *platforms, cl_uint *num_platforms);
typedef cl_int (CL_API_CALL *pfn_clGetPlatformInfo)(cl_platform_id platform, cl_uint param_name, size_t param_value_size, void *param_value, size_t *param_value_size_ret);
typedef cl_int (CL_API_CALL *pfn_clGetDeviceIDs)(cl_platform_id platform, cl_device_type device_type, cl_uint num_entries, cl_device_id *devices, cl_uint *num_devices);
typedef cl_int (CL_API_CALL *pfn_clGetDeviceInfo)(cl_device_id device, cl_uint param_name, size_t param_value_size, void *param_value, size_t *param_value_size_ret);
typedef cl_context (CL_API_CALL *pfn_clCreateContext)(const intptr_t *properties, cl_uint num_devices, const cl_device_id *devices, void (CL_API_CALL *pfn_notify)(const char *, const void *, size_t, void *), void *user_data, cl_int *errcode_ret);
typedef cl_int (CL_API_CALL *pfn_clReleaseContext)(cl_context context);
typedef cl_command_queue (CL_API_CALL *pfn_clCreateCommandQueue)(cl_context context, cl_device_id device, cl_ulong properties, cl_int *errcode_ret);
typedef cl_int (CL_API_CALL *pfn_clReleaseCommandQueue)(cl_command_queue command_queue);
typedef cl_mem (CL_API_CALL *pfn_clCreateBuffer)(cl_context context, cl_mem_flags flags, size_t size, void *host_ptr, cl_int *errcode_ret);
typedef cl_int (CL_API_CALL *pfn_clReleaseMemObject)(cl_mem memobj);
typedef cl_program (CL_API_CALL *pfn_clCreateProgramWithSource)(cl_context context, cl_uint count, const char **strings, const size_t *lengths, cl_int *errcode_ret);
typedef cl_int (CL_API_CALL *pfn_clBuildProgram)(cl_program program, cl_uint num_devices, const cl_device_id *device_list, const char *options, void (CL_API_CALL *pfn_notify)(cl_program program, void *user_data), void *user_data);
typedef cl_int (CL_API_CALL *pfn_clGetProgramBuildInfo)(cl_program program, cl_device_id device, cl_uint param_name, size_t param_value_size, void *param_value, size_t *param_value_size_ret);
typedef cl_int (CL_API_CALL *pfn_clReleaseProgram)(cl_program program);
typedef cl_kernel (CL_API_CALL *pfn_clCreateKernel)(cl_program program, const char *kernel_name, cl_int *errcode_ret);
typedef cl_int (CL_API_CALL *pfn_clReleaseKernel)(cl_kernel kernel);
typedef cl_int (CL_API_CALL *pfn_clSetKernelArg)(cl_kernel kernel, cl_uint arg_index, size_t arg_size, const void *arg_value);
typedef cl_int (CL_API_CALL *pfn_clEnqueueNDRangeKernel)(cl_command_queue command_queue, cl_kernel kernel, cl_uint work_dim, const size_t *global_work_offset, const size_t *global_work_size, const size_t *local_work_size, cl_uint num_events_in_wait_list, const cl_event *event_wait_list, cl_event *event);
typedef cl_int (CL_API_CALL *pfn_clEnqueueWriteBuffer)(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_write, size_t offset, size_t size, const void *ptr, cl_uint num_events_in_wait_list, const cl_event *event_wait_list, cl_event *event);
typedef cl_int (CL_API_CALL *pfn_clEnqueueReadBuffer)(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_read, size_t offset, size_t size, void *ptr, cl_uint num_events_in_wait_list, const cl_event *event_wait_list, cl_event *event);
typedef void* (CL_API_CALL *pfn_clEnqueueMapBuffer)(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_map, cl_mem_flags map_flags, size_t offset, size_t size, cl_uint num_events_in_wait_list, const cl_event *event_wait_list, cl_event *event, cl_int *errcode_ret);
typedef cl_int (CL_API_CALL *pfn_clEnqueueUnmapMemObject)(cl_command_queue command_queue, cl_mem memobj, void *mapped_ptr, cl_uint num_events_in_wait_list, const cl_event *event_wait_list, cl_event *event);
typedef cl_int (CL_API_CALL *pfn_clWaitForEvents)(cl_uint num_events, const cl_event *event_list);
typedef cl_int (CL_API_CALL *pfn_clReleaseEvent)(cl_event event);
typedef cl_int (CL_API_CALL *pfn_clFinish)(cl_command_queue command_queue);

/* Global function pointers loaded dynamically at runtime */
extern pfn_clGetPlatformIDs cl_GetPlatformIDs;
extern pfn_clGetPlatformInfo cl_GetPlatformInfo;
extern pfn_clGetDeviceIDs cl_GetDeviceIDs;
extern pfn_clGetDeviceInfo cl_GetDeviceInfo;
extern pfn_clCreateContext cl_CreateContext;
extern pfn_clReleaseContext cl_ReleaseContext;
extern pfn_clCreateCommandQueue cl_CreateCommandQueue;
extern pfn_clReleaseCommandQueue cl_ReleaseCommandQueue;
extern pfn_clCreateBuffer cl_CreateBuffer;
extern pfn_clReleaseMemObject cl_ReleaseMemObject;
extern pfn_clCreateProgramWithSource cl_CreateProgramWithSource;
extern pfn_clBuildProgram cl_BuildProgram;
extern pfn_clGetProgramBuildInfo cl_GetProgramBuildInfo;
extern pfn_clReleaseProgram cl_ReleaseProgram;
extern pfn_clCreateKernel cl_CreateKernel;
extern pfn_clReleaseKernel cl_ReleaseKernel;
extern pfn_clSetKernelArg cl_SetKernelArg;
extern pfn_clEnqueueNDRangeKernel cl_EnqueueNDRangeKernel;
extern pfn_clEnqueueWriteBuffer cl_EnqueueWriteBuffer;
extern pfn_clEnqueueReadBuffer cl_EnqueueReadBuffer;
extern pfn_clEnqueueMapBuffer cl_EnqueueMapBuffer;
extern pfn_clEnqueueUnmapMemObject cl_EnqueueUnmapMemObject;
extern pfn_clWaitForEvents cl_WaitForEvents;
extern pfn_clReleaseEvent cl_ReleaseEvent;
extern pfn_clFinish cl_Finish;

/* Loader functions */
int ocl_load_library(void);
void ocl_unload_library(void);
int ocl_is_loaded(void);

#ifdef __cplusplus
}
#endif

#endif /* OPENCL_LOADER_H */
