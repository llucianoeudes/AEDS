#include <stdio.h>

int lerQuantidadeMercadorias() {
    int qtd;
    printf("Digite o numero de mercadorias: ");
    scanf("%d", &qtd);
    return qtd;
}

int main() {
    int qtd = lerQuantidadeMercadorias();
    int preco;
    int maiorAcima = 0;    // Armazena o maior preço > 2000
    int maiorAbaixo = 0;   // Armazena o maior preço < 2000

    for(int i = 0; i < qtd; i++) {
        printf("Digite o preco da mercadoria %d: ", i+1);
        scanf("%d", &preco);

        if(preco > 2000) {
            if(preco > maiorAcima || maiorAcima == 0) {
                maiorAcima = preco;
            }
        } else {
            if(preco > maiorAbaixo || maiorAbaixo == 0) {
                maiorAbaixo = preco;
            }
        }
    }

    // Resultados
    printf("\nRESULTADOS:\n");
    if(maiorAcima > 0) {
        printf("Maior preco ACIMA de 2000: %d\n", maiorAcima);
    } else {
        printf("Nenhum preco acima de 2000 foi digitado.\n");
    }

    if(maiorAbaixo > 0) {
        printf("Maior preco ABAIXO de 2000: %d\n", maiorAbaixo);
    } else {
        printf("Nenhum preco abaixo de 2000 foi digitado.\n");
    }

    return 0;
}