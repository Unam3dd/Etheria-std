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

#define DEF_CPUID_PROC_INFO(name) static const eth_cpuid_feat_ext_t                                     \
                            _eth_LUT_edx_##name[] = {                                                   \
                            {"fpu",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_FPU,   EDX },        \
                            {"vme",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_VME,   EDX },        \
                            {"de",     ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_DE,    EDX },        \
                            {"pse",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PSE,   EDX },        \
                            {"tsc",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_TSC,   EDX },        \
                            {"msr",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_MSR,   EDX },        \
                            {"pae",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PAE,   EDX },        \
                            {"mce",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_MCE,   EDX },        \
                            {"cx8",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_CX8,   EDX },        \
                            {"apic",   ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_APIC,  EDX },        \
                            {"sep",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SEP,   EDX },        \
                            {"mtrr",   ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_MTRR,  EDX },        \
                            {"pge",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PGE,   EDX },        \
                            {"mca",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_MCA,   EDX },        \
                            {"cmov",   ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_CMOV,  EDX },        \
                            {"pat",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PAT,   EDX },        \
                            {"pse-36", ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PSE36, EDX },        \
                            {"psn",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PSN,   EDX },        \
                            {"clfsh",  ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_CLFSH, EDX },        \
                            {"nx",     ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_NX,    EDX },        \
                            {"ds",     ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_DS,    EDX },        \
                            {"acpi",   ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_ACPI,  EDX },        \
                            {"mmx",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_MMX,   EDX },        \
                            {"fxsr",   ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_FXSR,  EDX },        \
                            {"sse",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SSE,   EDX },        \
                            {"sse2",   ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SSE2,  EDX },        \
                            {"ss",     ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SS,    EDX },        \
                            {"htt",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_HTT,   EDX },        \
                            {"tm",     ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_TM,    EDX },        \
                            {"ia64",   ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_IA64,  EDX },        \
                            {"pbe",    ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PBE,   EDX },        \
                        };                                                                              \
                        static const eth_cpuid_feat_ext_t                                               \
                            _eth_LUT_ecx_##name[] = {                                                   \
                            {"sse3",        ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SSE3,      ECX },\
                            {"pclmulqdq",   ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PCLMULQDQ, ECX },\
                            {"dtes64",      ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_DTES64,    ECX },\
                            {"monitor",     ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_MONITOR,   ECX },\
                            {"ds-cpl",      ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_DS_CPL,    ECX },\
                            {"vmx",         ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_VMX,       ECX },\
                            {"smx",         ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SMX,       ECX },\
                            {"est",         ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_EST,       ECX },\
                            {"tm2",         ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_TM2,       ECX },\
                            {"ssse3",       ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SSSE3,     ECX },\
                            {"cnxt-id",     ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_CNXT_ID,   ECX },\
                            {"sdbg",        ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SDBG,      ECX },\
                            {"fma",         ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_FMA,       ECX },\
                            {"cx16",        ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_CX16,      ECX },\
                            {"xtpr",        ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_XTPR,      ECX },\
                            {"pdcm",        ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PDCM,      ECX },\
                            {"pcid",        ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_PCID,      ECX },\
                            {"dca",         ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_DCA,       ECX },\
                            {"sse4.1",      ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SSE41,     ECX },\
                            {"sse4.2",      ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_SSE42,     ECX },\
                            {"x2apic",      ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_X2APIC,    ECX },\
                            {"movbe",       ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_MOVBE,     ECX },\
                            {"popcnt",      ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_POPCNT,    ECX },\
                            {"tsc-deadline",ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_TSC_DLINE, ECX },\
                            {"aes",         ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_AES_NI,    ECX },\
                            {"xsave",       ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_XSAVE,     ECX },\
                            {"osxsave",     ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_OSXSAVE,   ECX },\
                            {"avx",         ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_AVX,       ECX },\
                            {"f16c",        ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_F16C,      ECX },\
                            {"rdrnd",       ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_RDRND,     ECX },\
                            {"hypervisor",  ETH_CPUID_PROC_INFO_FEAT, 0, ETH_CPUID_FEAT_HYPERVISOR,ECX },\
                        };

#endif
