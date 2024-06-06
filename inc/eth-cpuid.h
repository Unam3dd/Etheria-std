#ifndef ETH_CPUID_H
#define ETH_CPUID_H

#if !defined (__x86_64__)

#error "Error Etheria CPUID is only supported on x86 architecture"

#else

///////////////////////////////////////
//
//        ETHERIA TYPES
//
//////////////////////////////////////

#include "eth-types.h"

///////////////////////////////////////
//
//         CPUID FLAGS
//
//////////////////////////////////////

#include "eth-cpuid-flag.h"

///////////////////////////////////////
//
//          CPUID
//
//////////////////////////////////////

STATIC_INLINE eth_cpuid_reg_t *eth_cpuid(u32_t eax, u32_t ecx)
{
    static eth_cpuid_reg_t r;

    __asm__ volatile ("cpuid"
            : "=a" (r.eax), "=b" (r.ebx), "=c" (r.ecx), "=d" (r.edx)
            : "a" (eax), "c" (ecx)
            : "memory"
            );

    return (&r);
}

#include <string.h>

STATIC_INLINE eth_bool_t eth_cpu_supports(const char *name)
{
    size_t len = 0;
    const DEF_BASIC_FEAT(basic_feat_edx, EDX, &len);
    const DEF_BASIC_FEAT(basic_feat_ecx, ECX, NULL);

    if (!name) return (FALSE);

    return (TRUE);
}

#endif

#endif
