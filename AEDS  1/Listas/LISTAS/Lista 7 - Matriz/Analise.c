//questão 2
//analisar o que a matriz esta fazendo

#include <stdio.h>

int main() 
    {
        int mat[3][2] ,i ,j ;

        for( i = 0 ; i <= 2 ; i++)  
        {
            for( j = 0 ; j <= 1 ; j++)
            {
                mat[i][j] = i + j ;
            }
        }

        
        for( i = 0 ; i <= 1; i++)  
        {
            for( j = 0 ; j <= 2 ; j++)
            {
                printf("%i",mat[j][i] );
                printf("\n");
            }
        }
    }