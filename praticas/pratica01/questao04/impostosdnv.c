#include <stdio.h>

#define PRECO_INICIAL 100
// O preço inicial do produto é 100 reais.

int main(){

float icms = 0.17f * PRECO_INICIAL ;
float cofins = 0.076f * PRECO_INICIAL ;
float pis_pasep = 0.0165f * PRECO_INICIAL ;

float impostos = icms + cofins + pis_pasep;
float preco_final = impostos + PRECO_INICIAL;

printf("O valor do ICMS é de %f\n", icms);
printf("O valor do COFINS é de %f\n", cofins);
printf("O valor do PIS PASEP é de %f\n", pis_pasep);
printf("Após tributar o seu produto, o preço final dele é de %f\n", preco_final);
  
  return 0;
}