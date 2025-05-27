#include <stdio.h>

int FuncaoLerInteiro()
{
    int num;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &num);
    return num;
}

int main()
{
    int numero = FuncaoLerInteiro();
    do
    {
        {
            printf("Digite um numero valido:\n");
        }
    } while (numero < 0);

    int fatorial = 1;

    for (int i = 1; i <= numero; i++)
    {
        fatorial = fatorial * i;
    }

    printf(" O fatorial eh igual ah %d:\n", fatorial);
}