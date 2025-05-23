//Escreva um programa que leia um número inteiro N. Se N for um número
//par, calcular e mostrar o quadrado de N. Caso N seja ímpar, calcular e mostrar o cubo
//de N.

#include <stdio.h>
#include <math.h>

int main()
    {
        int Numero; 
        printf("\n digite um numero \n");
        scanf ("%d",&Numero);

        double quadrado; //variavel
        double cubo;// variavel

        if (Numero % 2 == 0)
            {
                quadrado = pow(Numero , 2);
                printf("\nO QUADRADO DE %d E %lf \n",Numero,quadrado);
            }
        else    
            {
                cubo = pow(Numero , 3);
                printf("\nO CUBO DE %d E %lf \n",Numero,cubo);
                //nada
            }
            
        
        
    }