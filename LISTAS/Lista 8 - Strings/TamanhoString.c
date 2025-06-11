#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int contador = 0;


    puts("Digite seu texto:");
    fgets(string,sizeof(string),stdin);

    while(string[contador] != '\O' && string[contador] != '\n')
        {
            contador++;
        }
    
    printf("A sua string tem tamanho %d ", contador);
    return 0 ;
}