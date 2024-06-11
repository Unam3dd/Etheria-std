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
                            _eth_LUT_EDX_##name[] = {                                                   \
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
                            _eth_LUT_ECX_##name[] = {                                                   \
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


#define DEF_CPUID_EXT_FEAT(name) static const eth_cpuid_feat_ext_t                                                         \
                        _eth_LUT_ext_EBX##name[] = {                                                                       \
                            { "fsgsbase", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_FSGSBASE, EBX },                       \
                            { "tsc-adj-msr", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_IA32_TSC_ADJUST_MSR, EBX }, \
                            { "sgx", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SGX, EBX },                                 \
                            { "bmi1", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_BMI1, EBX },                               \
                            { "hle", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_HLE, EBX },                                 \
                            { "avx2", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX2, EBX },                               \
                            { "fdp", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_FDP, EBX },                                 \
                            { "smep", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SMEP, EBX },                               \
                            { "bmi2", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_BMI2, EBX },                               \
                            { "erms", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_ERMS, EBX },                               \
                            { "invpcid", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_INVPCID, EBX },                         \
                            { "rtm", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_RTM, EBX },                                 \
                            { "rdt-m", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_RDTM_PQM, EBX },                          \
                            { "fpu", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_X87_FPU, EBX },                             \
                            { "mpx", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_MPX, EBX },                                 \
                            { "rdt-a", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_RDTA_PQE, EBX },                          \
                            { "avx512-f", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512F, EBX },                         \
                            { "avx512-dq", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512DQ, EBX },                       \
                            { "rdseed", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_RDSEED, EBX },                           \
                            { "adx", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_ADX, EBX },                                 \
                            { "smap", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SMAP, EBX },                               \
                            { "avx512-ifma", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_IFMA, EBX },                 \
                            { "pcommit", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_PCOMMIT, EBX },                         \
                            { "clflushopt", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_CLFLUSHOPT, EBX },                   \
                            { "clwb", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_CLWB, EBX },                               \
                            { "pt", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_PT, EBX },                                   \
                            { "avx512-pf", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_PF, EBX },                     \
                            { "avx512-er", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_ER, EBX },                     \
                            { "avx512-cd", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_CD, EBX },                     \
                            { "sha", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SHA, EBX },                                 \
                            { "avx512-bw", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_BW, EBX },                     \
                            { "avx512-vl", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_VL, EBX },                     \
                        };                                                                                                 \
                        static const eth_cpuid_feat_ext_t                                                                  \
                        _eth_LUT_ext_ECX##name[] = {                                                                       \
                            { "prefetchwt1", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_PREFETCHWT1, ECX },                 \
                            { "avx512-vbmi", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_VBMI, ECX },                 \
                            { "umip", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_UMIP, ECX },                               \
                            { "pku", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_PKU, ECX },                                 \
                            { "ospke", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_OSPKE, ECX },                             \
                            { "waitpkg", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_WAITPKG, ECX },                         \
                            { "avx512-vbmi2", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_VBMI2, ECX },               \
                            { "cet_ss", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_CET_SS, ECX },                           \
                            { "gfni", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_GFNI, ECX },                               \
                            { "vaes", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_VAES, ECX },                               \
                            { "vpclmulqdq", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_VPCLMULQDQ, ECX },                   \
                            { "avx512-vnni", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_VNNI, ECX },                 \
                            { "avx512-bitalg", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_BITALG, ECX },             \
                            { "tme-en", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_TME_EN, ECX },                           \
                            { "vpopcntdq", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_VPOPCNTDQ, ECX },       \
                            { "fzm", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_FZM, ECX },                                 \
                            { "la57", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_LA57, ECX },                               \
                            { "mawau", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_MAWAU, ECX },                             \
                            { NULL, 0, 0, 0, 0},                                                          \
                            { NULL, 0, 0, 0, 0},                                                          \
                            { NULL, 0, 0, 0, 0},                                                          \
                            { NULL, 0, 0, 0, 0},                                                          \
                            { "rdpid", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_RDPID, ECX },                             \
                            { "kl", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_KL, ECX },                                   \
                            { "bus-lock-detect", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_BUS_LOCK_DETECT, ECX },         \
                            { "cldemote", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_CLDEMOTE, ECX },                       \
                            { "mprr", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_MPRR, ECX },                               \
                            { "movdiri", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_MOVDIRI, ECX },                         \
                            { "movdir64b", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_MOVDIR64B, ECX },                     \
                            { "enqcmd", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_ENQCMD, ECX },                           \
                            { "sgx-lc", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SGX_LC, ECX },                           \
                            { "pks", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_PKS, ECX },                                 \
                        };                                                                                                 \
                        static const eth_cpuid_feat_ext_t                                                                  \
                        _eth_LUT_ext_EDX##name[] = {                                                                       \
                            { "sgx-term", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SGX_TERM, EDX },                       \
                            { "sgx-keys", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SGX_KEYS, EDX },                       \
                            { "avx512-4vnniw", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_4VNNIW, EDX },             \
                            { "avx512-4fmaps", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_4FMAPS, EDX },             \
                            { "fsrm", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_FSRM, EDX },                               \
                            { "uintr", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_UINTR, EDX },                             \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "vp2intersect", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_VP2INTERSECT, EDX }, \
                            { "srdbs-ctrl", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SRBDS_CTRL, EDX },                   \
                            { "md-clear", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_MD_CLEAR, EDX },                       \
                            { "rtm-always", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_RTM_ALWAYS_ABORT, EDX },       \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "rtm-force", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_RTM_FORCE_ABORT, EDX },         \
                            { "serialize", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SERIALIZE, EDX },                     \
                            { "hybrid", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_HYBRID, EDX },                           \
                            { "tsxldtrk", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_TSXLDTRK, EDX },                       \
                            { "pconfig", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_PCONFIG,  EDX },                        \
                            { "lbr", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_LBR, EDX },                                 \
                            { "cet-ibt", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_CET_IBT, EDX },                         \
                            { "amx-bf16", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AMX_BF16, EDX },                       \
                            { "avx512-fp16", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AVX512_FP16, EDX },                 \
                            { "amx-tile", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AMX_TILE, EDX },                       \
                            { "amx-int8", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_AMX_INT8, EDX },                       \
                            { "ibrs", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_IBRS, EDX },                               \
                            { "stibp", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_STIBP, EDX },                             \
                            { "l1d_flush", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_L1D_FLUSH, EDX },                     \
                            { "arch-cap-msr", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_IA32_ARCH_CAP_MSR, EDX },     \
                            { "core-cap-msr", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_IA32_CORE_CAP_MSR, EDX },     \
                            { "ssbd", ETH_CPUID_EXT_FEAT, 0, ETH_CPUID_EXT_FEAT_SSBD, EDX },                               \
                            { NULL, 0, 0, 0, 0 },                                                                          \
                            { NULL, 0, 0, 0, 0 },                                                                          \
                        };                                                                                                 \
                        static const eth_cpuid_feat_ext_t                                                                  \
                        _eth_LUT_ext_one_EAX##name[] = {                                                                   \
                            { "sha512", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, \
                                ETH_CPUID_EXT_FEAT_SHA512, EAX },                                                          \
                            { "sm3", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_SM3, EAX },\
                            { "sm4", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_SM4, EAX },\
                            { "rao-int", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_RAO_INT, EAX },\
                            { "avx-vnni", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_AVX_VNNI, EAX},\
                            { "avx512-bf16", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2,\
                                ETH_CPUID_EXT_FEAT_AVX512_BF16, EAX },\
                            { "lass", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_LASS, EAX },\
                            { "cmpccxadd", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_CMPCCXADD, EAX },\
                            { "archperfmonext", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, \
                                ETH_CPUID_EXT_FEAT_ARCHPERFMONEXT, EAX },\
                            { "dedup", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_DEDUP, EAX }, \
                            { "fzrm", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_FZRM, EAX },   \
                            { "fsrs", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_FSRS, EAX },   \
                            { "rsrcs", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_RSRCS, EAX }, \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "fred", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_FRED, EAX },   \
                            { "lkgs", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_LKGS, EAX },   \
                            { "wrmsrns", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_WRMSRNS, EAX }, \
                            { "nmi_src", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_NMI_SRC, EAX }, \
                            { "amx-fp16", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_AMX_FP16, EAX }, \
                            { "hreset", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_HRESET, EAX }, \
                            { "avx-ifma", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_AVX_IFMA, EAX }, \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "Lam", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_LAM, EAX },     \
                            { "msrlist", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_MSRLIST, EAX  }, \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "invd_pst_bios", \
                                ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, \
                                ETH_CPUID_EXT_FEAT_INVD_DISABLE_POST_BIOS_DONE, EAX },                                     \
                            { NULL, 0, 0, 0, 0 },                                                         \
                        };\
                        static const eth_cpuid_feat_ext_t \
                        _eth_LUT_ext_one_EBX##name[] = {  \
                            { "ia32-ppin-ctl", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_IA32_PPIN_CTL, EBX },\
                            { "pbndkb", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_PBNDKB, EBX }, \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                        };\
                        static const eth_cpuid_feat_ext_t\
                        _eth_LUT_ext_one_ECX##name[] = { \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "legacy-risa", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2,\
                                ETH_CPUID_EXT_FEAT_LEGACY_REDUCED_ISA, ECX },\
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "sipi64", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2,\
                                ETH_CPUID_EXT_FEAT_SIPI_64, ECX },                        \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                        };\
                        static const eth_cpuid_feat_ext_t   \
                        _eth_LUT_ext_one_EDX##name[] = {    \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "avx-vnni-int8", ETH_CPUID_EXT_FEAT, \
                                FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_AVX_VNNI_INT8, EDX },                    \
                            { "avx-ne-convert", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_AVX_NE_CONVERT, EDX },\
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { NULL, 0, 0, 0, 0 },                                                         \
                            { "amx-complex", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_AMX_COMPLEX, EDX},\
                            { NULL, 0, 0, 0, 0 },\
                            { "avx-vnni-int16", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2,\
                                ETH_CPUID_EXT_FEAT_AVX_VNNI_INT16, EDX}, \
                            { NULL, 0, 0, 0, 0 },\
                            { NULL, 0, 0, 0, 0 },\
                            { "utmr", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_UTMR, EDX }, \
                            { "prefetchi", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, \
                                ETH_CPUID_EXT_FEAT_PREFETCHI, EDX },\
                            { "user-msr", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_USER_MSR, EDX },\
                            { NULL, 0, 0, 0, 0 },\
                            { "uiret-rflags", ETH_CPUID_EXT_FEAT, \
                                FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_UIRET_UIF_FROM_RFLAGS, EDX },\
                            {"cet-sss", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_CET_SS, EDX },\
                            { "avx10", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_AVX10, EDX },\
                            { NULL, 0, 0, 0, 0 },\
                            { "apx-f", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_APX_F, EDX },\
                            { NULL, 0, 0, 0, 0 },\
                            { "mwait", ETH_CPUID_EXT_FEAT, FEAT_ECX_PAGE_2, ETH_CPUID_EXT_FEAT_MWAIT, EDX },\
                            { NULL, 0, 0, 0, 0 },\
                            { NULL, 0, 0, 0, 0 },\
                            { NULL, 0, 0, 0, 0 },\
                            { NULL, 0, 0, 0, 0 },\
                            { NULL, 0, 0, 0, 0 },\
                            { NULL, 0, 0, 0, 0 },\
                            { NULL, 0, 0, 0, 0 },\
                            { NULL, 0, 0, 0, 0 },\
                        };

#endif
