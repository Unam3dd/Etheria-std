#include "eth-std.h"

///////////////////////////////////////
//
//           MEMCPY
//
//////////////////////////////////////

static void *_eth_memcpy_naive(void *dst, const void *src, size_t size)
{
    if (!dst || !src || !size) return (dst);

    u8_t *psrc = (u8_t*)src;
    u8_t *pdst = (u8_t *)dst;

    while ((size > 0) && size--) *pdst++ = *psrc++;
    return (dst);
}

void * (*_eth_memcpy_ifunc (void))(void *, const void *, eth_size_t)
{
    return (_eth_memcpy_naive);
}

void    *eth_memcpy(void *dst, const void *src, eth_size_t size) __attribute__((ifunc("_eth_memcpy_ifunc")));
