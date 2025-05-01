//ler dois caracteres e escrevê-los em ordem alfabética

#include <stdio.h>

char caracter()
{    
    char letra;
    printf("Digite um caracater:\n");
    scanf(" %c",&letra);

    return letra;
}

int main()
{
    char letra1 = caracter();
    char letra2 = caracter();
    char temp;

    if(letra1 > letra2)
    {
        temp = letra1;
        letra1 = letra2;
        letra2 = temp;

    }

    printf("Caracteres apos a ordenacao: char1 = %c, char2 = %c\n", letra1, letra2);

    return 0;
}

