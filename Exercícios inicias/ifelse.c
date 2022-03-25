#include <stdio.h>
#include <stdlib.h>

int main(void){
//estrutura de decisão (if else)

float n1,n2,n3,n4;

printf("digite a PRIMEIRA nota=");
scanf("%f",&n1);
printf("digite a SEGUNDA nota=");
scanf("%f",&n2);
printf("digite a TERCEIRA nota=");
scanf("%f",&n3);
printf("digite a QUARTA nota=");
scanf("%f",&n4);

float media= (n1+ n2+ n3+ n4) /4;

if (media>=7){
  printf ("sua media eh=%f\n",media);
  printf("parabens voce foi=\n");
  printf("APROVADO"); 
}

else if (media>=5){
  printf("o aluno esta em recureracao");
}
else {
   printf("o aluno foi reprovado");
    }
}
  