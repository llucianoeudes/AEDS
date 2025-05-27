#include <stdio.h>

int LerNumeros()
{
    int num1;
    printf("\n digite  ate que multiplo de 5 vc deseja saber: \n");
    scanf("%d", &num1);

    return num1;
}

int MultiplosDe5(int numero)

{
    int result;

    for (int i = 0; i <= numero; i++)
    {
        result = 5 * i;

        printf("\n5 X %d = %d \n", i, result);
    }
}

int main()
{
    int numero = LerNumeros();
    MultiplosDe5(numero);
}