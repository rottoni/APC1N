// Faça programa que determine se um número lido é par ou ímpar

#include <stdio.h>
#include <math.h>

int main (){

  int numero = 0;
  printf("Insira seu número inteiro:\n");
  scanf("%i", &numero);

  int resto = numero % 2;

  if (resto == 0) {
    printf("Seu número (%i) é par\n", numero);
  }
  else {
    printf("Seu número (%i) é ímpar\n", numero);
  }

  return 0;
}