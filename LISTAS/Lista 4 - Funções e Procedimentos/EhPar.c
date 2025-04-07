#include <stdio.h>

int FuncaoLerInteiro()
{
    int num;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &num);
    return num;
}

int par (int num)
    {
        int result;
        result = 2 * num ;
        printf("%d", result);
        return result;
    }

int main()
    {
        int Numero = FuncaoLerInteiro();
        int ehPar = par(Numero);
        printf("%d, eh par",ehPar);

    }