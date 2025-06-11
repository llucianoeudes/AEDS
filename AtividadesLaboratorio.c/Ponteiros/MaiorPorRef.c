
#include <stdio.h>

 //CFaça uma função que receba dois números e, usando ponteiros, retorne qual é o maior e qual é o menor.

 void MaiorPo(int numero, int numero2, int *Maior ,int *Menor)
    {
        if(numero > numero2)
        {
            *Maior = numero;
            *Menor = numero2;
        }

        else
        {
            *Maior = numero2;
            *Menor = numero;
        }
    
    }
 int main()
    {
        int numero;
        int numero2;
        int Maior;
        int Menor;

        printf("Digite o numero:\n");
        scanf("%d",&numero);

        printf("Digite o numero:\n");
        scanf("%d",&numero2);

        MaiorPo(numero, numero2, &Maior, &Menor);

        printf("O maior numero eh %d e o menor numero eh %d \n",Maior,Menor);
        
    }