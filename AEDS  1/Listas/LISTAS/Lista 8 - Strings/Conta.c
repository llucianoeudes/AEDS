#include <stdio.h>

int main() {
    char texto[100];
    int i = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    
    while (texto[i] != '\0' && texto[i] != '\n') {
        i++;
    }

    printf("A string possui %d caracteres.\n", i);

    return 0;
}
