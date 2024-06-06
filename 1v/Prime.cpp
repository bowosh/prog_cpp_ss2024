//:!clang-format-14 -i Prime.cpp
//
#include <cstdio>

bool checkIfPrime(int n) {
  int i = 2;
  while (i * i <= n) {
    if (n % i == 0) {
      printf("Is not prime!");
      return false;
    }
    ++i;
  }
  return true;
}
