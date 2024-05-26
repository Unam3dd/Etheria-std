#include "eth-types.h"
#include <criterion/criterion.h>

Test(types_basic_tests, type_test_legacy_signed_integer)
{
    eth_int64_t i64 = 0x7FFFFFFFFFFFFFFF;
    eth_int32_t i32 = 0x7FFFFFFF;
    eth_int16_t i16 = 0x7FFF;
    eth_int8_t  i8 = 0x7F;

    cr_expect(sizeof(i64) == 0x8, "the size in bytes of eth_int64_t is %#zx. expected %#x\n", sizeof(i64), 8);
    cr_expect(sizeof(i32) == 0x4, "the size in bytes of eth_int32_t is %#zx. expected %#x\n", sizeof(i32), 4);
    cr_expect(sizeof(i16) == 0x2, "the size in bytes of eth_int16_t is %#zx. expected %#x\n", sizeof(i16), 2);
    cr_expect(sizeof(i8) == 0x1, "the size in bytes of eth_int8_t is %#zx. expected %#x\n", sizeof(i8), 1);

    cr_expect(i64 == 0x7FFFFFFFFFFFFFFF, "the value of i64 is %#lx. expected %#lx", i64, 0x7FFFFFFFFFFFFFFF);
    cr_expect(i32 == 0x7FFFFFFF, "the value of i32 is %#x. expected %#x", i32, 0x7FFFFFFF);
    cr_expect(i16 == 0x7FFF, "the value of i16 is %#x. expected %#x", i16, 0x7FFF);
    cr_expect(i8 == 0x7F, "the value of i8 is %#x. expected %#x", i8, 0x7F);
}
