#include <stdio.h>
#include <stdlib.h>

//Retirar os 4 ultimos caracteres de uma string

int main()
{
    char nome[]= "LUCIANO";
    int tamanho = strlen(nome); //
    if (tamanho >= 4) // 
    {
        nome[tamanho - 4] = '\0'; 
    }

    printf("String modificada %s\n",nome);

    return 0;

}