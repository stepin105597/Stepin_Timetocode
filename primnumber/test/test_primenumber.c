#include "unity.h"
#include "PrimeNumber.h"
#include<stdbool.h>
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_Prime_Number(void)
{
  TEST_ASSERT_EQUAL(true, checkprime(5));
  TEST_ASSERT_EQUAL(false, checkprime(10));
  TEST_ASSERT_EQUAL(false, checkprime(15));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(false, checkprime(0));
  TEST_ASSERT_EQUAL(false, checkprime(-1));
}
void test_negative(void)
{
TEST_ASSERT_EQUAL(false, checkprime(-20));
TEST_ASSERT_EQUAL(false, checkprime(-30));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Prime_Number);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}