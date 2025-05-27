#include <stdio.h>

double Impar(int numero)
{
    int result;
    result = (2 * numero + 1);
    return result;
}

int FuncaoLerInteiro()
{
    int num;
    printf("Digite qual termo vc deseja saber:\n");
    scanf("%d", &num);
    return num;
}

int par(int num)
{
    int result;
    result = 2 * num;
    return result;
}

double parSobreImpar(int numero)
{
    double parSobreImpar;
    double Numerador = par(numero);
    double Denominador = Impar(numero);

    parSobreImpar = Numerador / Denominador;
    return parSobreImpar;
}

double SomatorioParSobreImpar(int numero)
{
    double Somatorio = 0;
    for (int i = 1; i <= numero; i++)
    {
        Somatorio = Somatorio + parSobreImpar(i);
    }

    return Somatorio;
}

int main()
{
    int Num = FuncaoLerInteiro();
    double Somatorio = SomatorioParSobreImpar(Num);

    printf("\n O somatorio de %d enisimo termo da seguencia eh %lf\n", Num, Somatorio);
    return 0;
}