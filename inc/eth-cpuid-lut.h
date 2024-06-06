#ifndef ETH_CPUID_LUT_H
#define ETH_CPUID_LUT_H

///////////////////////////////////////
//
//          INCLUDES
//
//////////////////////////////////////

#include "eth-cpuid-flag.h"

///////////////////////////////////////
//
//       CPUID FEAT LOOK UP TABLE
//
//////////////////////////////////////

#define DEF_CPUID_PROC_INFO(name) const static eth_cpuid_feat_ext_t                                  \
                            _eth_LUT_edx_##name[] = {                                                \
                            {"fpu",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"vme",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"de",     ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"pse",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"tsc",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"msr",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"pae",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"mce",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"cx8",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"apic",   ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"sep",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"mtrr",   ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"pge",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"mca",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"cmov",   ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"pat",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"pse-36", ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"psn",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"clfsh",  ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"nx",     ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"ds",     ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"acpi",   ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"mmx",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"fxsr",   ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"sse",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"sse2",   ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"ss",     ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"htt",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"tm",     ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"ia64",   ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                            {"pbe",    ETH_CPUID_PROC_INFO_FEAT, EDX },                              \
                        };                                                                           \
                        const static eth_cpuid_feat_ext_t                                            \
                            _eth_LUT_ecx_##name[] = {                                                \
                            {"sse3",        ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"pclmulqdq",   ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"dtes64",      ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"monitor",     ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"ds-cpl",      ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"vmx",         ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"smx",         ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"est",         ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"tm2",         ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"ssse3",       ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"cnxt-id",     ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"sdbg",        ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"fma",         ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"cx16",        ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"xtpr",        ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"pdcm",        ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"pcid",        ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"dca",         ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"sse41",       ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"sse42",       ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"x2apic",      ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"movbe",       ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"popcnt",      ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"tsc-deadline",ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"aes-ni",      ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"xsave",       ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"osxsave",     ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"avx",         ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"f16c",        ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"rdrnd",       ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                            {"hypervisor",  ETH_CPUID_PROC_INFO_FEAT, ECX },                         \
                        };

#endif
