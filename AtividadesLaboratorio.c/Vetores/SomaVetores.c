//Escreva um programa que leia 10 números inteiros e armazene em um vetor. Depois, exiba a soma de todos os elementos.

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
        int SomaVetor = 0 ; 
        int Vetor[10];
        int Numero;

        for(int posicao = 0 ; posicao < 10 ; posicao++)
            {   
                Numero = FuncaoLerInteiro(); 
  1              Vetor[posicao] =  Numero ;

                SomaVetor = SomaVetor + Numero;
            }
        printf("\nO Valor total da soma do conteudo do vetor eh %d \n",SomaVetor);

        return 0 ;
    }
