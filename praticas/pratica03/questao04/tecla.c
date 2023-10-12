#include <stdio.h>

int main (){
  char tecla;
  
printf("Este programa é capaz de determinar qual é o tipo de caractere que você inserir!\n");
printf("Insira agora seu caractere:\n");
int leu_certo = scanf("%s", &tecla);

if (leu_certo) {

  if (tecla >= 65 && tecla <= 90 || tecla >= 97 && tecla <= 122){
    printf("O seu caractere é do tipo 'LETRA'\n");
  } else if (tecla >= 48 && tecla <= 57){
    printf("O seu caractere é do tipo 'DÍGITO'\n");
  } else if (tecla >= 33 && tecla <= 47 || tecla >= 58 && tecla <= 64 || tecla >= 91 && tecla <= 96 || tecla >= 123 && tecla <= 126){
    printf("O seu caractere é do tipo 'ESPECIAL'\n");
  } else {
  printf("A tecla pressionada não é um caractere\n");
  printf("Ou a tecla pressionada está fora da tabela ASCII padrão\n\n");
  }
}
  
  return 0;
  
}