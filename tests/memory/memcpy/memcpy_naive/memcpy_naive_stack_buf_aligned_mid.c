#include <criterion/criterion.h>
#include <string.h>

#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#include "eth-std.h"

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_one)
{
    char    buf[0x200];
    char    src[0x200];

    memset(src, 'a', sizeof(src));

    cr_assert(_eth_memcpy_naive(buf, src, sizeof(buf)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_two)
{
    char    buf[0x400];
    char    src[0x400];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_three)
{
    char    buf[0x800];
    char    src[0x800];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_four)
{
    char    buf[0x1000];
    char    src[0x1000];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_five)
{
    char    buf[0x2000];
    char    src[0x2000];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_six)
{
    char    buf[0x4000];
    char    src[0x4000];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_seven)
{
    char    buf[0x6000];
    char    src[0x6000];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_eight)
{
    char    buf[0x8000];
    char    src[0x8000];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_nine)
{
    char    buf[0x10000];
    char    src[0x10000];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_mid_tests, memcpy_naive_stack_aligned_mid_ten)
{
    char    buf[0x12000];
    char    src[0x12000];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}


