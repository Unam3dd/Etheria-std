#include <criterion/criterion.h>
#include <string.h>

#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#include "eth-std.h"

Test(memcpy_naive_stack_aligned_big_tests, memcpy_naive_stack_aligned_big_one)
{
    char    *buf = NULL, *src = NULL;

    buf = (char *)malloc(sizeof(char) * 0x100000);

    cr_assert(buf != NULL);

    src = (char*)malloc(sizeof(char) * 0x100000);

    cr_assert(src != NULL);

    memset(src, 'a', 0x100000);

    cr_assert(_eth_memcpy_naive(buf, src, 0x100000) == buf);
    cr_assert(!memcmp(buf, src, 0x100000));

    free(buf);
    free(src);

    buf = NULL, src = NULL;
}

Test(memcpy_naive_stack_aligned_big_tests, memcpy_naive_stack_aligned_big_two)
{
    char    *buf = NULL, *src = NULL;

    buf = (char *)malloc(sizeof(char) * 0x1000000);

    cr_assert(buf != NULL);

    src = (char*)malloc(sizeof(char) * 0x1000000);

    cr_assert(src != NULL);

    memset(src, 'a', 0x1000000);

    cr_assert(_eth_memcpy_naive(buf, src, 0x1000000) == buf);
    cr_assert(!memcmp(buf, src, 0x1000000));

    free(buf);
    free(src);

    buf = NULL, src = NULL;
}

Test(memcpy_naive_stack_aligned_big_tests, memcpy_naive_stack_aligned_big_three)
{
    char    *buf = NULL, *src = NULL;

    buf = (char *)malloc(sizeof(char) * 0x10000000);

    cr_assert(buf != NULL);

    src = (char*)malloc(sizeof(char) * 0x10000000);

    cr_assert(src != NULL);

    memset(src, 'a', 0x10000000);

    cr_assert(_eth_memcpy_naive(buf, src, 0x10000000) == buf);
    cr_assert(!memcmp(buf, src, 0x10000000));

    free(buf);
    free(src);

    buf = NULL, src = NULL;
}

