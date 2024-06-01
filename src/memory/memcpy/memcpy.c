#include "eth-types.h"

///////////////////////////////////////
//
//           MEMCPY
//
//////////////////////////////////////

#if defined(__linux__)

STATIC void *_eth_memcpy_naive (void *restrict dst, const void *restrict src, size_t size)
{
  if (!dst || !src || !size)
    return (dst);

  u8_t *ps = (u8_t *) src;
  u8_t *pd = (u8_t *) dst;

  while (size--) *pd++ = *ps++;
  return (dst);
}

void *(*_eth_memcpy_ifunc (void)) (void *restrict, const void *restrict, size_t)
{
  return (_eth_memcpy_naive);
}

void *eth_memcpy (void *restrict dst, const void *restrict src, size_t size) __attribute__((ifunc ("_eth_memcpy_ifunc")));

#else

void * _eth_memcpy_naive (void *restrict dst, const void *restrict src, size_t size)
{
  if (!dst || !src || !size)
    return (dst);

  u8_t *psrc = (u8_t *) src;
  u8_t *pdst = (u8_t *) dst;

  while (size--) *pdst++ = *psrc++;
  return (dst);
}

#endif
