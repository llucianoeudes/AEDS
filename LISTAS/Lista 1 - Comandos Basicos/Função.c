#include <stdio.h>
#include <math.h> 

void Menu()
    {
        printf("\nPograma para saber o resutado da funcao\n");
        printf("\nDigite os valores em seguencia: ( a , b , c )\n");
    }

float LerNumeros()
    {
        float num;
        printf("\nDigite o numero :\n");
        scanf("%f",&num);

        return num;

    }

int main ()
    {
     Menu();

     float a = LerNumeros();
     float b = LerNumeros();
     float c = LerNumeros();
     float resultado;

     resultado = a + (b / c + a) + 2 * (a - b) + log2(64);
    
     printf("\n O RESULTADO EH %f\n",resultado);
     
    }