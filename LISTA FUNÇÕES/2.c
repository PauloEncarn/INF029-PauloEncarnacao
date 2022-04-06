/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto
Questão 2: 
    Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três
valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o
resultado da subtração
*/

#include <stdlib.h>
#include <stdio.h>


int subtrair(int a,int b, int c){

  return(a-b-c);
}

int main(void){

int a,b,c;
float resultado;

printf("---SUBTRACAO---\n");
  printf("digite o primeiro numero\n");
scanf("%d",&a);
  printf("digite o segundo numero\n");
scanf("%d",&b);
  printf("digite o terceiro numero\n");
scanf("%d",&c);

  resultado=a-b-c;
printf("o resultado e= %.2f",resultado);
  
}
