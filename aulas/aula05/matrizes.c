#include <stdio.h>

int main(){

  int numero[10];
  //Colchetes criam matrizes com 'n' membros
  //No caso acima, a matriz possui 10 membros
  //MATRIZ É O NOME EM PORTUGUÊS DE ARRAY

  numero[0]=10;
  numero[1]=15;
  numero[2]=7;
  numero[3]=1;
  numero[4]=3;
  numero[5]=22;
  numero[6]=38;
  numero[7]=4;
  numero[8]=56;
  numero[9]=6;

  //Acima, os membros da matriz 'numero' 
  //Possui 10 membros, contanto a partir do zero

  for(int i=0; i<10; i++) {
    printf("%i, ", numero[i]);
    }
    printf("\n");
  
  //Acima, comando para listar os membros da matriz de 0 até 9
  
  

  float notas [10][3];
  //Essa matriz possui duas dimensões
  //10 linhas e 3 colunas

  notas[0][0]= 6.0f ; notas [0][1]= 4.0f; notas [0][2]= 2.0f;
  notas[1][0]= 5.0f ; notas [1][1]= 0.0f; notas [1][2]= 3.0f;
  notas[2][0]= 5.0f ; notas [2][1]= 0.0f; notas [2][2]= 3.0f;
  notas[3][0]= 5.0f ; notas [3][1]= 0.0f; notas [3][2]= 3.0f;
  notas[4][0]= 5.0f ; notas [4][1]= 0.0f; notas [4][2]= 3.0f;
  notas[5][0]= 5.0f ; notas [5][1]= 0.0f; notas [5][2]= 3.0f;
  notas[6][0]= 5.0f ; notas [6][1]= 0.0f; notas [6][2]= 3.0f;
  notas[7][0]= 5.0f ; notas [7][1]= 0.0f; notas [7][2]= 3.0f;
  notas[8][0]= 5.0f ; notas [8][1]= 0.0f; notas [8][2]= 3.0f;
  notas[9][0]= 5.0f ; notas [9][1]= 0.0f; notas [9][2]= 3.0f;
  
  for(int i=0; i<10; i++) {
    for(int j=0; j<3; j++) {
    printf("%.1f, ", notas[i][j]);}
    printf("\n");
  }

  
  return 0;
}