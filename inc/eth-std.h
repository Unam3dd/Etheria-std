#ifndef ETH_STD_H
#define ETH_STD_H

///////////////////////////////////////
//
//           DEFINES
//
//////////////////////////////////////

#ifndef ETH_NULL
#define ETH_NULL (void*)0
#endif

///////////////////////////////////////
//
//          TYPEDEFS
//
//////////////////////////////////////

typedef unsigned long       eth_size_t;

typedef signed long long    eth_int64_t;
typedef signed int          eth_int32_t;
typedef signed short        eth_int16_t;
typedef signed char         eth_int8_t;

typedef signed              eth_int_128_t   __attribute__ ((vector_size(16)));
typedef signed long long    eth_int64_128_t __attribute__ ((vector_size(16), aligned(8)));
typedef signed int          eth_int32_128_t __attribute__ ((vector_size(16), aligned(4)));
typedef signed short        eth_int16_128_t __attribute__ ((vector_size(16), aligned(2)));
typedef signed char         eth_int8_128_t __attribute__ ((vector_size(16),  aligned(1)));

typedef signed              eth_int_256_t   __attribute__ ((vector_size(32)));
typedef signed long long    eth_int64_256_t __attribute__ ((vector_size(32), aligned(8)));
typedef signed int          eth_int32_256_t __attribute__ ((vector_size(32), aligned(4)));
typedef signed short        eth_int16_256_t __attribute__ ((vector_size(32), aligned(2)));
typedef signed char         eth_int8_256_t __attribute__ ((vector_size(32), aligned(1)));

typedef signed              eth_int_512_t   __attribute__ ((vector_size(64)));
typedef signed long long    eth_int64_512_t __attribute__ ((vector_size(64), aligned(8)));
typedef signed int          eth_int32_512_t __attribute__ ((vector_size(64), aligned(4)));
typedef signed short        eth_int16_512_t __attribute__ ((vector_size(64), aligned(2)));
typedef signed char         eth_int8_512_t  __attribute__ ((vector_size(64), aligned(1)));


typedef unsigned long long    eth_uint64_t;
typedef unsigned int          eth_uint32_t;
typedef unsigned short        eth_uint16_t;
typedef unsigned char         eth_uint8_t;

typedef unsigned              eth_uint_128_t   __attribute__ ((vector_size(16)));
typedef unsigned long long    eth_uint64_128_t __attribute__ ((vector_size(16), aligned(8)));
typedef unsigned int          eth_uint32_128_t __attribute__ ((vector_size(16), aligned(4)));
typedef unsigned short        eth_uint16_128_t __attribute__ ((vector_size(16), aligned(2)));
typedef unsigned char         eth_uint8_128_t __attribute__ ((vector_size(16),  aligned(1)));

typedef unsigned              eth_uint_256_t   __attribute__ ((vector_size(32)));
typedef unsigned long long    eth_uint64_256_t __attribute__ ((vector_size(32), aligned(8)));
typedef unsigned int          eth_uint32_256_t __attribute__ ((vector_size(32), aligned(4)));
typedef unsigned short        eth_uint16_256_t __attribute__ ((vector_size(32), aligned(2)));
typedef unsigned char         eth_uint8_256_t __attribute__ ((vector_size(32),  aligned(1)));

typedef unsigned              eth_uint_512_t   __attribute__ ((vector_size(64)));
typedef unsigned long long    eth_uint64_512_t __attribute__ ((vector_size(64), aligned(8)));
typedef unsigned int          eth_uint32_512_t __attribute__ ((vector_size(64), aligned(4)));
typedef unsigned short        eth_uint16_512_t __attribute__ ((vector_size(64), aligned(2)));
typedef unsigned char         eth_uint8_512_t  __attribute__ ((vector_size(64), aligned(1)));

typedef unsigned char   u8_t;
typedef unsigned short  u16_t;
typedef unsigned int    u32_t;
typedef unsigned long   u64_t;
typedef unsigned long   size_t;

///////////////////////////////////////
//
//        MEMORY
//
//////////////////////////////////////

void    *eth_memcpy(void *dst, const void *src, size_t size);

#endif
