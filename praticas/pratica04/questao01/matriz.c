/* 
Faça um programa em C que preencha uma matriz com 10 números, 
depois leia um número e localize a posição dele na matriz. 
*/

#include <stdio.h>

int main (){

  int numero[10] = {12, 21, 73, 20, 17, 13, 0, 42, 1488, 2};

  int localiza = 0;
  printf("Insira um membro da matriz e o programa encontrará sua posição: \n");
  int cu = scanf("%i", &localiza);
  
  int posicao = -1;
  for(int i=0; i<10; i++) {
    if (localiza == numero[i]){
      posicao = i;
      break; 
    }
  }

  if (posicao < 0) {
    printf("Não foi encontrado %i na matriz\n", localiza);
  } else {
    printf("O membro da matriz %i está na posição %i\n", localiza, posicao);
  }

  return 0;
}