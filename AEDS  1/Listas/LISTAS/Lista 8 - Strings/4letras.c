#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    
    texto[strcspn(texto, "\n")] = '\0';

    printf("As 4 primeiras letras sao: ");
    for (int i = 0; i < 4 && texto[i] != '\0'; i++) {
        printf("%c", texto[i]);
    }

    printf("\n");
    return 0;
}