// Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos 
//seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. 
//Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.
//O símbolo ( representa "maior que". Por exemplo: [0,25] indica valores entre 0 e 25.0000, 
//inclusive eles. (25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000


#include <stdio.h>

int main()
    {
        float numero;

        scanf("%f",&numero);

        if(numero > 0 && numero < 25)
            {
                printf("[0,25]");
            }
        
         if(numero >= 25  && numero <= 50)
            {
                printf("(25,50]");
            }

        if(numero > 50 && numero < 75)
            {
                printf("(50,75]");
            }
        
        if(numero >= 75  && numero <= 100)
            {
                printf("(75,100]");
            }
        
        if (numero < 0 || numero > 100)
            {
                 printf("Fora de intervalo");
            }
    }
