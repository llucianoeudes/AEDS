// Leia um vetor de 5 elementos e imprima os elementos na ordem inversa.

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
    float Vetor[5];
    float Media;
    float SomaTotal = 0;

    for (int posicao = 0; posicao < 5; posicao++)
        
    {
        Vetor[posicao] = FuncaoLerInteiro();

        SomaTotal += Vetor[posicao];
    }

    Media = SomaTotal / 5;
    
    printf("\no valor da media desse vetor eh %f \n",Media);
        
    return 0;

}