/* 
Faça um programa que calcule o valor do desconto sobre um valor
com base na escala: até 100 reais aplica 1%; até 500 reais aplica 5%
e acima de 500 reais aplica 10%
*/

#include <stdio.h>

int main (){
  float valor = 0.0f;
  
  printf("Insira o valor de seu produto:\n");
  int leu_certo = scanf("%f", &valor);

  
  if (leu_certo) {

    
    if (valor <= 100.0f) {
    float desconto = valor * 0.01; float valor_final = valor - desconto;
    printf("O valor de seu desconto é: %f\n", desconto);
    printf("O valor final de seu produto é: %f\n", valor_final);  
    }
    
    else if (valor > 100.0f && valor <= 500.0f) {
    float desconto = valor * 0.05; float valor_final = valor - desconto;
    printf("O valor de seu desconto é: %f\n", desconto);
    printf("O valor final de seu produto é: %f\n", valor_final);
    }
    
    else if (valor > 500.0f) {
    float desconto = valor * 0.10; float valor_final = valor - desconto;
    printf("O valor de seu desconto é: %f\n", desconto);
    printf("O valor final de seu produto é: %f\n", valor_final);
    }

    } 
    
    else {
      printf("Erro ao ler o valor. Tente novamente\n");
    }
  
  return 0;
}