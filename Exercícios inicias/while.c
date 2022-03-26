#include <stdio.h>
#include <stdlib.h>

int main()
{
int contador=1;
float nota, media;
float total=0;

  while (contador <=4){

    printf("digite a nota");
    scanf("%f", &nota);
    total = total + nota;
    contador++; 
  }

media = total/4;
printf ("nota media: %.2f", media);
return 0;
    
}