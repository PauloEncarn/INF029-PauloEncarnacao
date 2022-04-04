#include <stdio.h> 
#include <stdlib.h>

int main(void){

float soma(void);
float resultado=soma();

printf ("a soma eh= %f", resultado);

return 0;
}

float soma(){
    
    float num1,num2;
    printf("digite o numero um=",num1);
    scanf("%d",&num1);
    printf ("digite o numero dois=",num2);
    scanf("%d",&num2);
    
    float resultado= num1+num2;
    
    return resultado;
}