#include <stdio.h>

// printf: comando que escreve no console
// scanf: comando que ler no console

int main(){
  
  char item1[61] = "";
  int quantidade1 = 0;
  float preco1 = 0.0f;

  char item2[61] = "";
  int quantidade2 = 0;
  float preco2 = 0.0f;

  char item3[61] = "";
  int quantidade3 = 0;
  float preco3 = 0.0f;
  
    printf("Escreva o nome de seu item 1: ");
    scanf("%s",item1);
    printf("Escreva a quantidade do item 1: ");
    scanf("%i", &quantidade1);
    printf("Escreva o preço de seu item 1: ");
    scanf("%f", &preco1);

    printf("Escreva o nome de seu item 2: ");
    scanf("%s",item2);
    printf("Escreva a quantidade do item 2: ");
     scanf("%i", &quantidade2);
    printf("Escreva o preço de seu item 2: ");
    scanf("%f", &preco2);

    printf("Escreva o nome de seu item 3: ");
    scanf("%s",item3);
    printf("Escreva a quantidade do item 3: ");
    scanf("%i", &quantidade3);
    printf("Escreva o preço de seu item 3: ");
    scanf("%f", &preco3);

  float total = quantidade1 * preco1;
  total = total + quantidade2 * preco2;
  total = total + quantidade3 * preco3;
  
    printf("----------------------------\n");
    printf("     N O T A  L E G A L     \n");
    printf("----------------------------\n\n");
    printf("Item         Qnt       Valor\n\n");
    printf("%-12.12s %03i  %10.2f\n", item1, quantidade1, preco1);
    printf("%-12.12s %03i  %10.2f\n", item2, quantidade2, preco2);
    printf("%-12.12s %03i  %10.2f\n\n", item3, quantidade3, preco3);
    printf("----------------------------\n");
    printf("Total        R$  %11.2f\n", total);
    printf("----------------------------\n");

    /*
     \n comando que quebra a sua linha no console
     %s substitui o texto com variavel char
     %i substitui o texto com variavel int
     %f substitui o texto com variavel float
     números após % definem a quantidade delimitada de characteres que cada texto (variável) pode ocupar
    */
  
  return 0;
}