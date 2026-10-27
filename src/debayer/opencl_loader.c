#include "opencl_loader.h"
#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32)
#include <windows.h>
static HMODULE s_ocl_module = NULL;
#define LOAD_SYM(name) cl_##name = (pfn_cl##name)GetProcAddress(s_ocl_module, "cl" #name)
#else
#include <dlfcn.h>
static void* s_ocl_module = NULL;
#define LOAD_SYM(name) cl_##name = (pfn_cl##name)dlsym(s_ocl_module, "cl" #name)
#endif

/* Define function pointers */
pfn_clGetPlatformIDs cl_GetPlatformIDs = NULL;
pfn_clGetPlatformInfo cl_GetPlatformInfo = NULL;
pfn_clGetDeviceIDs cl_GetDeviceIDs = NULL;
pfn_clGetDeviceInfo cl_GetDeviceInfo = NULL;
pfn_clCreateContext cl_CreateContext = NULL;
pfn_clReleaseContext cl_ReleaseContext = NULL;
pfn_clCreateCommandQueue cl_CreateCommandQueue = NULL;
pfn_clReleaseCommandQueue cl_ReleaseCommandQueue = NULL;
pfn_clCreateBuffer cl_CreateBuffer = NULL;
pfn_clReleaseMemObject cl_ReleaseMemObject = NULL;
pfn_clCreateProgramWithSource cl_CreateProgramWithSource = NULL;
pfn_clBuildProgram cl_BuildProgram = NULL;
pfn_clGetProgramBuildInfo cl_GetProgramBuildInfo = NULL;
pfn_clReleaseProgram cl_ReleaseProgram = NULL;
pfn_clCreateKernel cl_CreateKernel = NULL;
pfn_clReleaseKernel cl_ReleaseKernel = NULL;
pfn_clSetKernelArg cl_SetKernelArg = NULL;
pfn_clEnqueueNDRangeKernel cl_EnqueueNDRangeKernel = NULL;
pfn_clEnqueueWriteBuffer cl_EnqueueWriteBuffer = NULL;
pfn_clEnqueueReadBuffer cl_EnqueueReadBuffer = NULL;
pfn_clEnqueueMapBuffer cl_EnqueueMapBuffer = NULL;
pfn_clEnqueueUnmapMemObject cl_EnqueueUnmapMemObject = NULL;
pfn_clWaitForEvents cl_WaitForEvents = NULL;
pfn_clReleaseEvent cl_ReleaseEvent = NULL;
pfn_clFinish cl_Finish = NULL;

int ocl_load_library(void) {
    if (s_ocl_module != NULL) {
        return 1; /* Already loaded */
    }

#if defined(_WIN32)
    s_ocl_module = LoadLibraryA("OpenCL.dll");
    if (!s_ocl_module) {
        return 0;
    }
#elif defined(__APPLE__)
    s_ocl_module = dlopen("/System/Library/Frameworks/OpenCL.framework/OpenCL", RTLD_NOW | RTLD_LOCAL);
    if (!s_ocl_module) {
        return 0;
    }
#else
    s_ocl_module = dlopen("libOpenCL.so.1", RTLD_NOW | RTLD_LOCAL);
    if (!s_ocl_module) {
        s_ocl_module = dlopen("libOpenCL.so", RTLD_NOW | RTLD_LOCAL);
    }
    if (!s_ocl_module) {
        return 0;
    }
#endif

    LOAD_SYM(GetPlatformIDs);
    LOAD_SYM(GetPlatformInfo);
    LOAD_SYM(GetDeviceIDs);
    LOAD_SYM(GetDeviceInfo);
    LOAD_SYM(CreateContext);
    LOAD_SYM(ReleaseContext);
    LOAD_SYM(CreateCommandQueue);
    LOAD_SYM(ReleaseCommandQueue);
    LOAD_SYM(CreateBuffer);
    LOAD_SYM(ReleaseMemObject);
    LOAD_SYM(CreateProgramWithSource);
    LOAD_SYM(BuildProgram);
    LOAD_SYM(GetProgramBuildInfo);
    LOAD_SYM(ReleaseProgram);
    LOAD_SYM(CreateKernel);
    LOAD_SYM(ReleaseKernel);
    LOAD_SYM(SetKernelArg);
    LOAD_SYM(EnqueueNDRangeKernel);
    LOAD_SYM(EnqueueWriteBuffer);
    LOAD_SYM(EnqueueReadBuffer);
    LOAD_SYM(EnqueueMapBuffer);
    LOAD_SYM(EnqueueUnmapMemObject);
    LOAD_SYM(WaitForEvents);
    LOAD_SYM(ReleaseEvent);
    LOAD_SYM(Finish);

    if (!cl_GetPlatformIDs || !cl_GetDeviceIDs || !cl_CreateContext || 
        !cl_CreateCommandQueue || !cl_CreateBuffer || !cl_CreateProgramWithSource ||
        !cl_BuildProgram || !cl_CreateKernel || !cl_SetKernelArg ||
        !cl_EnqueueNDRangeKernel || !cl_EnqueueWriteBuffer || !cl_EnqueueReadBuffer) {
        ocl_unload_library();
        return 0;
    }

    return 1;
}

void ocl_unload_library(void) {
    if (s_ocl_module) {
#if defined(_WIN32)
        FreeLibrary(s_ocl_module);
#else
        dlclose(s_ocl_module);
#endif
        s_ocl_module = NULL;
    }

    cl_GetPlatformIDs = NULL;
    cl_GetPlatformInfo = NULL;
    cl_GetDeviceIDs = NULL;
    cl_GetDeviceInfo = NULL;
    cl_CreateContext = NULL;
    cl_ReleaseContext = NULL;
    cl_CreateCommandQueue = NULL;
    cl_ReleaseCommandQueue = NULL;
    cl_CreateBuffer = NULL;
    cl_ReleaseMemObject = NULL;
    cl_CreateProgramWithSource = NULL;
    cl_BuildProgram = NULL;
    cl_GetProgramBuildInfo = NULL;
    cl_ReleaseProgram = NULL;
    cl_CreateKernel = NULL;
    cl_ReleaseKernel = NULL;
    cl_SetKernelArg = NULL;
    cl_EnqueueNDRangeKernel = NULL;
    cl_EnqueueWriteBuffer = NULL;
    cl_EnqueueReadBuffer = NULL;
    cl_EnqueueMapBuffer = NULL;
    cl_EnqueueUnmapMemObject = NULL;
    cl_WaitForEvents = NULL;
    cl_ReleaseEvent = NULL;
    cl_Finish = NULL;
}

int ocl_is_loaded(void) {
    return (s_ocl_module != NULL && cl_CreateContext != NULL);
}
