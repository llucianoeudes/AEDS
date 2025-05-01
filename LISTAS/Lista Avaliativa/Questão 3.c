//Escreva um procedimento que receba um número inteiro positivo e verifica se o número
//é um número primo ou não. O procedimento deve escrever na tela “É primo.” ou “Não é
//primo.”

#include <stdio.h>
int FuncaoLerInteiro()
{
    int num;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &num);
    return num;
}

void Primos (int Numero)
{
    if (Numero < 0)
    {
        printf("\n SEU NUMERO NAO EH PRIMO\n");
    }

    for (int i = 2; i < Numero; i++)
    {
        if (Numero % i == 0)
        {
            printf("\n SEU NUMERO NAO EH PRIMO\n");
        }
    }
    printf("\n %d SEU NUMERO EH PRIMO\n", Numero);
}

int main()
{
    int Numero = FuncaoLerInteiro();
    Primos(Numero);
    
    return 0;
}