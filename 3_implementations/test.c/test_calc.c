#include "unity.h"
#include "calc.h"
void setUp()
{
}
void tearDown()
{
}

void test_addition(void)
{
  TEST_ASSERT_EQUAL(5, compute("2+3"));
  TEST_ASSERT_EQUAL(18, compute("9+9"));
}
void test_subtraction(void)
{
  TEST_ASSERT_EQUAL(1, compute("3-2"));
  TEST_ASSERT_EQUAL(-1, compute("2-3"));
}
void test_multiply(void)
{
  TEST_ASSERT_EQUAL(10, compute("5*2"));
  TEST_ASSERT_EQUAL(81, compute("9*9"));
}
void test_division(void)
{
  TEST_ASSERT_EQUAL(0, compute("5/0")); // Return 0 if denominator is 0
  TEST_ASSERT_EQUAL(1, compute("9/9"));
  TEST_ASSERT_EQUAL(1, compute("1/2"));
  TEST_ASSERT_EQUAL(2, compute("3/2"));
} 
{  
void test_modulus(void) 
{ 
  TEST_ASSERT_EQUAL(8, compute("30/11")); 
  TEST_ASSERT_EQUAL(1, compute("9/4")); 
} 
void test_power(void) 
{ 
  TEST_ASSERT_EQUAL(81, compute("3^4"));
  TEST_ASSERT_EQUAL(32, compute("2^5")); 
}  
int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_multiply);
  RUN_TEST(test_division); 
  RUN_TEST(test_modulus); 
  RUN_TEST(test_power);
  return UNITY_END();
}