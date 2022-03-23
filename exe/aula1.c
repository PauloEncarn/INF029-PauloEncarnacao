#include <stdio.h>

int mul(int resultado1, int resultado);
int soma(int num1, int num2);
int sub(int num1, int num2);

int main() 
{

int num1,num2;

printf("digite dois numero: ");
scanf("%i",num1);
printf("digite dois numero: ");
scanf("%i",num2);

int resultado1=(num1, num2);
int resultado2= (num1, num2);
int resultado3=(resultado1,resultado2);

printf("o resultado eh=%d",resultado3);
}

int soma(int num1, int num2)
{
  
  int resultado1;
  resultado1= num1+num2;

  return resultado1;
}


int sub(int num1, int num2)
{
  
  int resultado2= num1-num2;

  return resultado2;
  
}

int mul(int resultado1, int resultado2){

  int resultado3= resultado1*resultado2;

  return resultado3;
  
}







