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
    int Numero = FuncaoLerInteiro();

    if (Numero < 0)
    {
        printf("\n SEU NUMERO NAO EH PRIMO\n");
    }

    for (int i = 2; i < Numero; i++)
    {
        if (Numero % i == 0)
        {
            printf("\n SEU NUMERO NAO EH PRIMO\n");
        }
    }
    printf("\n %d SEU NUMERO EH PRIMO\n", Numero);
    return 0;
}