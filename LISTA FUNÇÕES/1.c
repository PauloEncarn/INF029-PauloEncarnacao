#include<stdio.h>
int main(void)
{
    float soma(void);

    float resultado = soma();
    printf("A soma eh: %.2f", resultado);

    return 0;
}

    float soma()
    {
        float num1, num2;

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        float resultado = num1 + num2;

        return resultado;
    }