//Faça um programa que leia números inteiros e positivos do usuário, um número por vez,
//e mostre o maior e o menor número. Não sabemos, a priori, quantos números o usuário
//deseja digitar. O programa deve parar de ler números quando o usuário digitar algum número negativo.

#include <stdio.h>

int main()
    {
        printf("\nO programa deve parar de ler números quando o usuário digitar algum número negativo\n");

        int Numero;
        int MaiorNumero = 0 ;
        int MenorNumero = 9999999;

        while(Numero >= 0)
        {
            printf("\n Digite um numero inteiro e positivo:\n");
            scanf("%d",&Numero);

            if (Numero > MaiorNumero)
            {
                MaiorNumero = Numero;
            }
            
            if (Numero < MenorNumero)
            {
                MenorNumero = Numero; 
            }
    
          }
          
          printf("\nO maior numero eh : %d\n", MaiorNumero);
        printf("\nO menor numero eh : %d\n", MenorNumero);
    }