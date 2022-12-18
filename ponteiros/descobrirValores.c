void descobrirValores(int *v, int *me, int *ma, int tam){
  int i;
  *me = v[0];
  *ma = v[0];
  for(i = 0; i < tam; i++){
    if(v[i] < *me)
      *me = v[i];
    if(v[i] > *ma)
      *ma = v[i];
  }
  printf("Na funçõa : Menor: %d\n, Maior: %d\n", *me, *ma);
}