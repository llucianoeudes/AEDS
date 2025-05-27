//troca valores 

#include <stdio.h>

float LerNumeros()
    {
        float num;
        printf("\nDigite o numero :\n");
        scanf("%f",&num);

        return num;
    }

int main()
{
   float a = LerNumeros();
   float b = LerNumeros();
   float temp;

   temp = a;
   a = b ;
   b = temp;
   
   printf("\n a troca ficou assim %f e %f\n",a ,b );

}