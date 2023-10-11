#include <stdio.h>

int main() {

  char caracter; // ocupa 1 byte; guarda caracteres com valores de -128 até 127; ex: 'a', '1' ','
       unsigned char caracter_sem_sinal; //agora guarda caracteres com valores de 0 a 255
  
  int inteiro; // ocupa 4 bytes; guarda valores inteiros de -2.147.483.648 até 2.147.483.647; ex: '1', '2', '3'
      unsigned int inteiro_sem_sinal; //agora guarda inteiros com valores de 0 até 4.294.967.295
      long int inteiro_longo; //agora guarda inteiros com valores de 0 até a casa do sextilhão
      short int inteiro_curto; //agora guarda inteiros com valores de -32.768 até 32.767


  float ponto_flutuante; // ocupa 4 bytes; guarda valores fracionados de até 6 casas decimais; ex: 0.123456f

  double duplo; // ocupa 8 bytes; guarda valores fracionados de até 16 casas decimais; ex: 0.1234567890123456
      long double duplo_longo; //ocupa 16 bytes; guarda valores fracionados até 32 casas decimais

  void "nada"; // ocupa 1 byte; guarda nenhuma informação, mas deve ser informado



  int x = 0;
  int y = 10;
  int z = 15;
  int i, j;

  y = 50;
  y = -5;
  
  
  return 0;
}