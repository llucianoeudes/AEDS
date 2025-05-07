#include <stdio.h>

void função(int *A , int B)
    {
        *A = *A + B ;

    }

int main()
    {
        int A = 9;
        int B = 3;
    
        função(&A ,B);
        
    }