//Faça uma função que receba um vetor de números inteiros e seu tamanho, e retorne o maior valor presente no vetor.
#include <stdio.h>

int MaiorVet(int tamanho, int *vetor )
    {
        int maior = *vetor;

        for(int i = 1 ; i < tamanho ; i++)
            {
                if( vetor[i] > maior)
                    {
                        maior = vetor[i];
                    }
            }

            return maior;
    }

int main()
    {
        int vetor[5];
        int maior;

        for(int i = 0 ; i < 5; i++)
            {
                printf("Digite um numero:\n");
                scanf("%d",&vetor[i]);
            }

        maior = MaiorVet(5,vetor);

        printf(" O maior do vetor eh %d", maior);
    }