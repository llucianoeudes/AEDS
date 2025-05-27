//Peça ao usuário para inserir 8 números. Armazene em um vetor e depois mostre o maior e o menor número armazenado.

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
    int Vetor[8];
    int Maior = 0 ;
    int Menor = 99999;

    for (int posicao = 0; posicao < 8; posicao++) {
       
        Vetor[posicao] = FuncaoLerInteiro();

        if (Vetor[posicao] > Maior)
            {
                Maior = Vetor[posicao];
            }
           
        
        if (Vetor[posicao] < Menor)
            {
                Menor = Vetor[posicao];
            }
    }

    printf("\n O maior numero do vetor eh %d e o menor e %d \n", Maior,Menor);
    return 0;
}
