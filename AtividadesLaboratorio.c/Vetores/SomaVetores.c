//Escreva um programa que leia 10 números inteiros e armazene em um vetor. Depois, exiba a soma de todos os elementos.

#include <stdio.h>

int FuncaoLerInteiro()
{
    int num;
    printf("Digite um numero inteiro : \n");
    scanf("%d", &num);
    return num;
}

int main() {
    int SomaVetor = 0;
    int Vetor[10];

    for (int posicao = 0; posicao < 10; posicao++) {
        Vetor[posicao] = FuncaoLerInteiro();
        SomaVetor += Vetor[posicao]; // Soma simplificada
    }

    printf("\nA soma dos elementos do vetor é: %d\n", SomaVetor);
    return 0;
}