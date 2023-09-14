#include <stdio.h>
#include <math.h>

// seno(ângulo) = altura/distância

int main (){
  float angle = 45; // em graus
  float distance = 1000; // em metros
  
  float height = sin(angle) * distance;

  printf("A altitude alcaçada pelo avião, após dada a distância é de %f\n", height) ;

  return 0;
}