#include <stdio.h>
#include <stdlib.h>

//Retirar os 4 ultimos caracteres de uma string

int main()
{
    char nome[]= "LUCIANO";
    int tamanho = strlen(nome); //função para saber o tamanho da string

    if (tamanho >= 4) // verifica se o tamnho da string eh maior que 4 
    {
        nome[tamanho - 4] = '\0'; // eu diminuo os caracter tirando o /0
    }

    printf("String modificada %s\n",nome); //printo 

    return 0;

} 