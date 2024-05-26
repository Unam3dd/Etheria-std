#include <criterion/criterion.h>

#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#include "eth-std.h"

Test(memcpy_naive_overlap_test, memcpy_naive_overlap_test)
{
    char a[] = "aabbccdd";

    cr_assert(_eth_memcpy_naive(a+2, a, 4) == a+2);

    cr_expect(!memcmp(a, "aaaaaadd", 0x8), "aabbccdd must be aaaaaadd.");
}
