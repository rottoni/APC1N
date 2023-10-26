#include <stdio.h>

int main (){
  int numero = 0;

  printf("Esse programa sabe se seu número é primo!\n");
  printf("Insira seu número inteiro: ");
  int cu = scanf("%i", &numero);

  int divisores = 0;

  for (int i=0; i<numero; i++) {
    if (numero % (i+1) == 0)
    {divisores++;}
  }

  if (divisores > 2) {
    printf("Seu número %i não é primo!\n", numero);
  } else {
    printf("Seu número %i é primo!\n", numero);
  }

  return 0;
}