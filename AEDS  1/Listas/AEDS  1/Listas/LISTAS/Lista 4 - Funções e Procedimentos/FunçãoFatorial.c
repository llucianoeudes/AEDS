#include <stdio.h>

int FuncaoLerInteiro()
{
    int num;
    printf("Digite qual termo vc deseja saber:\n");
    scanf("%d", &num);
    return num;
}

int Fatorial(int numero)
{
    int fatorial = 1;

    if (numero < 0)
    {
        printf("Numero Invalido\n");
    }

    else if (numero == 0)
    {
        fatorial = 0;
    }

    else
    {
        for (int i = 1; i <= numero; i++)
        {
            fatorial = fatorial * i;
        }
    }
    return fatorial;
}

int main()
{
    int Num = FuncaoLerInteiro();
    int Fatorial1 = Fatorial(Num);

    printf("\n O fatorial de %d eeh %d\n", Num, Fatorial1);
    return 0;
}