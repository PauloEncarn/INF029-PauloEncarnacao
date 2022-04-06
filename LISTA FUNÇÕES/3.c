/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Paulo Henrique dos santos da Encarnação
Questão 3: 
    Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int a){
int fat=1;

if (a<0)
{
  return -1;

}

else

  for ( ; a>0; fat *=a--)
    return fat;
  }

int main(){

int resultado, num1;

printf ("-----FATORIAL-------");
printf ("\nDigite o numero:");
scanf("%d",&num1);

resultado = fatorial(num1);

if (num1<0)
{
  printf ("nao tem ");
}
else 
  printf("%d",resultado);

return 0;
}