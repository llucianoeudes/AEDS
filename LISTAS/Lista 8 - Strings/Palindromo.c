#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int tamanho = 0 ;
    int palindromo = 1 ;

    puts("Digite seu texto");
    fgets(string, sizeof(string),stdin);

    while(string[tamanho] != '\0' && string[tamanho] != '\n')
        {
            tamanho++;
        }
    
    for(int i = 0 ; i < tamanho / 2 ; i++)
        {
            if(string[i] != string[tamanho - 1 - i])
            {
                palindromo = 0 ;
                break;
            }
        }

        if(palindromo)
        {
            puts( "palinmodro");
        }

        else
        {
            puts ("ne nao");
        }
    
   
    return 0 ;
}