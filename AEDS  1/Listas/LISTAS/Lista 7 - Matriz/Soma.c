#include <stdio.h>

int main()
{
    int matriz[2][3];
    int matrizTrans[3][2];
    int SomaMatriz = 0; 
    int SomaTrans = 0; 
    int Numero;

    //preencher a primeira matriz 

    for(int linhas = 0 ; linhas < 2 ; linhas++)
    {
        for(int colunas = 0 ; colunas < 3 ; colunas++)
        {
            printf("Digite o numero que voce quer que ocupe na posição MATRIZ[%d][%d]",linhas,colunas);
            scanf("%d",&Numero);
            matriz[linhas][colunas] = Numero;
            
            SomaMatriz += Numero; 
        }
    }

    //preenche a segunda matriz 
    //teste

    for(int linhas = 0 ; linhas < 3; linhas++)
    {
        for(int colunas = 0 ; colunas < 2 ; colunas++)
        {
            printf("Digite o numero que voce quer que ocupe na posição MATRIZ[%d][%d]",linhas,colunas);
            scanf("%d",&Numero);
            matriz[linhas][colunas] = Numero;
            
            SomaTrans += Numero; 
        }
    }

        printf("A soma total das matrizes eh: %d \n", SomaMatriz + SomaTrans);
}

