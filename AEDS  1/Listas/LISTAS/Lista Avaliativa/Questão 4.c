// Escreva uma função que receba um número inteiro positivo e retorne a quantidade de
//algarismos pares que o constitui. Exemplo: 19282 possui dois algarismo pares 2 e 2.

#include <stdio.h>

int ContaPares(int Numero)
    {
        int digito;
        int ContadorDePar = 0;

        while (Numero != 0)
        {
        
            digito = Numero % 10 ;
        
            if( digito % 2 == 0)
            {
                ContadorDePar++;
            }
            Numero = Numero / 10 ;
        }
        return ContadorDePar;

    }

    int FuncaoLerInteiro()
    {
        int num;
        printf("Digite um numero inteiro e positivo:\n");
        scanf("%d", &num);
        return num;
    }

    int main ()
    {
        int Numero = FuncaoLerInteiro();
        int Contador = ContaPares(Numero);
        printf("No seu numero ah %d numeros pares",Contador); 
    }