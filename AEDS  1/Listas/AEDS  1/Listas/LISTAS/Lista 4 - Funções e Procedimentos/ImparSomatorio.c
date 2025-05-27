#include <stdio.h>

double umSobreImpar(int numero)
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

double SomatorioImpar(int numero)
    {
        double Somatorio = 0 ;
        for(int i = 1 ; i <= numero ; i++)
            {
                Somatorio = Somatorio + umSobreImpar(i);
            }
            return Somatorio;
    }

int main()
{
    int Num = FuncaoLerInteiro();
    double Somatorio = SomatorioImpar(Num);
    printf("\n O Somatorio da seguencia eh 1 / %lf\n",Somatorio);
    return 0;
}