#include <stdio.h>
#include <stdlib.h>


float somar(float num1, float num2){
      return num1+num2;
}
float subtrair(float num1, float num2){
      return num1-num2;
}
float multiplicar(float num1, float num2){
      return num1*num2;
}
float dividir(float num1, float num2){
      return num1/num2;
}
float porcentagem(float num1, float num2){
      return (num1 * num2) / 100;
}


int main (){

  int opcao;
  float num1,num2,resultado;
printf ("calculado\n");
printf ("-------------------------------\n");
printf ("digite o valor do primeiro numero:");
scanf("%f",&num1);
printf ("digite o valor do segundo numero");
scanf("%f",&num2);
printf ("-------------------------------\n");
printf("1. Somar\n");
printf("2. Subtrair\n");
printf("3. Multiplicar\n");
printf("4. Dividir\n");  
printf("5. Porcentagem\n");
printf("digite a opcao desejada");
scanf("%d",&opcao);

switch(opcao)
{
  case 1:
      resultado = soma(num1,num2);
      break;

  case 2:
    resultado= subtrair(num1,num2);
    break;
  
  case 3:
    resultado= multiplicar(num1,num2);
    break;
  
  case 4: 
    if (num2==0)
    {
      printf("nao e possivel dividir por 0");
    }
    else
    {
      resultado= dividir(num1,num2);
    break;
    }
  
  case 5: 
    resultado= porcentagem(num1,num2);
    break;
default;
    printf("opcao invalida");
    break;
    }
printf ("-------------------------------\n");
printf("resultado: %.2f\n,resultado";)
printf("\n";)      
system ("pause");

  return 0;
}