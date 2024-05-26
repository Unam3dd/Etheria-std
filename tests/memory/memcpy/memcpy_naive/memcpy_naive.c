#include <criterion/criterion.h>
#include <signal.h>
#include <string.h>

#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#include "eth-std.h"

Test(memcpy_naive_basic_tests, memcpy_naive_basic_integer_copy)
{
    int a = 0x41414141;
    int b = 0;

    cr_expect(_eth_memcpy_naive(&b, &a, sizeof(a)) == &b);
    cr_expect(a == b);
}

Test(memcpy_naive_basic_tests, memcpy_naive_basic_null_dst)
{
    char    buf[0x100];

    memcpy(buf, "hello", 0x5);

    cr_expect(_eth_memcpy_naive(NULL, buf, 0xa) == NULL);
}

Test(memcpy_naive_basic_tests, memcpy_naive_basic_null)
{
    cr_expect(_eth_memcpy_naive(NULL, NULL, 0) == NULL);
}

Test(memcpy_naive_basic_tests, memcpy_naive_basic_null_src)
{
    char    buf[0x100];
    char    cmp[0x100];

    memset(buf, 0, sizeof(buf));
    memset(cmp, 0, sizeof(cmp));

    cr_expect(_eth_memcpy_naive(buf, NULL, sizeof(buf)) == buf);
    cr_expect(!memcmp(buf, cmp, sizeof(buf)));
}

Test(memcpy_naive_basic_tests, memcpy_naive_basic_zero_size)
{
    char    buf[0x100];
    char    src[0x100];

    memset(buf, 0, sizeof(buf));
    memset(src, 'a', sizeof(src));

    cr_expect(_eth_memcpy_naive(buf, src, 0) == buf);
    cr_expect(memcmp(buf, src, sizeof(src)));
}

Test(memcpy_naive_basic_tests, memcpy_naive_basic_string)
{
    char    buf[0x100];
    char    *ptr = "hello world";

    memset(buf, 0, sizeof(buf));

    cr_expect(_eth_memcpy_naive(buf, ptr, strlen(ptr)) == buf);
    cr_expect(!memcmp(buf, ptr, strlen(ptr)));
}

Test(memcpy_naive_basic_tests, memcpy_naive_basic_dst_segfault, .signal = SIGSEGV)
{
    char    buf[0x100];
    char    *str = "This is a read only string in .rodata section";

    memset(buf, 'a', sizeof(buf));
    _eth_memcpy_naive(str, buf, strlen(str));
}

