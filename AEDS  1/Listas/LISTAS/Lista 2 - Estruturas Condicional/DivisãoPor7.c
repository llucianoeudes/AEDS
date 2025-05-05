//identificar se um numero lido pelo aluno eh divisivel por 7

#include <stdio.h>

float LerNumeros (){
    float num1;
    printf("\n digite um numero \n");
    scanf ("%f",&num1);
    
    return num1 ;
}

int main()
{

    printf("\n DIVISIVEL OU NAO POR 7\n");
    
    
    float numero = LerNumeros();

    if( (int)numero % 7 ==  0 )
    {
        printf("eh divisivel");
    }
    else {
        printf("\nnao eh divisivel \n ");
    }
}