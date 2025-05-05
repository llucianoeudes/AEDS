#include <stdio.h>
#include <math.h>

void Menu()
    {
        printf("\nPrograma para ler o seno de um determiando numero\n");
    }


float Numero()
    {
        float num;
        printf("\nDigite o numero que voce deseja saber o seno:\n");
        scanf("%f",&num);

        return num;

    }

int main()
    {
        Menu();
        
        float numero = Numero();
        float resultado = sin(numero);
        printf("\n O seno de %f eh %f\n",numero,resultado);
    }