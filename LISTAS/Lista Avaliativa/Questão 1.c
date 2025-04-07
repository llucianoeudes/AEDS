// Escreva um programa em C que leia 20 números do usuário, um número por vez. Após a
// leitura de todos os números, o programa deve exibir o maior, o menor número entre eles e a média

#include <stdio.h>

int main()
{
    int MaiorNumero = 0;
    int MenorNumero = 99999999;
    int Numero;
    int Soma = 0;
    float Media;

    for (int i = 1; i <= 20; i++)
    {
        printf("\nDigite um numero:\n");
        scanf("%d", &Numero);

        if (Numero > MaiorNumero)
        {
            MaiorNumero = Numero;
        }
        if (Numero < MenorNumero)
        {
            MenorNumero = Numero;
        }

        Soma = Soma + Numero;
    }
    Media = (float)Soma / 20;

    printf("\nO maior numero eh : %d\n", MaiorNumero);
    printf("\nO menor numero eh : %d\n", MenorNumero);
    printf("\n A media eh: %f \n", Media);
}
