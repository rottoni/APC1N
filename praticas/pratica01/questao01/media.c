/*
Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2).
Considere A1 e A2 números reais entre 0 a 10.
*/

#include <stdio.h>

int main() {
float nota_a1 = 5.5f;
float nota_a2 = 4.0f;

float media = 0.4 * nota_a1 + 0.6 * nota_a2;

printf ("A média final é %f\n", media);

  if(media >= 5.0) {
   printf ("Você passou de semestre!\n");
    
  } else{
   printf ("Você está de recuperação...");
  }
  
  return 0;
}