#include <stdio.h>

int main() {
  
int base = 0;
int altura = 0;

printf("INSIRA a medida da BASE do seu TRIÂNGULO:\n");
scanf("%i", &base);

printf("INSIRA a medida da ALTURA do seu TRIÂNGULO\n");
scanf("%i", &altura);
  
int area = base * altura / 2;

printf ("A área do triângulo é: %i\n", area);

  
return 0;
}