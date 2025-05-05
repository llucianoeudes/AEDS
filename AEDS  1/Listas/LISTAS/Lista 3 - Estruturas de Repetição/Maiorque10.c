
#include <stdio.h>

int FuncaoLerInteiro()
{
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    return num;
}

int FuncaoLerFloat()
{
    float num;
    printf("Digite um numero inteiro:\n");
    scanf("%f", &num);
    return num;
}

int main()
{
    int numInteiro = FuncaoLerInteiro();
    int numFloat = FuncaoLerFloat();

    while (numFloat > 10)
    {
        printf("%d", numFloat);
        numFloat - 2;
    }

    while (numInteiro < 10)
    {
        printf("%d %d", numFloat, numInteiro);
        numInteiro++;
    }
}