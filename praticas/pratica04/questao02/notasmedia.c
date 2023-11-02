/*
Faça um programa em C que leia as notas de 10 alunos, 
calcule a média da turma e contabilize quantos alunos estão com a nota acima da média.
*/

#include <stdio.h>

int main (){

  float notas[10];
  float soma = 0.0f;
  float media =0.0f;
  int acima_media = 0;

  for (int i=0; i<10; i++){
    printf("Insira a notas do seu aluno %i: ", i+1);
    int cu = scanf("%f", &notas[i]);
    soma = soma + notas[i];
  }

  media = soma / 10;
   printf("Juntando as notas...\n");
  
  for(int i=0; i<10; i++){
    printf("%.1f, ", notas[i]);
    if (notas[i] > media) {
      acima_media++;
    }
  }

  printf("\nA média da turma foi: %.1f \n", media);
  printf("%i alunos ficaram acima dela \n", acima_media);
 
  return 0;
}