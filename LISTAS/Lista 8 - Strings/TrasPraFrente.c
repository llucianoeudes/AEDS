#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int contador = 0 ;

    puts("Digite seu texto");
    fgets(string, sizeof(string),stdin);

    while(string[contador] != '\0' && string[contador] != '\n')
        {
            contador++;
        }
    
    for(int i = contador - 1 ; i >= 0 ; i--)
        {
            printf(" %c",string[i]);
        }
    
   
    return 0 ;
}