
#include <stdio.h>

int main()
{
    char letra;

    printf("\nDIGITE UMA LETRA:\n");
    scanf(" %c", &letra);

    if (letra >= 'a' && letra <= 'z')
    {
        printf("\nESSA LETRA EH MINUSCULA\n");
    }

    else if (letra >= 'A' && letra <= 'Z')
    {
        printf("\nESSA LETRA EH MAIUSCULA \n");
    }

    else
    {
        printf("\n OUTRO CARACTER \n");
    }
}