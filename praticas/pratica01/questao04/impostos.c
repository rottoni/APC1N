#include <stdio.h>

#define PRECO_INICIAL 100
// O preço inicial do produto é 100 reais.

#define ICMS 0.17f * PRECO_INICIAL
#define COFINS 0.076f * PRECO_INICIAL
#define PIS_PASEP 0.165f * PRECO_INICIAL

int main() {

float impostos = ICMS + COFINS + PIS_PASEP;
float preco_total = impostos + PRECO_INICIAL;

printf("Após tributar o seu produto, o preço total dele é de %f\n", preco_total);

  
  return 0;
}

//Aqui o código simplesmente não funcionou direito
//Ele opera, mas o valor saí errado (A fórmula está errada)