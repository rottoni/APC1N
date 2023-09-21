#include <stdio.h>

int main() {

  float raio = 0;
  float pi = 3.141592;

  printf("Insira o raio do sua pizza, ele será usado para encontrar seu perímetro de pizza\n");
  scanf("%f", &raio);
  
  float perimetro = 2 * pi * raio;

  printf("O perímetro da sua pizza é %f\n" , perimetro);

  return 0;
}