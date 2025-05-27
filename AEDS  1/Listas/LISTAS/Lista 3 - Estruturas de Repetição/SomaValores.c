#include <stdio.h>

int LerNumeros (){
    int num1;
    printf("\n digite um numero \n");
    scanf ("%d",&num1);
    
    return num1 ;
}

int main()
{
    float numero = LerNumeros();

    int contador = 0 ;

    for(int i = 0 ; i <= numero ; i++)
        {
            contador = contador + i;

        }
    
        printf("\n O VALOR DA SOMA EH %d\n",contador);

      return 0;
}