#include <stdio.h>
#include <stdlib.h>


typedef struct no{
  int valor;
 struct no *prox;
}No;

void imprimir(No *inicio){
  if(inicio){
    printf("%d ", inicio->valor);
    imprimir(inicio->prox);
  }
}


No* inserir(No *inicio, int x){
  No *novo = malloc(sizeof(No));
  if(novo){
    novo->valor = x;
    novo->prox = inicio;
  }  
  return novo;
}


int main(){

  No *lista = NULL;

  lista = inserir(lista, 10);
  lista = inserir(lista, 20);
  lista = inserir(lista, 30);
  imprimir(lista);




  return 0;

}