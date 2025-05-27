
// um determinado numero da pg
#include <math.h>
#include <stdio.h>
#include <stdio.h>

int main() {
    int razao, primeiroTermo, termoDesejado, pg = primeiroTermo;

    printf("\nDIGITE A RAZAO:\n");
    scanf("%d", &razao);

    printf("\nDIGITE O PRIMEIRO TERMO:\n");
    scanf("%d", &primeiroTermo);

    printf("\nDIGITE O TERMO QUE DESEJA CALCULAR:\n");
    scanf("%d", &termoDesejado);

    // Calcula o termo desejado usando multiplicação em loop
    for (int i = 1; i < termoDesejado; i++) {
        pg *= razao;
    }

    printf("\nO %d° termo da PG eh: %d\n", termoDesejado, pg);
    return 0;
}