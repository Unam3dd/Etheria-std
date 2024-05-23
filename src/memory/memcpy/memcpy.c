#include "eth-std.h"

///////////////////////////////////////
//
//           MEMCPY
//
//////////////////////////////////////

#if defined(__linux__)

#ifdef NO_STATIC
void *_eth_memcpy_naive (void *dst, const void *src, size_t size)
{
  if (!dst || !src || !size)
    return (dst);

  u8_t *ps = (u8_t *) src;
  u8_t *pd = (u8_t *) dst;

  while (size--) *pd++ = *ps++;
  return (dst);
}
#else
static void *_eth_memcpy_naive (void *dst, const void *src, size_t size)
{
  if (!dst || !src || !size)
    return (dst);

  u8_t *ps = (u8_t *) src;
  u8_t *pd = (u8_t *) dst;

  while (size--) *pd++ = *ps++;
  return (dst);
}
#endif

void *(*_eth_memcpy_ifunc (void)) (void *, const void *, size_t)
{
  return (_eth_memcpy_naive);
}

void *eth_memcpy (void *dst, const void *src, size_t size) __attribute__((ifunc ("_eth_memcpy_ifunc")));

#else

void * _eth_memcpy_naive (void *dst, const void *src, size_t size)
{
  if (!dst || !src || !size)
    return (dst);

  u8_t *psrc = (u8_t *) src;
  u8_t *pdst = (u8_t *) dst;

  while (size--) *pdst++ = *psrc++;
  return (dst);
}

#endif
