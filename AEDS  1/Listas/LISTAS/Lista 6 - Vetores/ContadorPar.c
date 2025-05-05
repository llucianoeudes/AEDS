
// Leia 15 números inteiros e informe quantos são pares e quantos são ímpares.

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
    int Vetor[15];
    int ContadorImpar = 0 ;
    int ContadorPar = 0 ;

    for (int posicao = 0; posicao < 15; posicao++)
    {

        Vetor[posicao] = FuncaoLerInteiro();

        if (Vetor[posicao] % 2 == 0)
        {
            ContadorPar++;
        }

        else
        {
            ContadorImpar++;
        }
    }

    printf("\n No vetor ah %d numero pares e %d impares \n", ContadorPar, ContadorImpar);
    return 0;
}
