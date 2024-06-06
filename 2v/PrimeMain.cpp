#include <cstdio>
#include <cstdlib>
#include "./Prime.h"

int main(int argc, char **argv) {

  if (argc != 2) {
	  printf("Usage: ./Prime <number>\n");
	  return 0;
  }
  
  int n = atoi(argv[1]);
  printf("argv[0] %s\n", argv[0]);
  printf("argv[1] %s\n", argv[1]);
  printf("argc %d\n", argc);

  if (checkIfPrime(n, true)) {
	  printf("%d is prime \n", n);
  } else {
	  printf("%d is NOT prime\n", n); 
  }
  printbullshit();
}
