#include <stdio.h>
#include "eth-cpuid.h"

int main(void)
{
    printf("%d\n", eth_cpu_supports("test"));
    return (0);
}
