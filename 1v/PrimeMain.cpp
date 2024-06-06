#include "./Prime.cpp"
#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv) {
  if (argc != 2)
    printf("Usage: ./Prime <number>\n");
  int n = atoi(argv[1]);

  bool isP = checkIfPrime(n);
  printf("%b\n", isP);
}
