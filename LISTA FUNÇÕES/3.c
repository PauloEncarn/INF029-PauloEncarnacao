/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto
Questão 3: 
    Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial (int x){

int fat;

  for(fat=1;x>1;x++)
    {
      fat=fat*x;
    }

  if (x<0)
  {
    return -1;
  }
}