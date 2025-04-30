#include <stdio.h>

int main() {
    int vetor[100], n, i, j, temp;

    printf("Informe a quantidade de elementos (máx 100): ");
    scanf("%d", &n);

    // Entrada dos elementos do vetor
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordenação por método da bolha (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibição do vetor ordenado
    printf("\nVetor ordenado em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
