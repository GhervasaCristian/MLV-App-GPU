#include <stdint.h>
#include <stdlib.h>

/* 
 * CUDA Shim for MinGW 
 * This file provides missing MSVC-specific symbols that are required by 
 * the CUDA runtime library (cudart.lib) but are not provided by MinGW.
 */

#ifdef __cplusplus
extern "C" {
#endif

/* MSVC Security Cookie symbols */
#ifdef _WIN64
uintptr_t __security_cookie = 0x2B992DDFA232L;
#else
uintptr_t __security_cookie = 0xBB40E64E;
#endif

void __cdecl __security_check_cookie(uintptr_t _StackCookie) {
    (void)_StackCookie;
}

/* Handler for GS checks */
void __cdecl __GSHandlerCheck() {
}

/* 
 * We define the mangled names using assembly labels.
 * This is the most reliable way in MinGW/GCC to define symbols 
 * that contain characters illegal in C/C++ identifiers.
 */

void msvc_free_wrapper(void* ptr) {
    free(ptr);
}

void msvc_free_size_wrapper(void* ptr, size_t size) {
    (void)size;
    free(ptr);
}

#ifdef _WIN64
/* 
 * Define ??3@YAXPEAX@Z (operator delete) 
 * We use .set or .equiv to alias the mangled name to our C wrapper.
 */
__asm__(".globl \"??3@YAXPEAX@Z\"\n"
        "\"??3@YAXPEAX@Z\": jmp msvc_free_wrapper");

/* Define ??3@YAXPEAX_K@Z (operator delete with size) */
__asm__(".globl \"??3@YAXPEAX_K@Z\"\n"
        "\"??3@YAXPEAX_K@Z\": jmp msvc_free_size_wrapper");
#endif

#ifdef __cplusplus
}
#endif
