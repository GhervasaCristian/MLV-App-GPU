/*!
* \file rbf_wrapper.cpp
* \author masc4ii
* \copyright 2019
* \brief Wrapper for rbfilter
*/

#include "rbf.h"
#include "RBFilterPlain.h"
#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif

void recursive_bf_wrap(uint16_t * img_in,
        uint16_t * img_out,
        float sigma_spatial, float sigma_range,
        int width, int height, int channel)
{
    static CRBFilterPlain s_rbf;
    static pthread_mutex_t s_rbf_mutex = PTHREAD_MUTEX_INITIALIZER;

    pthread_mutex_lock(&s_rbf_mutex);
    s_rbf.reserveMemory( width, height, channel );
    s_rbf.filter( img_in, img_out, sigma_spatial, sigma_range, width, height, channel );
    pthread_mutex_unlock(&s_rbf_mutex);
}

#ifdef __cplusplus
}
#endif
