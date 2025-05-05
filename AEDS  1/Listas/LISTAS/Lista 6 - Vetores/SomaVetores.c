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
    int Vetor2[10];
    int VetorSoma[10];


    for (int posicao = 0; posicao < 10; posicao++)
    {
        Vetor[posicao] = FuncaoLerInteiro();
   
    }

    
    for (int posicao = 0; posicao < 10; posicao++)
    {
        Vetor2[posicao] = FuncaoLerInteiro();
   
    }

    
    for (int posicao = 0; posicao < 10; posicao++)
    {
        VetorSoma[posicao] = Vetor2[posicao] + Vetor[posicao];

        printf("\n%d,\n",VetorSoma[posicao]);
   
    }



    return 0;
}
