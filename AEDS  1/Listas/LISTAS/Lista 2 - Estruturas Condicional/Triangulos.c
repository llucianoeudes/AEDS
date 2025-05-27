//diferencia qual eh o tipo do triangulo
#include <stdio.h>

float LadosTriangulo()
{
    float lado;
    printf("\n digite o lado do triangilo:\n");
    scanf("%f",&lado);
    
    return lado;
}

int main()
{
    printf("\n IDENTIFICADOR DE TRIANGULOS:\n");

    float lado1 = LadosTriangulo();
    float lado2 = LadosTriangulo();
    float lado3 = LadosTriangulo();

    if (lado1 != lado2 && lado2 != lado3)
    {
        printf("\n VOCE TEM UM TRIANGULO ESCALENO:\n");

    }

    
    else if (lado1 == lado2 && lado2 == lado3)
    {
        printf("\n VOCE TEM UM TRIANGULO EQUILATERO:\n");
    }

    else 
    {
        printf("\n VOCE TEM UM TRIANGULO ISOCELES:\n");

    }
}