#include <stdio.h>
#include <stdlib.h>

//estrutura de decisão while com uso de "flag"
int main(){

int contador = 0;
float valor,media;
float total=0;

printf ("digte um valor (-1 para encerrar):");
scanf("%f",valor);

  while(valor !=-1){

  total=total+valor;
  contador++;
  printf ("digte um valor (-1 para encerrar):");
    scanf ("%f",&valor);
  }
media= total/contador;
printf("valor medio: %.2f\n", meida);
return 0;


}