#ifndef ETH_MEMORY_H
#define ETH_MEMORY_H

///////////////////////////////////////
//
//         HEADER
//
//////////////////////////////////////

#include "eth-types.h"

///////////////////////////////////////
//
//        MEMORY
//
//////////////////////////////////////

#ifdef NO_STATIC
void    *_eth_memcpy_naive(void *restrict dst, const void *restrict src, size_t size);
void    *_eth_memcpy_erms(void *restrict dst, const void *restrict src, size_t size);
#endif

void    *eth_memcpy(void *restrict dst, const void *restrict src, size_t size);

#endif
