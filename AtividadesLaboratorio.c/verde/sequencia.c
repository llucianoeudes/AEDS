#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M;
    int N;
    int Maior = 0;
    int Menor = 0;
    int Soma = 0 ;

    scanf("%d",&M);
    scanf("%d",&N);


    if( M <= 0 || N <= 0)
        {
            return 0;
        }

    while(M >= 0 || N >= 0 )
    {

        if(M > N)
        {
            Maior = M;
            Menor = N;
        }

         if(M < N)
        {
            Maior = N;
            Menor = M;
        }

        if (M == N)
        {
            Maior = N;
            Menor = M;


        }


        for(int i = Menor ; i <= Maior ; i++)
        {
            Soma = Soma + i ;

            printf("%d ",i);
        }

            printf("Sum=%d\n",Soma);

        scanf("%d",&M);
        scanf("%d",&N);

        if( M <= 0 || N <= 0)
        {
            break;
        }

    }

    return 0;

}
