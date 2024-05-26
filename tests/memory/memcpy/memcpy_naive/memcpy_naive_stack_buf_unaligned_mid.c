#include <criterion/criterion.h>
#include <string.h>

#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#include "eth-std.h"

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_one)
{
    char    buf[0x204];
    char    src[0x204];

    memset(src, 'a', sizeof(src));

    cr_assert(_eth_memcpy_naive(buf, src, sizeof(buf)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_two)
{
    char    buf[0x416];
    char    src[0x416];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_three)
{
    char    buf[0x817];
    char    src[0x817];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_four)
{
    char    buf[0x1234];
    char    src[0x1234];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_five)
{
    char    buf[0x2089];
    char    src[0x2089];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_six)
{
    char    buf[0x4277];
    char    src[0x4277];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_seven)
{
    char    buf[0x6005];
    char    src[0x6005];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_eight)
{
    char    buf[0x8076];
    char    src[0x8076];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_nine)
{
    char    buf[0x10329];
    char    src[0x10329];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_mid_tests, memcpy_naive_stack_unaligned_mid_ten)
{
    char    buf[0x12045];
    char    src[0x12045];

    memset(src, 'a', sizeof(src));
    cr_assert(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_assert(!memcmp(buf, src, sizeof(buf)));
}


