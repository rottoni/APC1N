#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){

  char pronomes[6][5] = {"Eu", "Tu", "Ele", "Nós", "Vós", "Eles"};
  char conjugacoes[6][5] = {"O", "AS", "A", "AMOS", "ÁIS", "AM"};
  char verbo [21];

  printf("Esse programa permite você conjugar um verbo em -AR no presente!\n");
  printf("Insira seu verbo no infinitivo: ");
  int ok = scanf("%s", verbo);

  for (int i=0; i<strlen(verbo); i++) {
    verbo[i] = toupper(verbo[i]);
  }
  
  int ultima_letra = strlen(verbo) - 1;
  int penultima_letra = ultima_letra - 1;

  if (verbo[ultima_letra] == 'A' && verbo [penultima_letra] == 'R'){
    char radical[21];
    strcpy(radical, verbo);
    radical[penultima_letra] = '\0';

    printf("O verbo %s no presente é: \n", verbo);
    for (int i=0; i <6; i++){
      printf ("%s %s%s\n", pronomes [i], radical, conjugacoes[i]);
    }
    
  } else {
    printf("Seu verbo %s não termina com -AR!\n", verbo);
  }

  
  return 0;
}