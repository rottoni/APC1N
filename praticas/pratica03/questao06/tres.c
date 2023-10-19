#include <stdio.h>

int main() {
  int numero = 0;

  printf("Este programa lista todos os múltiplos de um número natural positivo até 100!\n");
  printf("Insira seu número a multiplicar:\n");
  int l = scanf("%i", &numero);
  printf("Seus múltiplos são:\n");

  for (int i = 1; i <= 100; i++) {
    if (numero * i <= 100) {
      printf("%i x %i = %i\n", numero, i, numero * i);
    
  }
  }
  return 0;
}