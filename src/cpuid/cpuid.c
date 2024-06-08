#include "eth-cpuid-flag.h"
#include "eth-cpuid-lut.h"
#include "eth-cpuid.h"
#include "eth-types.h"
#include "eth-types.h"

static const eth_cpuid_feat_ext_t *e_cpuid_basic_feat(eth_cpuid_ri_t idx, size_t *sz)
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

///////////////////////////////////////
//
//        COMPARE STRING
//
//////////////////////////////////////

STATIC_INLINE eth_uint32_t fast_cmp_str(const char *s1, const char *s2)
{
    int r = 0;

    __asm__ volatile (
            "movdqu xmm0, xmmword ptr [rdi]\n\t"
            "movdqu xmm1, xmmword ptr [rsi]\n\t"
            "pcmpistrm xmm0, xmm1, 0x18\n\t"
            "movq rax, xmm0\n\t"
            : "=a" (r)
            : "D" (s1), "S" (s2)
            : "memory"
            );

    return (r);
}

///////////////////////////////////////
//
//         CPU SUPPORTS
//
//////////////////////////////////////

eth_bool_t eth_cpu_support(const char *name)
{
    size_t i = 0, sz = 0;
    eth_cpuid_reg_t *reg = NULL;
    eth_cpuid_feat_ext_t *ptr = NULL;
    u32_t *ptr_reg = NULL;

    const DEF_BASIC_FEAT(basic_feat_edx, EDX, &sz);
    const DEF_BASIC_FEAT(basic_feat_ecx, ECX, NULL);

    if (!name) return (FALSE);

    for (i = 0; i < sz; i++) {
        if (!fast_cmp_str(basic_feat_edx[i].str, name)) {
            ptr = (eth_cpuid_feat_ext_t*)&basic_feat_edx[i];
            break ;
        }

        if (!fast_cmp_str(basic_feat_ecx[i].str, name)) {
            ptr = (eth_cpuid_feat_ext_t*)&basic_feat_ecx[i];
            break ;
        }
    }

    if (!ptr) return (FALSE);

    reg = eth_cpuid(ptr->eax_flg, ptr->ecx_flg);

    if (!reg) return (FALSE);

    ptr_reg = (u32_t*)(((u64_t)reg) + (sizeof(u32_t)*ptr->reg));

    return (ptr_reg && (ETH_AND(*ptr_reg, ptr->flg)) == (u32_t)ptr->flg);
}
