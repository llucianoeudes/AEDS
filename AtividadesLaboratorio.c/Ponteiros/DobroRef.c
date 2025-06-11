
#include <stdio.h>

 //Crie uma função que receba um número inteiro e retorne (por referência) o dobro desse número.

 void DobraNumero(int *numero)
    {
        *numero = *numero * 2;
        
    }
 int main()
    {
        int numero;
        
        printf("Digite o numero:\n");
        scanf("%d",&numero);

        printf("Voce digitou o numero :%d\n",numero);

        DobraNumero(&numero);

        printf("O dobro eh %d\n",numero);
    }