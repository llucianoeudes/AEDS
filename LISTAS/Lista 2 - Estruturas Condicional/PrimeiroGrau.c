#include <stdio.h>

int main() {
    float a, b, x;

    printf("Digite o coeficiente 'a': ");
    scanf("%f", &a);

    printf("Digite o coeficiente 'b': ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("A equação é sempre verdadeira (0 = 0).\n");
        } else {
            printf("A equação não tem solução.\n");
        }
    } else {
        x = -b / a;
        printf("A raiz da equação é: %.2f\n", x);
    }

    return 0;
}