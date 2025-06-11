#include <stdio.h>

int main()
    {
        int x = 10;
        int *ponteiro;

        ponteiro = &x;

        printf("o valor de x eh : %d \n", x);
        printf("o valor do endereço de x eh : %p \n", &x);
        printf("o valor de ponteiro eh: %d\n",*ponteiro);
        printf("o valor do endereço do ponteiro eh: %p\n",ponteiro);

    }