//Escreva uma função que receba um número inteiro positivo N e retorne o somatório dos
//números inteiros positivos pares menores do que N. Exemplo: 19 = 1 + 9 = 10

#include <stdio.h>

int Somatorio (int Numero)
    {
        int Somatorio = 0 ;
        int Digito;

        while (Numero != 0 )
        {
            Digito = Numero % 10 ; 
            Somatorio = Somatorio + Digito;
            Numero = Numero / 10 ;
        }

        return Somatorio;
    }

    int FuncaoLerInteiro()
    {
        int num;
        printf("Digite um numero inteiro e positivo:\n");
        scanf("%d", &num);
        return num;
    } 

    int main()  
    {
        int Numero = FuncaoLerInteiro();
        int Somatorio1 = Somatorio(Numero);

        printf(" A soma dos algarismo do seu numero eh %d \n",Somatorio1);
    }