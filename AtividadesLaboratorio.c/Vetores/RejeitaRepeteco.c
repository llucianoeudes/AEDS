//Leia 10 números e crie um novo vetor sem repetir valores.

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

    for (int posicao = 0; posicao < 10; posicao++)
        
    {
        Vetor[posicao] = FuncaoLerInteiro();
    }

    for (int posicao = 0; posicao < 10; posicao++)
        
    {
        Vetor2[posicao] = FuncaoLerInteiro(); 
    }

    for (int j = 0; J < 10; J++)
        
    {
        for (int  = 0; posicao < 10; posicao++)
        
    {
        Vetor[posicao] = FuncaoLerInteiro();
    }

    }

    

        
    return 0;
    }

