// Essa aula é sobre conversão entre variáveis

// A conversão de uma variável qualquer pra uma de maior memória (guarda mais bytes) é implícita
// Isso significa que a conversão será tranquila e nenhum dado será perdido
// A conversão de uma variável qualquer pra uma de menor memória (guarda menos bytes) é explícita
// Isso significa que a conversão terá problemas e haverá perda de dados


#include <stdio.h>

int main () {
  
char character = 127;
  
int inteiro = character; // conversão implícita
float flutuante = inteiro; // conversão implícita (com exceções em casas decimais)
double duplo = flutuante; // conversão implícita

printf("O caracter %d convertido em inteiro %d\n", character, inteiro);
printf("O inteiro %d convertido em flutuante %f\n", inteiro, flutuante);
printf("O flutuante %f convertido em duplo %f\n", flutuante, duplo);

duplo = 270.1234567890;
flutuante = (float)duplo; // conversão explícita
inteiro = (int)flutuante; // conversão explícita
character = (char)inteiro; // conversão explícita

printf("O duplo %f convertido em flutuante %f\n", duplo, flutuante);
printf("O flutuante %f convertido em inteiro %d\n", flutuante, inteiro);
printf("O inteiro %d convertido em character %d\n", inteiro, character);
  
  return 0;
}