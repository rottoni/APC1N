#include <stdio.h>

int main (){
  
  int numero = 0;
  
  printf("Insira um numero inteiro e veja a sua tabuada (até o 10º múltiplo):\n");
  int lc = scanf("%i", &numero);  
  printf("A tabuada de %i é: \n", numero);

  
  for (int i=0; i<10; i++) 
  { printf("%i * %i = %i\n", numero, i+1, numero * (i+1)); }

  

  /*O comando FOR diz que a integral i deve estar entre 0 e 9 e deve ser repetida 10 vezes
    Essa repetição vai mudar para todos os valores que i pode ter (0,1,2,3...9)
    Na fórmula própriamente, se soma 1 (i+1) para contar a partir do 1 (1,2,3,4...10)

     A linha do comando FOR equivale ao código burro não-otimizado a seguir:
  
    printf("%i * 1 = %i\n", numero, numero * 1);
    printf("%i * 2 = %i\n", numero, numero * 2);
    printf("%i * 3 = %i\n", numero, numero * 3);
    printf("%i * 4 = %i\n", numero, numero * 4);
    printf("%i * 5 = %i\n", numero, numero * 5);
    printf("%i * 6 = %i\n", numero, numero * 6);
    printf("%i * 7 = %i\n", numero, numero * 7);
    printf("%i * 8 = %i\n", numero, numero * 8);
    printf("%i * 9 = %i\n", numero, numero * 9);
    printf("%i * 10 = %i\n", numero, numero * 10); */
    
  return 0;
}