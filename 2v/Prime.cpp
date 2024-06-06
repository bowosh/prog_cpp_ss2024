// :!clang-format-14 -i Prime.cpp
//
#include <cstdio>
//#include "./Prime.h"

bool checkIfPrime(int n, bool verbose) {
	if (n == 1){
		return false;
	}
  int i = 2;
  while (i * i <= n) {
    if (n % i == 0) {
	    if (verbose) {
		    printf("Found divisor %d of %d\n", i, n);
	    }
      return false;
    }
    ++i;
  }
  return true;
}


void printbullshit(){
	printf("bullshit");
}



