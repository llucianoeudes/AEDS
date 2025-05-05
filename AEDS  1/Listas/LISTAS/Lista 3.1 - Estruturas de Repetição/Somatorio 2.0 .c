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
    int N = FuncaoLerInteiro();
    int M = FuncaoLerInteiro();
    int Soma = 0;
    int Soma2 = 0;
    for (int i = 1; i <= N; i++)
    {
        Soma = Soma + i;
    }
    for (int j = 1; j <= M; j++)
    {
        Soma2 = Soma2 + j;
    }

    printf("%d\n", Soma2 + Soma);
}