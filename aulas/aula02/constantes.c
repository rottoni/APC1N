#include <stdio.h>

#define SEXO_MASCULINO 1


int main() {
  int sexo = SEXO_MASCULINO;

  const int VERDADEIRO = 1;
  // A constante não altera o valor após o pré processamento
  // O pré processamento é feito nos comandos começados com #
  // VERDADEIRO = 0 ; Não pode!

  return 0;
}