#include <stdio.h>
#include <math.h>

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
        double Numerador;
        double Denominador;
        double Result; 

        int x;
        printf("Digite o valor de X:\n");
        scanf("%d", &x);
        
            Numerador = par(numero) * pow(x, numero);
            Denominador = Impar(numero);

        Result = Numerador / Denominador;
        return Result;
    }


int main()
{
    int Num = FuncaoLerInteiro();
    double Elevado = parSobreImpar(Num);
    
    printf("\n O termo %d da seguencia eh %lf\n",Num, Elevado);
    return 0;
}