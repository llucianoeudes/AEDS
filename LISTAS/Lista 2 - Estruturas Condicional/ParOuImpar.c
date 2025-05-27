//Ler um número inteiro. Se ele for par calcular e escrever o seu quadrado e se for ímpar
//calcular e escrever seu cubo

#include <stdio.h>
#include <math.h>


int LerNumeros (){
    
    int num1; 
    printf("\n digite um numero \n");
    scanf ("%d",&num1);
    return num1 ;
    
}


void ehPar(int num)
{
    int resultado = pow(num,2);
    printf("\n O resultado eh %d \n",resultado);

}

void ehImpar(int num)
{
    int resultado = pow(num,3);
    printf("\n O resultado eh %d \n",resultado);

}

int main ()
{
    int numero = LerNumeros();

    if ( numero % 2 == 0 )
    {
        printf("\n EH PAR MLK\n");
        ehPar(numero);
    }

    else {
        printf("\n EH IMPAR MLK\n");
        ehImpar(numero);
    }
}