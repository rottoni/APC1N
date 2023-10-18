#include <stdio.h>

int main (){
  int numero = 0;
  long int fatorial = 1;
  
  printf("Insira um número positivo e será calculado seu fatorial!\n");
  int cu = scanf("%i", &numero);
  
  for (int i = 0; i<numero; i++) 
  {fatorial = fatorial * (numero - i);}

  printf("Fatorial de %i é: \n", numero);
  printf ("%li\n", fatorial);

  // o limite do FOR é o próprio número
  // O número deve ser multiplicado por números inteiros menores até atingir zero.
  
  return 0;
}