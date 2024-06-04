#include "inc/eth-cpuid-flag.h"
#include "inc/eth-cpuid.h"
#include <stdio.h>

int main(void)
{
    eth_cpuid_reg_t reg;

    reg.eax = 0x1;

    eth_cpuid(&reg);

    printf("%s: %x\n", GET_REG_STR(reg.eax), reg.eax);

    return (0);
}
