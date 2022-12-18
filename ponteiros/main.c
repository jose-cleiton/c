#include <stdio.h>
#include <stdlib.h>
#include </Users/josecleiton/dev/c/ponteiros/descobrirValores.c>





int main(){

 int valor =10, menor, maior, vet[]={50,10,250,500,25};
 int *p;
 p = &valor;
 int tam = sizeof(vet)/sizeof(int);


  descobrirValores(vet, &menor, &maior, tam);
printf("Em main ==> Menor: %d\n, Maior: %d\n", menor, maior);

  return 0;

}