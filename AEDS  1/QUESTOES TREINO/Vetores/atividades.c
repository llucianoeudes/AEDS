// Leia um vetor de 10 posições. Conte quantos elementos primos ele tem
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
        int vetor[10];
        int ContadorPrimos = 0;

        for(int posicao = 0 ; posicao < 10 ; posicao++)
        {
            vetor[posicao] = FuncaoLerInteiro();

            if (vetor[posicao] == 2)
            {
                printf("\n EH PRIMO VETOR [%d] \n",posicao);
                ContadorPrimos++;
            }

        for(int i = 2 ; i < vetor[posicao] ; i++)
            {
                if(vetor[posicao] % i  == 0 )  
                {
                    printf("\n NAO EH PRIMO VETOR [%d]\n",posicao);
                }

                else 
                {
                    printf("\n EH PRIMO VETOR [%d] \n",posicao);
                    ContadorPrimos++;
                }
            }
            
        }
        printf(" NA SUA SEGUENCIA EXISTEM %d",ContadorPrimos);
    }