/* 
Faça um programa que calcule o valor do desconto sobre um valor
com base na escala: até 100 reias aplica 1%; até 500 reais aplica 5%
e acima de 500 reais aplica 10%
*/

#include <stdio.h>

int main (){

  float valor = 0;
  
  printf("Insira o valor de seu produto:\n");
  scanf("%f", &valor);

  if (valor <=100) {
  float desconto = valor * 0.01;
  float valor_final = valor - desconto;
  printf("O valor do produto com desconto é: %f\n", valor_final);
  }

  /* Esse intrevalo não está funcionando
  if (valor == 100 <= 500) {
  float desconto = valor * 0.05;
  float valor_final = valor - desconto;
  printf("O valor do produto com desconto é: %f\n", valor_final);
  }
  */

  if (valor > 500) {
  float desconto = valor * 0.10;
  float valor_final = valor - desconto;
  printf("O valor do produto com desconto é: %f\n", valor_final);
  }


  return 0;
}