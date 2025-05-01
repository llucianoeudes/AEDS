//Escreva um programa que leia valores inteiros digitados pelo usuário. O
//programa deve parar de ler valores quando o número 0 for digitado. O programa deve
//mostrar a quantidade de valores positivos e a quantidade de valores negativos lidos.

#include <stdio.h>

int main()
{
    int Numero;
    int ContatorPositivos = 0 ;
    int ContatorNegativo = 0;

    while(Numero != 0)
    {
        printf("\nDigite um numero:\n");
        scanf("%d",&Numero);

        if(Numero < 0)
            {
                ContatorNegativo++;
            }
            if(Numero > 0)
            {
                ContatorPositivos++;
            }    

    }
    printf("\nVOCE DIGITOU %d NUMEROS POSITIVOS\n",ContatorPositivos);
    printf("\nVOCE DIGITOU %d NUMEROS NEGATIVOS\n",ContatorNegativo);
}