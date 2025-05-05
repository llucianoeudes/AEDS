#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//exibir  os 4 ultimos caracteres de uma string

int main()
{
    char nome[]= "LUCIANOEUDES";
    int tamanho = strlen(nome); // uso a função strlen para saber o tamanho da string
    
     strrev(nome); //uso essa função para saber escrever a string ao contrario

    printf("String modificada %.4s\n",nome); // mostro os 4 primeiros termos da string , ja que ela esta ao contrario vai aparecer as 4 ultimas

    return 0;

}
