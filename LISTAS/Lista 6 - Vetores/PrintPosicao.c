#include <stdio.h>

int FuncaoLerInteiro()
{
    int num;
    printf("Digite um numero inteiro : \n");
    scanf("%d", &num);
    return num;
}

int main()
{

    int Vetor[10];

    for (int posicao = 0; posicao < 10; posicao++)
    {

        Vetor[posicao] = FuncaoLerInteiro();
        printf("\n O elemento %d na posicao %d\n", posicao, Vetor[posicao]);
    }

    return 0;
}
