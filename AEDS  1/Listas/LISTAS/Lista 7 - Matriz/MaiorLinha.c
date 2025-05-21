#include <stdio.h>

// Função para encontrar o maior valor de uma linha da matriz
float MaiorValorMatriz(float Matriz[][100], int linha, int coluna) {
    float Maior = Matriz[linha][0]; // Começa com o primeiro elemento da linha

    for (int i = 1; i < coluna; i++) {
        if (Matriz[linha][i] > Maior) {
            Maior = Matriz[linha][i];
        }
    }
    return Maior;
}

int main() {
    int colunas;
    int linhas;
    float matriz[100][100]; // Define tamanho fixo

    // Pede ao usuário as colunas e linhas da matriz
    printf("\nDigite o número de colunas da sua matriz: ");
    scanf("%d", &colunas);

    printf("\nDigite o número de linhas da sua matriz: ");
    scanf("%d", &linhas);

    // Preencher a matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("\nDigite um número para preencher matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Imprimir a matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    // Pede ao usuário qual linha ele quer consultar
    int linha;
    printf("\nDigite o número da linha (de 0 até %d) que você deseja saber o maior valor: ", linhas - 1);
    scanf("%d", &linha);

    // Verifica se a linha existe
    if (linha < 0 || linha >= linhas) {
        printf("Linha inválida.\n");
    } else {
        float resultado = MaiorValorMatriz(matriz, linha, colunas);
        printf("\nO maior valor da linha %d é %.2f\n", linha, resultado);
    }

    return 0;
}
