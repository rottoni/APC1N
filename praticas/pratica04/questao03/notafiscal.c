/*
Faça um programa em C que leia a quantidade e o preço de 10 produtos
de um nota fiscal e imprima o valor total de cada produto e o valor total da nota.
*/

#include <stdio.h>

int main(){

  float produtos[10][2];
  float total = 0.0f;
  
  for (int i=0; i<10; i++){
    
    printf("Insira a preco do produto número %i: ", i+1);
    int cu = scanf("%f", &produtos[i][1]);
    printf("Insira o quantidade do produto número %i: ", i+1);
    cu = scanf("%f", &produtos[i][0]); 
    
    total = total + (produtos[i][0] * produtos[i][1]);
  }

  printf("O valor total de sua compra é R$ %5.2f\n", total);
  return 0;
}