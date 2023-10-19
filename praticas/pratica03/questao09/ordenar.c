//Código não funcionou

#include <stdio.h>

int main (){

  int numero = 0;

  printf("Esse programa organiza números em ordem crescente!\n");
  printf("Insira um número inteiro:\n");
  int l = scanf("%i", &numero);

  int maior = numero;
  int menor = numero;

  for(int i=0; i<9; i++){
  printf("Insira outro número inteiro:");
  int l = scanf("%i", &numero);

    if (numero > maior) 
    { maior = numero; }
    if (numero > menor) 
    { menor = numero; }

  printf("O maior dos números é %i e o menor é %i\n", maior, menor);
  }
}