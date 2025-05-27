// PROGRAMA PARA SABER OS MULTIPLOS DE UM DETERMINADO NUMERO;

#include <stdio.h>

int LerNumeros (){
    int num1;
    printf("\n digite um numero inteiro: \n");
    scanf ("%d",&num1);
    
    return num1 ;
}

int main()
    {
        int numero = LerNumeros();
        int result ;

        for(int i = 0 ; i <= 10 ; i++)
        {
            result = numero * i ;

            printf("\n%d X %d = %d \n", numero , i , result);
        }
    }