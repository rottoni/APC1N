#include <stdio.h>

int main (){

  int numero = 0;
  
  printf("Insira um numero inteiro (até 10) e veja a sua tabuada:");
  int lc = scanf("%i", &numero);
    
  while (numero <1 || numero >10) { 
    printf("Seu número é inválido.");
    lc = scanf("%i", &numero);
  }

  
  
  printf("A tabuada de %i é: \n", numero);
  
  int i = 0;
  while (i<10) {
  printf("%i * %i = %i\n", numero, i+1, numero * (i+1)); 
  i++;
  }

  
  
  return 0;
}