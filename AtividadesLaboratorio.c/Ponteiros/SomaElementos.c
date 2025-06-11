
//Crie uma função que receba um vetor de números inteiros e seu tamanho, e retorne a soma de todos os elementos.

#include <stdio.h>


int somaElemento(int tamanho, int *vetor)
    {
        int somaelementos = 0 ;

        for(int i = 0 ; i < tamanho ; i++)
            {
                somaelementos = somaelementos + vetor[i];
            }

            return somaelementos;
    }


int main()
    {
        int vetor[10];
        int soma;

        for(int i = 0 ; i < 10; i++)
            {
                printf("Digite um numero:\n");
                scanf("%d",&vetor[i]);

            }

        soma = somaElemento(10,vetor);

        printf("\nA SOMA DE ELEMENTOS EH %d \n",soma);
            
    }