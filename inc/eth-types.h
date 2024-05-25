#ifndef ETH_TYPES_H
#define ETH_TYPES_H

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
//       TYPEDEFS SIGNED LEGACY
//
//////////////////////////////////////

typedef signed int          eth_int32_t;
typedef signed short        eth_int16_t;
typedef signed char         eth_int8_t;

typedef signed int          i32_t;
typedef signed short        i16_t;
typedef signed char         i8_t;

#if defined(__linux__)
typedef signed long         i64_t;
typedef signed long         eth_int64_t;
#else
typedef signed long long    i64_t;
typedef signed long long    eth_int64_t;
#endif

///////////////////////////////////////
//
//     TYPEDEFS UNSIGNED LEGACY
//
//////////////////////////////////////

typedef unsigned int            eth_uint32_t;
typedef unsigned short          eth_uint16_t;
typedef unsigned char           eth_uint8_t;

typedef unsigned int            u32_t;
typedef unsigned short          u16_t;
typedef unsigned char           u8_t;

typedef unsigned int            dword_t;
typedef unsigned short          word_t;
typedef unsigned char           byte_t;

#if defined(__linux__)
typedef unsigned long           qword_t;
typedef unsigned long           eth_size_t;
typedef unsigned long           size_t;
typedef unsigned long           u64_t;
typedef unsigned long           uint64_t;
typedef unsigned long           eth_uint64_t;
#else
typedef unsigned long long      qword_t;
typedef unsigned long long      eth_size_t;
typedef unsigned long long      size_t;
typedef unsigned long long      u64_t;
typedef unsigned long long      uint64_t;
typedef unsigned long long      eth_uint64_t;
#endif


#if defined(__x86_64__) || defined(__GNUC__) || defined (__clang__) || defined(__MINGW64__) || defined(__MINGW32__)

///////////////////////////////////////
//
//   TYPEDEFS SIGNED SIMD REGISTERS
//
//////////////////////////////////////


///////////////////////////////////////
//
//         128 BITS SIGNED
//
//////////////////////////////////////

#if defined(__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x10
typedef signed                  eth_int_128_t   __attribute__ ((vector_size(0x10), aligned(0x10)));
#else
typedef signed                  eth_int_128_t   __attribute__ ((vector_size(0x10), aligned(__BIGGEST_ALIGNMENT__)));
#endif

typedef signed long             eth_int64_128_t __attribute__ ((vector_size(0x10), aligned(0x8)));
typedef signed int              eth_int32_128_t __attribute__ ((vector_size(0x10), aligned(0x4)));
typedef signed short            eth_int16_128_t __attribute__ ((vector_size(0x10), aligned(0x2)));
typedef signed char             eth_int8_128_t __attribute__ ((vector_size(0x10),  aligned(0x1)));

typedef eth_int_128_t          eth_i128_t;
typedef eth_int64_128_t        eth_i64_128_t;
typedef eth_int32_128_t        eth_i32_128_t;
typedef eth_int16_128_t        eth_i16_128_t;
typedef eth_int8_128_t         eth_i8_128_t;

typedef eth_i128_t              i128_t;
typedef eth_i64_128_t           i64_128_t;
typedef eth_i32_128_t           i32_128_t;
typedef eth_i16_128_t           i16_128_t;
typedef eth_i8_128_t            i8_128_t;


///////////////////////////////////////
//
//       256 BITS SIGNED
//
//////////////////////////////////////

#if defined(__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x20
typedef signed                  eth_int_256_t   __attribute__ ((vector_size(0x20), aligned(0x20)));
#elif defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ == 0x10
typedef signed                  eth_int_256_t   __attribute__ ((vector_size(0x20), aligned(0x10)));
#else
typedef signed                  eth_int_256_t   __attribute__ ((vector_size(0x20), aligned(__BIGGEST_ALIGNMENT__)));
#endif

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x10
typedef signed                  eth_int128_256_t __attribute__((vector_size(0x20), aligned(0x10)));
#endif

typedef signed long             eth_int64_256_t __attribute__ ((vector_size(0x20), aligned(8)));
typedef signed int              eth_int32_256_t __attribute__ ((vector_size(0x20), aligned(4)));
typedef signed short            eth_int16_256_t __attribute__ ((vector_size(0x20), aligned(2)));
typedef signed char             eth_int8_256_t __attribute__ ((vector_size(0x20), aligned(1)));

