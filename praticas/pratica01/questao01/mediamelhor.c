#include <stdio.h>

int main() {
float nota_a1 = 0.0f;
float nota_a2 = 0.0f;

  printf("Insira a nota da sua primeira avaliação:\n");
  scanf("%f", &nota_a1);

  printf("Insira a nota da sua segunda avaliação:\n");
  scanf("%f", &nota_a2);

float media = 0.4 * nota_a1 + 0.6 * nota_a2;

  printf ("A sua média final é %.1f\n", media);
  if(media >= 5.0) {
   printf ("Você passou de semestre!\n");  
  } else{
   printf ("Você está de recuperação...\n");
  }
  
  return 0;
}