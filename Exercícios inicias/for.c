#include <stdio.h>
#include <stdlib.h>

int main(){

//estrutura de repetição for

int comt;
float nota,total,media;
total=0;

for (cont=1; cont<=4; cont++;)
{
  printf("digite a nota=");
  scanf("%d"&nota);
  total= total + nota;
}

  media=total/4;
  printf ("media=%f",media);

  
return 0;