#include <criterion/criterion.h>
#include <string.h>

#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#include "eth-std.h"

Test(memcpy_naive_stack_unaligned_big_tests, memcpy_naive_stack_unaligned_big_one)
{
    char    *buf = NULL, *src = NULL;

    buf = (char *)malloc(sizeof(char) * 0x100346);

    cr_assert(buf != NULL);

    src = (char*)malloc(sizeof(char) * 0x100346);

    cr_assert(src != NULL);

    memset(src, 'a', 0x100346);

    cr_expect(_eth_memcpy_naive(buf, src, 0x100346) == buf, "the return of _eth_memcpy_naive is not the first parameter.");
    cr_expect(!memcmp(buf, src, 0x100346), "the result of memcmp is not zero");

    free(buf);
    free(src);

    buf = NULL, src = NULL;
}

Test(memcpy_naive_stack_unaligned_big_tests, memcpy_naive_stack_unaligned_big_two)
{
    char    *buf = NULL, *src = NULL;

    buf = (char *)malloc(sizeof(char) * 0x1002345);

    cr_assert(buf != NULL);

    src = (char*)malloc(sizeof(char) * 0x1002345);

    cr_assert(src != NULL);

    memset(src, 'a', 0x1002345);

    cr_expect(_eth_memcpy_naive(buf, src, 0x1002345) == buf, "the return of _eth_memcpy_naive is not the first parameter");
    cr_expect(!memcmp(buf, src, 0x1002345), "the return of memcmp is not zero.");

    free(buf);
    free(src);

    buf = NULL, src = NULL;
}

Test(memcpy_naive_stack_unaligned_big_tests, memcpy_naive_stack_unaligned_big_three)
{
    char    *buf = NULL, *src = NULL;

    buf = (char *)malloc(sizeof(char) * 0x10034521);

    cr_assert(buf != NULL);

    src = (char*)malloc(sizeof(char) * 0x10034521);

    cr_assert(src != NULL);

    memset(src, 'a', 0x10034521);

    cr_expect(_eth_memcpy_naive(buf, src, 0x10034521) == buf, "the return of _eth_memcpy_naive is not the first parameter");
    cr_expect(!memcmp(buf, src, 0x10034521), "the result of memcmp is no zero.");

    free(buf);
    free(src);

    buf = NULL, src = NULL;
}

