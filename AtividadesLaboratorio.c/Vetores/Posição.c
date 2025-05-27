#include <stdio.h>

int main()
    {
        int vetor[6] = { 1, 0 , 5, -2, -5, 7};
        int soma = 0;

        for(int posicao = 0 ; posicao < 3 ; posicao++)
            {
                soma = soma + vetor[posicao];
            }
        
        printf("\n A soma eh %d\n",soma);

        vetor[4] = 100 ;

        printf("%d",vetor[4]);

        for (int posicao1 = 0 ; posicao1 < 6 ; posicao1++)  
        {
            printf("%d,",vetor[posicao1]);
        } 
    
        return 0;



    }
