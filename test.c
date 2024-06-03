#include <stdio.h>
#include <string.h>

#ifndef NO_STATIC
#define NO_STATIC
#endif

#include "inc/eth-std.h"

int main(void)
{
    char buf[0x100];

    memset(buf, 0, sizeof(buf));

    _eth_memcpy_naive(buf, "aabbccdd", 8);

    _eth_memcpy_naive(buf+2, buf, 4);

    printf("%s\n", buf);

    return (0);
}
