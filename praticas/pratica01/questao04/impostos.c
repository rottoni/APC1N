#include <stdio.h>

#define PRECO_INICIAL 100
// O preço inicial do produto é 100 reais.

#define ICMS 0.17
#define COFINS 0.076
#define PISPASEP 0.165

int main() {

float impostos = (ICMS + COFINS + PISPASEP) * PRECO_INICIAL;

printf("Após tributar o seu produto, o preço total dele é de %f\n", impostos);

  return 0;
}

//Aqui o código simplesmente não funcionou direito
//Ele opera, mas o valor saí errado (A fórmula está errada)