#include <stdio.h>

int main() {
  int nota = 0;

  printf("Em uma escala de 1 a 5, qual seria a sua avaliação do serviço dado?\n");
  printf("Sendo 1 = Ruim, 2 = Insuficiente, 3 = Suficiente, 4 = Bom, 5 = Ótimo\n");

  int leu_certo = scanf("%i", &nota);

  if (leu_certo) {

    if (nota == 1) {
      printf("Sua avaliação diz que o serviço foi 'ruim'\n");
    } else if (nota == 2) {
      printf("Sua avaliação diz que o serviço foi 'insuficiente'\n");
    } else if (nota == 3) {
      printf("Sua avaliação diz que o serviço foi 'suficiente'\n");
    } else if (nota == 4) {
      printf("Sua avaliação diz que o serviço foi 'bom'\n");
    } else if (nota == 5) {
      printf("Sua avaliação diz que o serviço foi 'ótimo'\n");
    } else {
       printf("Erro ao ler o valor. Tente novamente\n");
    }

  }

  return 0;
}