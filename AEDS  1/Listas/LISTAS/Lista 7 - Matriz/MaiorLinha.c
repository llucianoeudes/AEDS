#include <stdio.h>

float MaiorValorMatriz(float Matriz[][100], int linha, int coluna)
    {
        float Maior = Matriz[linha][0];
        
        for(int i = 1; i < coluna ; i++)
            {
                if(Matriz[linha][j] > Maior)
                    {
                        Maior = Matriz[linha][j];
                    }
            }
    }




    int main()
    {
        int colunas;
        int linhas;
        float matriz[linhas][colunas];
        float numero;


        //pede ao usuario as colunas e as linhas da matriz

        printf("\n Digite o numero de colunas da sua matriz:\n");
        scanf("%d",&colunas);

        printf("\n Digite o numero de linhas da sua matriz:\n");
        scanf("%d",&linhas);
    
        // preencher a matriz

        for(int i = 0 ; i < linhas ; i++)
            {
                for(int j = 0 ; j < colunas ; j++)
                    {
                        printf("\n Digite um numero para preencher a matriz:\n");
                        scanf("%f",&numero);
                    }
            }
    }