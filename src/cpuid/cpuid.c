#include "eth-cpuid-flag.h"
#include "eth-cpuid-lut.h"
#include "eth-cpuid.h"
#include "eth-types.h"
#include "eth-types.h"
#include <stdio.h>

static const eth_cpuid_feat_ext_t *
e_cpuid_feat(eth_cpuid_ri_t idx, eth_bool_t ext, u32_t x_page)
{
    DEF_CPUID_PROC_INFO(info);
    DEF_CPUID_EXT_FEAT(_sup);

    if (ext) {
        if (!x_page && idx == EBX)
            return (_eth_LUT_ext_EBX_sup);
        if (!x_page && idx == ECX)
            return (_eth_LUT_ext_ECX_sup);
        if (!x_page && idx == EDX)
            return (_eth_LUT_ext_EDX_sup);
        if (x_page == FEAT_ECX_PAGE_1 && idx == EAX)
            return (_eth_LUT_ext_one_EAX_sup);
        if (x_page == FEAT_ECX_PAGE_1 && idx == EBX)
            return (_eth_LUT_ext_one_EBX_sup);
        if (x_page == FEAT_ECX_PAGE_1 && idx == ECX)
            return (_eth_LUT_ext_one_ECX_sup);
        if (x_page == FEAT_ECX_PAGE_1 && idx == EDX)
            return (_eth_LUT_ext_one_EDX_sup);
        return (NULL);
    }

    return (idx == EDX
            ? _eth_LUT_EDX_info
            : idx == ECX 
            ? _eth_LUT_ECX_info 
            : NULL);
}

///////////////////////////////////////
//
//        COMPARE STRING
//
//////////////////////////////////////

static __attribute__((noinline)) i32_t fast_cmp_str(const char *s1, const char *s2)
{
    i32_t r = 0;

    if (!s1 || !s2) return (-1);

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
    eth_cpuid_reg_t *reg = NULL;
    eth_cpuid_feat_ext_t *ptr = NULL;
    u32_t *offset = NULL;
    size_t i = 0;

    DEF_BASIC_FEAT(basic_feat_edx, EDX);
    DEF_BASIC_FEAT(basic_feat_ecx, ECX);
    
    DEF_EXT_FEAT(ext_feat_ebx, EBX, 0);
    DEF_EXT_FEAT(ext_feat_ecx, ECX, 0);
    DEF_EXT_FEAT(ext_feat_edx, EDX, 0);
    DEF_EXT_FEAT(ext_feat_one_eax, EAX, 1);
    DEF_EXT_FEAT(ext_feat_one_ebx, EBX, 1);
    DEF_EXT_FEAT(ext_feat_one_ecx, ECX, 1);
    DEF_EXT_FEAT(ext_feat_one_edx, EDX, 1);

    if (!name || *name == 0) return (FALSE);

    for (i = 0; i < 32; i++) {

        if (!ptr && !fast_cmp_str(basic_feat_edx[i].str, name))
            ptr = (eth_cpuid_feat_ext_t*)&basic_feat_edx[i];
        if (!ptr && !fast_cmp_str(basic_feat_ecx[i].str, name))
            ptr = (eth_cpuid_feat_ext_t*)&basic_feat_ecx[i];
        if (!ptr && !fast_cmp_str(ext_feat_ebx[i].str, name))
            ptr = (eth_cpuid_feat_ext_t*)&ext_feat_ebx[i];
        if (!ptr && !fast_cmp_str(ext_feat_ecx[i].str, name))
            ptr = (eth_cpuid_feat_ext_t*)&ext_feat_ecx[i];
        if (!ptr && !fast_cmp_str(ext_feat_edx[i].str, name))
            ptr = (eth_cpuid_feat_ext_t*)&ext_feat_edx[i];
        if (!ptr && !fast_cmp_str(ext_feat_one_eax[i].str, name))
            ptr = (eth_cpuid_feat_ext_t*)&ext_feat_one_eax[i];
        if (!ptr && !fast_cmp_str(ext_feat_one_ebx[i].str, name))
            ptr = (eth_cpuid_feat_ext_t *)&ext_feat_one_ebx[i];
        if (!ptr && !fast_cmp_str(ext_feat_one_ecx[i].str, name))
            ptr = (eth_cpuid_feat_ext_t *)&ext_feat_one_ecx[i];
        if (!ptr && !fast_cmp_str(ext_feat_one_edx[i].str, name))
            ptr = (eth_cpuid_feat_ext_t *)&ext_feat_one_edx[i];
        if (ptr) break ;
    }

    if (!ptr) return (FALSE);

    reg = eth_cpuid(ptr->eax_flg, ptr->ecx_flg);

    if (!reg) return (FALSE);

    offset = (u32_t*)(((u64_t)reg) + (sizeof(u32_t)*ptr->reg));

    return (offset && (ETH_AND(*offset, ptr->flg)) == (u32_t)ptr->flg);
}