typedef eth_int_256_t          eth_i256_t;
typedef eth_int128_256_t       eth_i128_256_t;
typedef eth_int64_256_t        eth_i64_256_t;
typedef eth_int32_256_t        eth_i32_256_t;
typedef eth_int16_256_t        eth_i16_256_t;
typedef eth_int8_256_t         eth_i8_256_t;

typedef eth_i256_t              i256_t;
typedef eth_i128_256_t          i128_256_t;
typedef eth_i64_256_t           i64_256_t;
typedef eth_i32_256_t           i32_256_t;
typedef eth_i16_256_t           i16_256_t;
typedef eth_i8_256_t            i8_256_t;

///////////////////////////////////////
//
//      512 BITS SIGNED
//
//////////////////////////////////////

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x40
typedef signed                  eth_int_512_t   __attribute__ ((vector_size(0x40), aligned(0x40)));
#elif defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ == 0x20
typedef signed                  eth_int_512_t   __attribute__ ((vector_size(0x40), aligned(0x20)));
#elif defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ == 0x10
typedef signed                  eth_int_512_t   __attribute__ ((vector_size(0x40), aligned(0x10)));
#else
typedef signed                  eth_int_512_t   __attribute__ ((vector_size(0x40), aligned(__BIGGEST_ALIGNMENT__)));
#endif

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x20
typedef signed                  eth_int256_512_t __attribute__ ((vector_size(0x40), aligned(0x20)));
#endif

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x10
typedef signed                  eth_int128_512_t __attribute__ ((vector_size(0x40), aligned(0x10)));
#endif

typedef signed long             eth_int64_512_t __attribute__ ((vector_size(0x40), aligned(8)));
typedef signed int              eth_int32_512_t __attribute__ ((vector_size(0x40), aligned(4)));
typedef signed short            eth_int16_512_t __attribute__ ((vector_size(0x40), aligned(2)));
typedef signed char             eth_int8_512_t  __attribute__ ((vector_size(0x40), aligned(1)));

typedef eth_int_512_t          eth_i512_t;

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x20
typedef eth_int256_512_t        eth_i256_512_t;
typedef eth_i256_512_t          i256_512_t;
#endif

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x10
typedef eth_int128_512_t        eth_i128_512_t;
typedef eth_int128_512_t        i128_512_t;
#endif

typedef eth_int64_512_t        eth_i64_512_t;
typedef eth_int32_512_t        eth_i32_512_t;
typedef eth_int16_512_t        eth_i16_512_t;
typedef eth_int8_512_t         eth_i8_512_t;

typedef eth_i512_t              i512_t;
typedef eth_int64_512_t         i64_512_t;
typedef eth_int32_512_t         i32_512_t;
typedef eth_int16_512_t         i16_512_t;
typedef eth_int8_512_t          i8_512_t;

///////////////////////////////////////
//
//  TYPEDEFS UNSIGNED SIMD REGISTERS
//
//////////////////////////////////////


///////////////////////////////////////
//
//      128 BITS UNSIGNED
//
//////////////////////////////////////

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x10
typedef unsigned                eth_uint_128_t   __attribute__ ((vector_size(0x10), aligned(0x10)));
#else
typedef unsigned                eth_uint_128_t  __attribute__ ((vector_size(16), aligned(0x8)));
#endif

typedef unsigned long           eth_uint64_128_t __attribute__ ((vector_size(0x10), aligned(8)));
typedef unsigned int            eth_uint32_128_t __attribute__ ((vector_size(0x10), aligned(4)));
typedef unsigned short          eth_uint16_128_t __attribute__ ((vector_size(0x10), aligned(2)));
typedef unsigned char           eth_uint8_128_t __attribute__ ((vector_size(0x10),  aligned(1)));

typedef eth_uint_128_t          eth_u128_t;
typedef eth_uint64_128_t        eth_u64_128_t;
typedef eth_uint32_128_t        eth_u32_128_t;
typedef eth_uint16_128_t        eth_u16_128_t;
typedef eth_uint8_128_t         eth_u8_128_t;

