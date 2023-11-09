/*
Esse programa organiza uma frase de sua escolha em uma matriz.
Então ele transpõe essa matriz e imprime os membros dessa nova matriz em uma linha.
*/

#include <stdio.h>
#include <string.h>

int main(){

  char frase[31];
  char matriz[6][5];


  
  printf("Insira sua frase (limite de 30 caracteres): ");
  int ok = scanf("%[^\n]s", frase);

  int k = 0;
  for (int i = 0; i < 6; i++){
    for (int j = 0; j < 5; j++) {
      matriz[i][j] = frase [k]; k++;
    }
  }
  
  printf("Sua frase reorganizada é: ");
  for (int j = 0; j < 5; j++){
    for (int i = 0; i < 6; i++) {
    printf("%c", matriz[i][j]);
    }
  }

  printf ("\n");
  
  return 0;
}