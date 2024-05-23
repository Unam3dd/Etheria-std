#include <criterion/criterion.h>
#include <string.h>

#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#include "eth-std.h"

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_one)
{
    char    buf[0x8];
    char    src[0x8];

    memset(src, 'a', sizeof(src));

    cr_assert(_eth_memcpy_naive(buf, src, sizeof(buf)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_two)
{
    char    buf[0x10];
    char    src[0x10];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_three)
{
    char    buf[0x20];
    char    src[0x20];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_four)
{
    char    buf[0x40];
    char    src[0x40];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_five)
{
    char    buf[0x50];
    char    src[0x50];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_six)
{
    char    buf[0x60];
    char    src[0x60];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_seven)
{
    char    buf[0x70];
    char    src[0x70];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_eight)
{
    char    buf[0x80];
    char    src[0x80];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_nine)
{
    char    buf[0x90];
    char    src[0x90];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_aligned_tests, memcpy_naive_stack_aligned_small_ten)
{
    char    buf[0x100];
    char    src[0x100];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

