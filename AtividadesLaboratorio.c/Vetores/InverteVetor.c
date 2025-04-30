
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
    int Vetor[5];

    for (int posicao = 0; posicao < 5; posicao++)
        
    {
        Vetor[posicao] = FuncaoLerInteiro();
    }

    for (int i = 4 ; i >= 0 ; i--)
        {
            printf("%d",Vetor[i]);
        }
    

        
    return 0;

}