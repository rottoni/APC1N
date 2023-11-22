/*
Faça um programa em C que leia o número de mês, 
valide o número com os meses definidos por uma enumeração e imprima o nome do mês
*/

//Esse programa ensina sobre ENUMERAÇÃO
//Isso é, um conjunto de constantes.

#include <stdio.h>

int main (){
  enum meses_e {
  jan=1 , fev=2, mar=3, abr=4, mai=5, jun=6, jul=7, ago=8, set=9, out=10, nov=11, dez=12
  };

  char nomes [12][10] = {
  "Janeiro", "Feveiro", "Março", "Abril", "Maio", "Junho", 
  "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro",
  };

  int mes;
  printf ("Entre com o número do mês: ");
  int ok = scanf("%i", &mes);

  switch(mes) {
    case jan:
    case fev:
    case mar:
    case abr:
    case mai:
    case jun:
    case jul:
    case ago:
    case set:
    case out:
    case nov:
    case dez: printf("Seu número corresponde ao mês de %s\n", nomes[mes-1]);
    break; 
    default: printf("Mês inválido\n");
    break;
  }
  
  return 0;
}