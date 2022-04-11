BUSCA BINÁRIA:

/ 1  /  3  /  17  /  22  /  40  /41  /44  /52  /55  /63  /67  /70  /79  /88  /90  /93

//BUSCANDO O NUMERO 60

scanf("%d",%x)
int fim=n-1;
int ini=0;

while(fim>ini)
{
  int meio=(ini+fim)/2;
  if (A[meio]==x);
    printf("achei em %d",meio);
      //achei=1
  if else (A[meio]>x)
    //fim=meio-1
    else
    ini=meio+1;

    }
  
 if (achei==0) printf("não está no vetor"); 

passos:

A pesquisa binária utiliza a técnica de “dividir e conquistar”.

Primeiro, testamos se o elemento procurado é menor que o elemento do meio do vetor. Se for o caso, então passamos a buscar apenas na primeira metade do vetor.

Se não, testamos se o elemento procurado é maior que o elemento do meio do vetor. Se for o caso, então passamos a buscar apenas na segunda metade do vetor.

Caso contrário o valor procurado é igual ao elemento que está no meio do vetor.

Esse procedimento é repetido até que o elemento seja encontrado ou não haja mais elementos a testar.
Suponha que desejamos buscar o número 6 no mesmo vetor anterior, porém agora foi informado que o vetor está ordenado em ordem crescente, como aplicar a busca binária ?


ALGORITMO DE ORDENAÇÃO POR INSERÇÃO  (INSERCT SORT)

  13/2/7/1/4/8/19/3

  13/2 TROCA OS LUGARES

  2/13/7 TROCA DE LUGARES

  2/7/13/1 TROCA DE LUGARES

  1/2/7/13 TROCA D ELUGARES

  1/2/7/13/4 TROCA DE LUGARES

  1/2/4/7/13/8 TROCA DE LUGARES

  1/2/4/7/8/13/19 TROCA DE LUGARES


  1/2/3/4/7/8/13/19 AGORA TA CERTO