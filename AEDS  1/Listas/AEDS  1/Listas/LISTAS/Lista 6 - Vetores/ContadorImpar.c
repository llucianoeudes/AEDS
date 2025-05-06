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
    int SomaImpar = 0;

    for (int posicao = 0; posicao < 10; posicao++)
    {

        Vetor[posicao] = FuncaoLerInteiro();
        
        if (Vetor[posicao] % 2 != 0)
            {
                SomaImpar += Vetor[posicao];
            }
    }

    printf("\n A soma dos numeros impares do vetor eh %d\n",SomaImpar);

    return 0;
}
