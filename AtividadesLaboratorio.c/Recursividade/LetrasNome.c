//Digite quantas letras "a" tem no nome:

#include <stdio.h>

int main()
    {
        char letras;
        char contaLetrasA = 0;
        int num;

        printf("\nquantas letras tem no seu nome:\n");
        scanf("%d",&num);
       


        for(int i = 0 ; i < num ; i++)
        {
            printf("\nDigite a letra:\n");
            scanf(" %c",&letras);

            if(letras == 'a' || letras == 'A')
            {
                contaLetrasA = contaLetrasA + 1;

            }
        }
        printf("\n NO SEU NOME AH %d LETRAS\n",contaLetrasA);
    }