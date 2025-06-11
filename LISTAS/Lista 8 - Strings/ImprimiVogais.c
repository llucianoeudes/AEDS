#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int contador = 0 ;
    int contadorVogais = 0 ;


    puts("Digite seu texto");
    fgets(string, sizeof(string),stdin);

    while(string[contador] != '\0' && string[contador] != '\n')
        {
            contador++;
        }
    
        for(int i = 0 ; i < contador ; i++)
            {
                if(string[i] == 'a' ||string[i] == 'e'|| string[i] == 'i'|| string[i] == 'o'||string[i] == 'u')
                    {
                        contadorVogais++;
                    }
            }
        
        printf("No seu texto ah %d vogais", contadorVogais);
    
    return 0 ;
}