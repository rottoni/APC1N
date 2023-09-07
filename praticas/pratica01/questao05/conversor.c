#include <stdio.h>

#define GIGA 1

int main () {
  int calculador = GIGA * (1024 * 1024 * 1024);

  printf("O seu número de gigabytes em bytes é: %i\n", calculador);

  return 0;
}