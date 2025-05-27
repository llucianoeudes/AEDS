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
        int N = FuncaoLerInteiro;
        int Soma = 0;

        for( int i = 1 ; i <= N ; i++)
            {
                Soma = Soma + i;
            }
            printf("%d\n",Soma);
    }