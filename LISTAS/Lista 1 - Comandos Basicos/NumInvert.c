#include <stdio.h>

int Numero()
    {
        int num;
        printf("\nDigite o numero de 3 algarismos:\n");
        scanf("%d",&num);

        return num;

    }
    
int main()
    {
        int numero = Numero();

        int centena = numero / 100;
        int dezena = (numero % 100) / 10;
        int unidade = numero % 10;

        int resultado = unidade * 100 + dezena * 10 + centena;

        printf("\n %d \n",resultado);

    }
