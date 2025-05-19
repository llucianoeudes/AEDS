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
    int vetor[5];
    
    for(int i = 0 ; i < 5 ;i++)
    {
        vetor[i] = FuncaoLerInteiro();

    }

     for(int i = 0 ; i < 5 ;i++)
    {
        printf("%d",vetor[i]);

    }

}