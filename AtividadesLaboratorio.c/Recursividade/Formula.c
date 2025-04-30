//Faca metodo recursivo que receba n e retorne o n-esimo termo

// T(1)= 2 T(2)= 3   T(n) = 5 * n + T(n - 1) elavado a n

#include <stdio.h>
#include <math.h>

int FuncaoLer()
{   
    int num;
    printf("Digite um numero:\n");
    scanf("%d",&num);
    return num ; 
}

double Recursivo(int num)
{
    int result;
 if( num == 1)
    {
        result = 2;
    }
 
   else if( num == 2)
    {
        result = 3;
    }

    else 
    {
        result = 5 * num + pow(Recursivo(num - 1),num);
    }

    return result;
}

int main()
{
    int numero = FuncaoLer();
   double resul = Recursivo(numero);
    printf("\nO valor eh : %.2lf \n",resul);

}