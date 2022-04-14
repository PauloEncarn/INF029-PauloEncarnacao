aula do dia 13/04/2022

minitrada pelo professor: Allan

  fatorial=

fat=1;
for(i=1; i<=n;i++)
fat=fat*i;
return fat;

ou 

n!= n * (n-1)!


  int fatorial (int n);

if (n==1)
  return=1;
else
  return= n*fatorail(n-1);


int bb(int A[], int ini, int fim, int valor){

  if(fim<ini)
    return -1;

  int meio= (ini+fim)/2

    if A{meio}==valor
     return=meio;

  if (A[meio]<valor){
    return BB(A, meio+1,fim,valor)

  else   
      BB (A,ini,meio-1,valor);
  }

  T(n)=4+T(N/2) // formula de recorrência
