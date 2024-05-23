#ifndef ETHERIA_TEST_UTILS_H
#define ETHERIA_TEST_UTILS_H

///////////////////////////////////////
//
//         HEADER
//
//////////////////////////////////////

#include "eth-std.h"

#if defined(__linux__) && defined(__GNUC__)

#include <immintrin.h>

byte_t  *random_buffer(byte_t *buf, size_t size);

#endif

#endif
