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

int main()
{
    int Num = FuncaoLerInteiro();
    double Impar = umSobreImpar(Num);
    printf("\n O termo %d da seguencia eh 1 / %lf\n", Num, Impar);
    return 0;
}