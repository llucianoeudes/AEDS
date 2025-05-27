#include <stdio.h>

    float LerNumeros (float num1){
        printf("\n digite um numero \n");
        scanf ("%f",&num1);
        
        return num1 ;
    }


int main(){
    
    printf ("\n Nesse programa iremos indentificar qual eh o maior entre os dois numeros\n");
    printf ("\n Digite os valor que voce deseja saber: \n ");
    
    float num1 = LerNumeros(num1);
    float num2 = LerNumeros(num1);

    if( num1 > num2){
        printf("o maior numero entre os dois eh o %f\n",num1);
    }
    else {
        printf("o maior numero entre os dois eh o %f\n",num2);
    }


    return 0;
}