#include <stdio.h>

int FuncaoLerInteiro()
{
    int num;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &num);
    return num;
}

int par(int num)
{
    int result;
    result = 2 * num;
    printf("%d,", result);
    return result;
}

void mostrarParesDecrescente(int numero)
{
    for (int i = numero; i >= 0; i--)
    {
        par(i);
    }
}

int main()
{
    int Numero = FuncaoLerInteiro();
    mostrarParesDecrescente(Numero);
}