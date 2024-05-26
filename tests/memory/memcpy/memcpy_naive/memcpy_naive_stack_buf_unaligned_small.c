#include <criterion/criterion.h>
#include <string.h>

#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#include "eth-std.h"

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_one)
{
    char    buf[0x13];
    char    src[0x13];

    memset(src, 'a', sizeof(src));

    cr_expect(_eth_memcpy_naive(buf, src, sizeof(buf)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_two)
{
    char    buf[0x26];
    char    src[0x26];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_three)
{
    char    buf[0x35];
    char    src[0x35];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_four)
{
    char    buf[0x47];
    char    src[0x47];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_five)
{
    char    buf[0x51];
    char    src[0x51];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_six)
{
    char    buf[0x62];
    char    src[0x62];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_seven)
{
    char    buf[0x76];
    char    src[0x76];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_eight)
{
    char    buf[0x88];
    char    src[0x88];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_nine)
{
    char    buf[0x93];
    char    src[0x93];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

Test(memcpy_naive_stack_unaligned_small_tests, memcpy_naive_stack_unaligned_small_ten)
{
    char    buf[0x109];
    char    src[0x109];

    memset(src, 'a', sizeof(src));
    cr_expect(_eth_memcpy_naive(buf, src, sizeof(src)) == buf);
    cr_expect(!memcmp(buf, src, sizeof(buf)));
}

