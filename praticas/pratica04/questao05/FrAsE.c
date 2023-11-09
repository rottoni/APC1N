/*
Esse programa pega uma frase qualquer (string) e imprime:
Uma versão alterando a string para ter só letras maiúsculas.
E outra versão alterando para ter só letras minúsculas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){

  char string[51];
  
  printf("Insira sua string: ");
  int ok = scanf("%[^\n]s", string);

  char maiusculo[51];
  strcpy (maiusculo, string);
  for (int i=0; i<strlen(maiusculo); i++){
    maiusculo[i] = toupper(maiusculo[i]);
  }

  char minusculo[51];
  strcpy (minusculo, string);
  for (int i=0; i<strlen(minusculo); i++){
    minusculo[i] = tolower(minusculo[i]);
  }

  printf("A string informada: %s\n", string);
  printf("A string em maiusculo: %s\n", maiusculo);
  printf("A string em minusculo: %s\n", minusculo);
  
  return 0;
}