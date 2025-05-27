#include <stdio.h>

int x = 3;

void metodo1()
{

    x++;
}

void metodo2(int x)
{
    x++;
}

int main()
{
    printf("primeiro %d\n", x);
    x++;

    printf("segundo %d\n", x);

    metodo1();
    printf("terceiro %d\n", x);

    metodo2(x);
    printf("quarto  %d\n", x);

    return 0;
}