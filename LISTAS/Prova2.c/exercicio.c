//  questao prova 


#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int contador = 0 ;
    int contadorMin = 0 ;


    puts("Digite seu texto");
    fgets(string, sizeof(string),stdin);

    while(string[contador] != '\0' && string[contador] != '\n')
        {
            contador++;
        }
    
        for(int i = 0 ; i < contador ; i++)
            {
                if(string[i] >= 'a' && string[i] <= 'z')
                    {
                        contadorMin++;
                    }
            }
        
        printf("No seu texto ah %d  letras minusculas", contadorMin);
    
    return 0 ;
}