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
    printf("%d", result);
    return result;
}

double parSobreImpar(int numero)
    {
        double parSobreImpar ;
        int Numerador = par(numero);
        double Denominador = Impar(numero);
        
        parSobreImpar = Numerador / Denominador ;
        return parSobreImpar;
    }


int main()
{
    int Num = FuncaoLerInteiro();
    double ParSobreImpar = parSobreImpar(Num);
    
    printf("\n A fracao par sobre impar resulta em %lf\n", ParSobreImpar);
    return 0;
}