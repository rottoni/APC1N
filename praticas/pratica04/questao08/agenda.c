/*
Faça um programa em C que leia nome e telefone de 10 contatos 
e depois imprima todos os contatos no formato "nome - (telefone)"
*/

#include <stdio.h>
#include <string.h>

int main (){
  
  struct contato_t {
    char nome[41];
    int telefone;
  };
  
  struct contato_t contatos[10];

  for (int i=0; i <10; i++){
    printf("Contato %i\n", i+1);
    printf("Entre com o nome: ");
    int ok = scanf("%[^\n]s", contatos[i].nome);
    getchar ();
    printf("Entre com o telefone : ");
    ok = scanf("%i", &contatos[i].telefone);
    getchar ();
  }

  printf("Lista de Contatos\n\n");
  for (int i=1; i <10; i++){
    printf("%-40s (%9i)\n", contatos[i].nome, contatos[i].telefone);
  } 
  
  return 0;
}