typedef eth_u128_t              u128_t;
typedef eth_u64_128_t           u64_128_t;
typedef eth_u32_128_t           u32_128_t;
typedef eth_u16_128_t           u16_128_t;
typedef eth_u8_128_t            u8_128_t;

///////////////////////////////////////
//
//     256 BITS UNSIGNED
//
//////////////////////////////////////

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x20
typedef unsigned                eth_uint_256_t   __attribute__ ((vector_size(0x20), aligned(0x20)));
#elif defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x10
typedef unsigned                eth_uint128_256_t __attribute__ ((vector_size(0x20), aligned(0x10)));
#endif

typedef unsigned long           eth_uint64_256_t __attribute__ ((vector_size(32), aligned(8)));
typedef unsigned int            eth_uint32_256_t __attribute__ ((vector_size(32), aligned(4)));
typedef unsigned short          eth_uint16_256_t __attribute__ ((vector_size(32), aligned(2)));
typedef unsigned char           eth_uint8_256_t __attribute__ ((vector_size(32),  aligned(1)));

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x20
typedef eth_uint_256_t          eth_u256_t;
typedef eth_u256_t              u256_t;
#endif

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x10
typedef eth_uint128_256_t       eth_u128_256_t;
typedef eth_u128_256_t          u128_256_t;
#endif

typedef eth_uint64_256_t        eth_u64_256_t;
typedef eth_uint32_256_t        eth_u32_256_t;
typedef eth_uint16_256_t        eth_u16_256_t;
typedef eth_uint8_256_t         eth_u8_256_t;

typedef eth_u64_256_t           u64_256_t;
typedef eth_u32_256_t           u32_256_t;
typedef eth_u16_256_t           u16_256_t;
typedef eth_u8_256_t            u8_256_t;

///////////////////////////////////////
//
//     512 BITS UNSIGNED
//
//////////////////////////////////////

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ >= 0x40
typedef unsigned                eth_uint_512_t   __attribute__ ((vector_size(0x40), aligned(0x40)));
#elif defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ == 0x20
typedef unsigned                eth_uint_512_t   __attribute__ ((vector_size(0x40), aligned(0x20)));
#elif defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ == 0x10
typedef unsigned                eth_uint_512_t   __attribute__ ((vector_size(0x40), aligned(0x10)));
#else
typedef unsigned                eth_uint_512_t   __attribute__ ((vector_size(0x40), aligned(__BIGGEST_ALIGNMENT__)));
#endif

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ == 0x20
typedef unsigned                eth_uint256_512_t __attribute__ ((vector_size(0x40), aligned(0x20)));
typedef eth_uint256_512_t       eth_u256_512_t;
typedef eth_u256_512_t          u256_512_t;
#endif

#if defined (__BIGGEST_ALIGNMENT__) && __BIGGEST_ALIGNMENT__ == 0x10
typedef unsigned                eth_uint128_512_t __attribute__ ((vector_size(0x40), aligned(0x10)));
typedef eth_uint128_512_t       eth_u128_512_t;
typedef eth_u128_512_t          u128_512_t;
#endif

typedef unsigned long           eth_uint64_512_t __attribute__ ((vector_size(0x40), aligned(8)));
typedef unsigned int            eth_uint32_512_t __attribute__ ((vector_size(0x40), aligned(4)));
typedef unsigned short          eth_uint16_512_t __attribute__ ((vector_size(0x40), aligned(2)));
typedef unsigned char           eth_uint8_512_t  __attribute__ ((vector_size(0x40), aligned(1)));

typedef eth_uint_512_t          eth_u512_t;
typedef eth_uint64_512_t        eth_u64_512_t;
typedef eth_uint32_512_t        eth_u32_512_t;
typedef eth_uint16_512_t        eth_u16_512_t;
typedef eth_uint8_512_t         eth_u8_512_t;

typedef eth_u512_t              u512_t;
typedef eth_uint64_512_t        u64_512_t;
typedef eth_uint32_512_t        u32_512_t;
typedef eth_uint16_512_t        u16_512_t;
typedef eth_uint8_512_t         u8_512_t;

#elif defined(_WIN32) && defined(_MSC_VER)
#include <emmintrin.h>
#else
#warning "You don't support vector type"
#endif

#endif
