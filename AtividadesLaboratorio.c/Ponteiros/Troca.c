#include <stdio.h>

//Crie uma função que receba dois números inteiros e troque os valores entre eles utilizando ponteiros. Depois, imprima os valores trocados.

void troca(int *x , int *l)
    {
        int temp;
        
        temp = *x;
        *x = *l;
        *l = temp;
    
    }

int main()
    {
        int x = 15 ;
        int l = 22;

        printf(" o valor de x eh %d e o valor de l eh %d\n",x,l);

        troca(&x,&l);

        printf(" o valor de x eh %d e o valor de l eh %d\n",x,l);
    }