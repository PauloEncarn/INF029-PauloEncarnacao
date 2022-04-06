/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Paulo Henrique dos Santos da Encarnação
Questão 1: 
    Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A
Função main deve imprimir o resultado da soma
*/


#include <stdio.h>
#include <stdlib.h>

int soma(int num1,int num2){

  return(num1+num2);
}

int main(void){

int num1,num2;
float resultado;

printf("SOMA DE DOIS NUMEROS\n");
printf("-----------------------\n");
printf("Digite o primeiro numero\n");
scanf("%d",&num1);
printf("Digite o segundo numero\n");
scanf("%d",&num2);

  resultado=num1+num2;

printf("o resultado e= %.2f",resultado);

  return 0;
  
}

