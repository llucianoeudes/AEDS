#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Retirar os 4 primeiros caracteres de uma string

int main()
{
    char nome[]= "LUCIANOEUDES";
    int tamanho = strlen(nome);
    
     strrev(nome);

    printf("String modificada %.4s\n",nome);

    return 0;

}
