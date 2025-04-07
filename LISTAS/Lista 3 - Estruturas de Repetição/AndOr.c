#include <stdio.h>
int LerNumeros()
{
    int num1;
    printf("\n digite um numero \n");
    scanf("%d", &num1);

    return num1;
}

int main()
{
    int numero = LerNumeros();

    int result;

    for (int i = 1; i < numero; i++)
    {
        result = 2 * i + 1;

        if (result % 3 == 0 && result % 5 == 0 || result % 7 == 0)
        {
            printf("%d,", result);
        }
    }
}
