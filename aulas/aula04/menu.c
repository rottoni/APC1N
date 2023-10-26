#include <stdio.h>
#include <stdlib.h>

int main() {
  char opcao = 0;
  float saldo =0.0f;

  while (opcao != '0') {
    int certo = system("clear");

    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Listar recados\n");
    printf("0 - Sair\n\n");
    printf("Escolha sua opção: ");
    certo = scanf("%c", &opcao);

    while (getchar() != '\n');
    switch (opcao) {
      
    case '1':
      certo = system("clear");
      printf("CONSULTAR SALDO\n");
      printf("O seu saldo é de R$ %5.2f\n", saldo);
      printf ("Pressione ENTER para continuar...");
      getchar();
      break;
      
    case '2': {
      char valor = 0;
      while (valor != '0') {
        certo = system("clear");
        printf("FAZER RECARGA\n");
        printf("1 - R$ 10,00\n");
        printf("2 - R$ 20,00\n");
        printf("3 - R$ 50,00\n");
        printf("0 - Retornar ao menu...\n");
        printf("Escolha o valor de recarga:\n");
        certo = scanf("%c", &valor);
        while (getchar() != '\n');

        switch (valor){
          case '1': saldo = saldo + 10.0f; break;
          case '2': saldo = saldo + 20.0f; break;
          case '3': saldo = saldo + 50.0f; break;
          case '0': break;
          default: printf ("Valor inválido\n"); break;
        }

        if (valor == '1' || valor == '2'|| valor == '3'){
          printf ("Recarga efetuada com sucesso!\n");
          printf ("Pressione ENTER para continuar...");
          getchar();
        }
        }
      break;
      }
  
    case '3':
      certo = system("clear");
      printf("LISTAR RECADOS\n");
      printf("Não há recados\n");
      printf ("Pressione ENTER para continuar...");
      getchar();
      break;
      
    case '0':
      break;
      
    default:
      printf("Opção inválida\n");
      printf ("Pressione ENTER para continuar...");
      getchar();
      break;
    }

  }

  return 0;
}