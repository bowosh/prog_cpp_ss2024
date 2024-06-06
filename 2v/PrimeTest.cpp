#include <gtest/gtest.h>
#include "./Prime.h"

// compile g++ PrimeTest.cpp -lgtest

TEST(Prime, checkIfPrime) {
  ASSERT_EQ(checkIfPrime(42), false);
  ASSERT_EQ(checkIfPrime(43), true);
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
