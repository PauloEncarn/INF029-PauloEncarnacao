#include <stdio.h>
#include <stdlib.h>


int main(){

int numero,resposta;
int contador=0;

  do{
printf("TABUADA\n");
printf("digite o numero da tabuada\n");
scanf("%d",&numero);
//linha abaixo gera um laço
    for(contador=0;contador<=10;contador++)
{
  printf("%d x %d = %d\n)",numero,contador,numero*contador);
}
  printf("\n1-novo calculo");
  printf("\n2-sair");
  printf("digite a opcao desejada=");
  scanf("%d",&resposta);
  } While(resposta!=2);
  
system ("pause");
return 0;
}

