#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void green() { printf("\033[0;32m"); }
void white() { printf("\033[0;37m"); }
void red() { printf("\033[0;31m"); }
void yellow() { printf("\033[0;33m"); }
void blue() { printf("\033[0;34m"); }

int main() {

  char opcao1 = 0;
  int ok1 = system("clear");

  green();
  printf("\n");
  printf("-+----------------------------------------------+-\n\n");
  blue();
  printf("      CALCULADORA DE DESPESA/RECEITA MENSAL!\n\n");
  green();
  printf("--------------------------------------------------\n\n");
  white();
  printf("            'Incrível como funciona!'\n");
  printf("                 'Que inovador!'\n");
  printf("                      'Uau!'\n\n");
  printf("           > Aperte ENTER para iniciar\n\n");
  green();
  printf("-+----------------------------------------------+-\n");
  white();

  getchar();
  ok1 = system("clear");

  printf("\n");
  green();
  printf("-+----------------------------------------------+-\n\n");
  printf("               O QUE DESEJA FAZER?\n\n");
  printf("--------------------------------------------------\n\n");
  white();
  printf("       [1] - Adicionar valores de desepesas\n");
  printf("       [2] - Adicionar valores de receitas\n");
  printf("       [3] - Calcular saldo mensal atual\n");
  printf("       [4] - Consultar comentários do aluno\n");
  printf("       [0] - Sair (fechar programa)\n\n");
  green();
  printf("--------------------------------------------------\n\n");
  white();
  printf("    Pressione a tecla do número que corresponde\n");
  printf("    a ação pretendida e então pressione ENTER!\n\n");
  green();
  printf("-+----------------------------------------------+-\n\n");
  white();

  ok1 = scanf("%c", &opcao1);
  while (getchar() != '\n')
    ;
  switch (opcao1) {

  case '1':
    ok1 = system("clear");

    green();
    printf("-+--------------------------------------------------------+-\n\n");
    printf("                Inserir valores de despesas:\n\n");
    printf("------------------------------------------------------------\n\n");
    white();
    printf("   Essa calculadora permite a soma de despesas unitárias\n");
    printf("           e de despesas parceladas mensalmente!\n\n");
    green();
    printf("------------------------------------------------------------\n\n");
    yellow();
    printf("                          Atenção!\n\n");
    printf(" Se uma despesa for unitária (não possui mensalidades):\n");
    printf(" > Apenas insira '1' no campo da parcela\n\n");
    printf(" Se houver menos despesas a inserir que campos disponíveis:\n");
    printf(" > Apenas insira '0' nos campos de valores restantes e \n");
    printf("   insira '1' nos campos de parcelas restantes.\n\n");
    printf(" Se houver mais despesas a inserir que campos disponíveis:\n");
    printf(" > Copie o valor final registrado nessa página e reinicie\n");
    printf("   o programa. Então, reinsira esse número no campo valor\n");
    printf("   absoluto e insira '1' no campo de parcelas. Após isso,\n");
    printf("   introduza as despesas faltantes normalmente.\n\n");
    green();
    printf("------------------------------------------------------------\n\n");
    white();

    float despesa[10][3];
    float total = 0.0f;

    for (int i = 0; i < 10; i++) {

      printf(" > Insira o valor absoluto da despesa número %i: ", i + 1);
      int cu = scanf("%f", &despesa[i][0]);
      printf(" > Insira a quantidade de parcelas da despesa número %i: ", i + 1);
      cu = scanf("%f", &despesa[i][1]);

      despesa[i][2] = despesa[i][0] / despesa[i][1];
      total = total + despesa[i][2];
    }

    printf("\n\n");
    green();
    printf("-+--------------------------------------------------------+-\n\n");
    printf("           Valor       Quant Parcelas     Subtotal\n\n");
    printf("------------------------------------------------------------\n\n");
    white();

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%16.2f", despesa[i][j]);
      }
      printf("\n");
    }

    printf("\n");
    green();
    printf("------------------------------------------------------------\n\n");
    red();
    printf("       O VALOR TOTAL DE SUAS DESPESAS NESSE MÊS É DE:\n");
    printf("          R$ %31.2f\n\n", total);
    green();
    printf("-+--------------------------------------------------------+-\n\n");
    white();

    break;

  case '2':
    ok1 = system("clear");

    green();
    printf("-+--------------------------------------------------------+-\n\n");
    printf("                Inserir valores de receitas:\n\n");
    printf("------------------------------------------------------------\n\n");
    white();
    printf("   Essa calculadora permite a soma de receitas unitárias\n");
    printf("           e de receitas parceladas mensalmente!\n\n");
    green();
    printf("------------------------------------------------------------\n\n");
    yellow();
    printf("                          Atenção!\n\n");
    printf(" Se uma receita for unitária (não possui mensalidades):\n");
    printf(" > Apenas insira '1' no campo da parcela\n\n");
    printf(" Se houver menos receitas a inserir que campos disponíveis:\n");
    printf(" > Apenas insira '0' nos campos de valores restantes e \n");
    printf("   insira '1' nos campos de parcelas restantes.\n\n");
    printf(" Se houver mais receitas a inserir que campos disponíveis:\n");
    printf(" > Copie o valor final registrado nessa página e reinicie\n");
    printf("   o programa. Então, reinsira esse número no campo valor\n");
    printf("   absoluto e insira '1' no campo de parcelas. Após isso,\n");
    printf("   introduza as receitas faltantes normalmente.\n\n");
    green();
    printf("------------------------------------------------------------\n\n");
    white();

    float receita[10][3];
    float total2 = 0.0f;

    for (int i = 0; i < 10; i++) {

      printf(" > Insira o valor absoluto da receita número %i: ", i + 1);
      int cu = scanf("%f", &receita[i][0]);
      printf(" > Insira a quantidade de parcelas da receita número %i: ", i + 1);
      cu = scanf("%f", &receita[i][1]);

      receita[i][2] = receita[i][0] / receita[i][1];
      total = total + receita[i][2];
    }

    printf("\n\n");
    green();
    printf("-+--------------------------------------------------------+-\n\n");
    printf("           Valor       Quant Parcelas     Subtotal\n\n");
    printf("------------------------------------------------------------\n\n");
    white();

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%16.2f", receita[i][j]);
      }
      printf("\n");
    }

    printf("\n");
    green();
    printf("------------------------------------------------------------\n\n");
    blue();
    printf("       O VALOR TOTAL DE SUAS RECEITAS NESSE MÊS É DE:\n");
    printf("          R$ %31.2f\n\n", total);
    green();
    printf("-+--------------------------------------------------------+-\n\n");
    white();

    break;

  case '3':
    ok1 = system("clear");
    float receita_mensal = 0.0f;
    float despesa_mensal = 0.0f;

    green();
    printf("-+--------------------------------------------------------+-\n\n");
    printf("                Inserir valores a calcular:\n\n");
    printf("-+--------------------------------------------------------+-\n\n");
    white();

    printf("  > Insira o valor total de receitas mensais:  ");
    int ok77 = scanf("%f", &receita_mensal);
    printf("  > Insira o valor total de despesas mensais:  ");
    ok77 = scanf("%f", &despesa_mensal);
    printf("\n");

    float saldo = receita_mensal - despesa_mensal;

    green();
    printf("-+--------------------------------------------------------+-\n\n");
    white();
    printf("           Seu saldo é de: R$ %16.2f\n", saldo);

    if (saldo < 0) {
      red();
      printf("  Infelizmente suas contas estão no vermelho nesse mês...\n\n");
    } else if (saldo >= 0) {
      blue();
      printf("       Parabéns! Suas contas estão no azul nesse mês!\n\n");
    }

    green();
    printf("-+--------------------------------------------------------+-\n\n");
    break;

  case '4':
    ok1 = system("clear");

    green();
    printf(
        "-+-----------------------------------------------------------+-\n\n");
    white();
    printf("Boa noite, professor!\n\n");
    printf("Primeiramente, gostaria de agradacer aos seus ensinamentos\n");
    printf("nesse semestre.\n\n");
    printf("Em sequência, eu gostaria de admitir que esse programa tá\n");
    printf("longe de ser impressionante, mas que ainda sim foi feito\n");
    printf(
        "com atenção e dedicação, graças ao conteúdo aprendido em aula.\n\n");
    printf("Minha intenção original era de fazer uma calculadora com uma\n");
    printf("struct para poder nomear as despesas e receitas. Contudo não\n");
    printf("consegui fazer tal coisa e esse programa acabou ficando bem\n");
    printf(
        "parecido com o programa da Nota Fiscal (prática 4, questão 3).\n\n");
    printf("Enfim, espero que pelo menos eu consiga uma nota decente com\n");
    printf("essa calculadora ordinária kk\n\n");
    printf("Seja como for,\n");
    red();
    printf("Te desejo um Feliz Natal e um Próspero Ano Novo!\n\n");
    green();
    printf(
        "-+-----------------------------------------------------------+-\n\n");

    break;

  case '0':
    ok1 = system("clear");
    green();
    printf("\n");
    green();
    printf("-+----------------------------------------------+-\n\n");
    white();
    printf("                    Até breve!\n\n");
    green();
    printf("-+----------------------------------------------+-\n\n");
    white();
    break;

  default:
    red();
    printf("> Opção inválida...\n");
    printf("> Reinicie o programa.\n\n");
    break;
  }

  return 0;
}