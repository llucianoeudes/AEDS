// ler as horas e minutos e printar quantos minutos se passaram desde o incio do dia
#include <stdio.h>
#include <math.h>

int main ()
    {
        int hora;
        int minutos;
        int horaAtual;

        printf("\nDigite Quantas horas eh agora:\n");
        scanf("%d",&hora);

        printf("\n quantos minutos acompanham a hora ?\n");
        scanf("%d",&minutos);
        
        horaAtual = (hora * 60 ) + minutos ; 

        printf("\n se passaram desde o inicio do dia %d minutos \n",horaAtual);

        return 0 ; 

    }