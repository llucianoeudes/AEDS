#include <stdio.h>
#include <math.h>

int Recursivo(int n)
{
 if(n <= 50 )
 {
    printf("%d",n);
 }
    else
    {
        Recursivo( n + 1 );
    }
}