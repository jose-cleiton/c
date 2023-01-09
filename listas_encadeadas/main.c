#include <stdio.h>
#include <stdlib.h>


typedef struct no{
  int valor;
  struct no *proximo;
} No;

//procedimento para inserir no início da lista
void inserir_no_inicio(No **lista, int num){
  No *novo = (No*) malloc(sizeof(No));
  if(novo){
    novo->valor = num;
    novo->proximo = *lista;
    *lista = novo;
  }
  else{
    printf("Falha ao inserir no: ");
}
}

int main(){
  return 0;
}

