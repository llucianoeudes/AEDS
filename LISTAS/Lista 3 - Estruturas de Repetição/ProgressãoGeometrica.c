
// um determinado numero da pg
#include <math.h>
#include <stdio.h>

int main()
{
    int razao;
    int primeiroTermo;
    int termo;
    int pg;

    printf("\nDIGITE A SUA RAZAO:\n");
    scanf("%d", &razao);

    printf("\nDIGITE O SEU PRIMEIRO TERMO:\n");
    scanf("%d", &primeiroTermo);

    printf("\nDIGITE O TERMO DA SEGUENCIA QUE VC DESEJA SABER:\n");
    scanf("%d", &termo);

    pg = primeiroTermo * pow(razao, termo - 1);

    printf("\n Sua pg na posicao %d eh %d \n", termo, pg);
}
