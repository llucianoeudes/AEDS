#include <stdio.h>

    void funcaoArredonda(float num)
{
    float resultado;
    float partInteira = (int) num; 
    float decimal = num - partInteira;
   
    if ( decimal > 0.5 )
    {
        resultado = partInteira + 1 ; 
    }

    else 
    {
        resultado = num - decimal;
    }

    printf("o arrendondamento do numero %f eh %f\n",num,resultado);
}


        int main ()
        {
            printf("\n ARREDONDA NUMEROS\n");
            
            float num;
            printf("Digite um numero\n");
            scanf("%f",&num);

            funcaoArredonda(num);

            return 0;
        }
