// fatorial de um numero

#include <stdio.h>

int main()
{

    int num; // variavel para
    int fatorial = 1;

    printf("\nqual numero vc quer saber o fatorial ?\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("NAO EH POSSIVEL DESCOBRIR O FATORIAL DE UM NUMERO NEGATIVO");
    }

    else if (num == 0)
    {
        printf("\nfatorial eh igual a 1\n");
    }

    else
    {
        for (int i = 1; i <= num; i++)
        {
            fatorial *= i;
        }
        printf("\n o valor do fat eh %d\n", fatorial);
    }

    return;
}