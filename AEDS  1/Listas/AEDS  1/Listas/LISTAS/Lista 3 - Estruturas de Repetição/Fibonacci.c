// PROGRAMA PARA SABER FIBONACCI DE UM DETERMINADO TERMO DA SEGUENCIA

#include <stdio.h>

int Fibonacci(int posicao)
    {
        if (posicao == 1) return 1 ;
        if (posicao == 0) return 0 ;

        int anterior1 = 1;
        int anterior2 = 0;
        int fibonacci;
        
        //fibonacci = anterior1 + anterior2;

        for( int i = 2 ; i <= posicao ; i++) // a seguencia se inicia com 2 porque ja sabemos a posição o e 1 
            {
                fibonacci = anterior1 + anterior2;
                anterior2 = anterior1;
                anterior1 = fibonacci;
            }

            return fibonacci; 
    }

int main() 
    {
        int posicao1;

        printf("\n Digite a posicao que voce deseja saber o Fibonacci:\n");
        scanf("%d",&posicao1);

        if(posicao1 < 0 )
            {
                printf("\nNAO HA FIBONACCI DE NUMEROS NEGATIVOS\n");
            }

        else 
            {
                printf("\nO VALOR DE FIBONACCI NA POSICAO %d EH %d\n",posicao1, Fibonacci(posicao1));
            }    
    }
