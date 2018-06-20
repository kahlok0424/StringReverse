#include "unity.h"
#include "ReverseString.h"

void setUp(void)
{
}

void tearDown(void)
{
}

/*void test_ReverseString_given_null_expect_0(void)
{
  TEST_ASSERT_EQUAL(0, getStringLength("NULL"));
}*/

void test_ReverseString_given_empty_expect_0(void)
{
  TEST_ASSERT_EQUAL(0,getStringLength(""));
}

void test_ReverseString_given_f_expect_1(void)
{
  TEST_ASSERT_EQUAL(1,getStringLength("F"));
}

void test_ReverseString_framework_expect_krowemarf(void)
{
  //char *str = ReverseString("framework");
  TEST_ASSERT_EQUAL_STRING("krowemarf",ReverseString("framework"));
}

void test_ReverseString_I_WANT_TO_EAT_expect_TAETOTNAWI(void)
{
  //char *str = ReverseString("framework");
  TEST_ASSERT_EQUAL_STRING("TAE OT TNAW I",ReverseString("I WANT TO EAT"));
}
