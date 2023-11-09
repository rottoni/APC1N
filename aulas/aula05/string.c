/*
STRING é uma sequência qualquer de caracteres (uma frase)

COMANDOS COM STRINGS:
memset: preenche uma string de 'N' caracteres com um só caractere
strcpy: muda o valor de um CHAR por uma string (frase)
strcat: após mudar o valor do CHAR por uma string, é adicionado uma texto após o CHAR
strlen: conta a quantidade de caracteres em uma string
strcmp: compara a quantidade de caracteres em duas string, ou uma string e um texto

*/


#include <stdio.h>
#include <string.h> // incluir essa biblioteca

int main (){

  char frase[31];
  //SEMPRE some mais 1 ao seu número desejado!!!
  //Pois em string há sempre no último char "/o"
  //Serve para indicar o final da sua string

  memset(frase, 'a', sizeof(frase));
  printf("%s\n", frase);
  // (frase) = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
  
  strcpy(frase, "uma frase qualquer"); 
  printf("%s\n", frase);
  // (frase) = "uma frase qualquer"
  
  strcat(frase, "com ponto final");    
  printf("%s\n", frase); 
  // (frase) = (frase) + "com ponto final" =
  // "uma frase qualquer com ponto final"

  printf ("%li\n", strlen(frase));
  // (frase) = 19

  printf("São iguais? %d\n", strcmp(frase, "sapo lento"));
  // (frase) é maior que "sapo lento"
  // são iguais se o retorno do comando for '0', qualquer outro número é diferente
  

  
  return 0;
}