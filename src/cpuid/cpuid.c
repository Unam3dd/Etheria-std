#include "eth-cpuid-flag.h"
#include "eth-cpuid-lut.h"

const eth_cpuid_feat_ext_t *e_cpuid_basic_feat(eth_cpuid_ri_t idx, size_t *sz)
{
    DEF_CPUID_PROC_INFO(support);

    if (idx == EDX && sz)
        *sz = GET_SIZE(_eth_LUT_edx_support, eth_cpuid_feat_ext_t);

    if (idx == ECX && sz)
        *sz = GET_SIZE(_eth_LUT_ecx_support, eth_cpuid_feat_ext_t);

    return (idx == EDX
            ? _eth_LUT_edx_support
            : idx == ECX 
            ? _eth_LUT_ecx_support 
            : NULL);
}
