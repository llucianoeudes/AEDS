#include <stdio.h>
//Construa uma função recursiva para a seg abaixo  1,2,3,4,5,

void Recursao(int n, int i)
    {   
       
        if ( i <= n)
    {
        printf("%d\n",i);
        Recursao(n, i + 1);
        
       
}
        else if( i < n)
        {
            printf("%d\n",i);          
        }

       
    }


int main()
    {
        int numero;
        printf("\nDigite um numero:\n");
        scanf("%d",&numero);

        int i = 0;
        Recursao(numero, i);
    }