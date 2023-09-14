#include <stdio.h>
#include <math.h>

// Bhaskara: -b +- sqrt (b^2 - 4ac)/2a

int main (){
  
  int a = 1;
  int b = 5;
  int c = 4;

  float delta = pow(b, 2) - (4 * a * c);
  
  float x1 = (-b + sqrt(delta)) / (2 * a);
  float x2 = (-b - sqrt(delta)) / (2 * a);

  printf("O valor da primeira raíz é %f\n", x1);
  printf("O valor da segunda raíz é %f\n", x2);

  
  return 0;
}