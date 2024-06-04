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
//       ETHERIA CPUID FLAGS
//
//////////////////////////////////////

#include "eth-cpuid-flag.h"

///////////////////////////////////////
//
//          CPUID
//
//////////////////////////////////////

inline __attribute__((always_inline)) eth_cpuid_reg_t *eth_cpuid(u32_t eax, u32_t ecx)
{
    static eth_cpuid_reg_t r = {0, 0, 0, 0};

    ETH_ZERO(r.eax); ETH_ZERO(r.ebx);
    ETH_ZERO(r.ecx); ETH_ZERO(r.edx);

    __asm__ volatile ("cpuid"
            : "=a" (r.eax), "=b" (r.ebx), "=c" (r.ecx), "=d" (r.edx)
            : "a" (eax), "c" (ecx)
            : "memory"
            );

    return (&r);
}

///////////////////////////////////////
//
//         CPU SUPPORT
//
//////////////////////////////////////

inline eth_bool_t __attribute__((always_inline)) cpu_supports(const char *name)
{
    if (!name) return (FALSE);

    return (TRUE);
}

#endif

#endif
