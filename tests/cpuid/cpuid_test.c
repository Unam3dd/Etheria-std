#include <criterion/criterion.h>
#include "eth-cpuid.h"
#include "eth-types.h"

Test(test_etheria_cpuid_basic, cpuid_basic_test_sse)
{
    cr_expect(eth_cpu_support("sse") == (eth_bool_t)(__builtin_cpu_supports("sse") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_avx)
{
    cr_expect(eth_cpu_support("avx") == (eth_bool_t)(__builtin_cpu_supports("avx") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_sse2)
{
    cr_expect(eth_cpu_support("sse2") == (eth_bool_t)(__builtin_cpu_supports("sse2") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_sse41)
{
    cr_expect(eth_cpu_support("sse4.1") == (eth_bool_t)(__builtin_cpu_supports("sse4.1") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_sse42)
{
    cr_expect(eth_cpu_support("sse4.2") == (eth_bool_t)(__builtin_cpu_supports("sse4.2") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_aes)
{
    cr_expect(eth_cpu_support("aes") == (eth_bool_t)(__builtin_cpu_supports("aes") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_sse3)
{
    cr_expect(eth_cpu_support("sse3") == (eth_bool_t)(__builtin_cpu_supports("sse3") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_popcnt)
{
    cr_expect(eth_cpu_support("popcnt") == (eth_bool_t)(__builtin_cpu_supports("popcnt") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_ssse3)
{
    cr_expect(eth_cpu_support("ssse3") == (eth_bool_t)(__builtin_cpu_supports("ssse3") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_cmov)
{
    cr_expect(eth_cpu_support("cmov") == (eth_bool_t)(__builtin_cpu_supports("cmov") ? 1 : 0));
}

Test(test_etheria_cpuid_basic, cpuid_basic_test_null)
{
    char *str = "";

    cr_expect(eth_cpu_support(NULL) == 0);
    cr_expect(eth_cpu_support(str) == 0);
}

Test(test_etheria_cpuid_basic, cpuid_basic_bad_feat)
{
    cr_expect(eth_cpu_support("fejfizjefijzefiozejfiojzeifzeifjzeodjzefijzeofjzeuijzzeofjzeiodjeiodjz") == 0);
    cr_expect(eth_cpu_support("ssed") == 0);
    cr_expect(eth_cpu_support("fefefefef") == 0);
}
