/*
Faça um programa em C que leia a quantidade e o preço de 10 produtos
de um nota fiscal e imprima o valor total de cada produto e o valor total da nota.
*/

#include <stdio.h>

int main(){

  float produtos[10][3];
  float total = 0.0f;
  
  for (int i=0; i<10; i++){
    
    printf("Insira a preco do produto número %i: ", i+1);
    int cu = scanf("%f", &produtos[i][1]);
    printf("Insira o quantidade do produto número %i: ", i+1);
    cu = scanf("%f", &produtos[i][0]);
    produtos[i][2]= produtos[i][0] * produtos[i][1];
    
    total = total + produtos[i][2];
  }
  printf("------------------------------\n");
  printf("Qtde      Preço  Subtotal_Item\n");
  printf("------------------------------\n");
  for (int i=0; i <10; i++) {
    for (int j=0; j < 3; j++){
      printf("%8.2f", produtos[i][j]);
    }
    printf("\n");
  }
  printf("------------------------------\n");
  printf("O valor total de sua compra é:\n");
  printf("R$ %27.2f\n", total);
  printf("------------------------------\n");
  return 0;
}