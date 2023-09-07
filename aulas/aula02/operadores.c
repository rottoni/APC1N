#include <stdio.h>

int main (){

  //operador de atribuição
  int valor = 10;
  valor = 20;

  //operadores aritméticos
  int soma = 10 + 2;
  int subtracao = 10 - 2;
  int multiplicacao = 10 * 2;
  int divisao = 10 / 2;
  int resto = 10 % 2;

  //operadores incremento e decremento
  int pre_incremento = ++soma; // adiciona 1 mais 'int soma'
  int pre_decremento = --soma; // retira de 1 menos 'int soma'
  int pos_incremento = soma++; // adiciona 'int soma' mais 1
  int pos_decremento = soma--; // retira de 'int soma' menos 1

  //operadores relacionais
  int menor_que = 0 < 1;
  int menor_ou_igual = 0 <= 1; // a ordem certa é o igual aparecer depois de <
  int maior_que = 0 > 1;
  int maior_ou_igual = 0 >= 1;
  int igual = 0 == 1; // deve ter dois iguais para fazer a operação
  int diferente = 0 != 1;

  //operadores lógicos
  int e = 1 < 2 && 2 < 3; //representa o intervalo (1 < 2 < 3)
  int ou = 1 < 2 || 2 > 3; //representa os intervalos (1 < 2) ou (2 < 3)
  int nao = !1; //representa !1 = 2, !2 = 3 

  //bosta
  
  return 0;
}