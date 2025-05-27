#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];

    puts("Digite seu nome");
    fgets(nome,sizeof(nome),stdin);
    printf("%.4s",nome);
   
    return 0 ;
}