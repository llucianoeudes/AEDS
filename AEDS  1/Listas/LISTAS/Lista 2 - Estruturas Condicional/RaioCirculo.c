//Ler um caractere e a medida do raio de um círculo.
// Se o caractere lido for T, calcular e escrever a área do triângulo inscrito.
//• Se for Q, calcular e escrever a área do quadrado inscrito.
//• Se for H, calcular e escrever a área do hexágono inscrito.
//• Se for outro caractere que não estes, escrever uma mensagem apropriada.

#include <stdio.h>
#include <math.h>

void Menu()
    {
        printf("\nMENU\n");
        printf("\nCALCULADORA INTELIGENTE\n");
        printf("\nDIGITE UMA LETRA \n");
        printf("\n T, calcular e escrever a área do triângulo inscrito.\n");
        printf("\n Q, calcular e escrever a área do quadrado inscrito.\n");
        printf("\n H, calcular e escrever a área do hexágono inscrito\n");
    }


char DigiteLetra()
    {
        char letrinha;
        printf("\nDIGITE UM LETRA\n");
        scanf(" %c",&letrinha);

        return letrinha;
    }


float Raio() 
    {
        float raio;
        printf("\nDigite um  numero inteiro:\n");
        scanf("%f",&raio);

        return raio;
    }

float TrianguloEqui (float raio)
    {
        float area = (3 * sqrt(3) / 4) * pow(raio,2) ;

        return area;
    }

float QuadradoInsc (float raio)
    {
        float area = 2 * pow(raio,2);

        return area;
    }    

float HexagonoRegu (float raio)
    {
        float area = (3 * sqrt(3) / 2 ) * pow(raio,2) ; 
       
        return area;
    }



int main()
    {
        Menu();

        char letrinha = DigiteLetra();
        float raio = Raio();

        if( letrinha == 'T' || 't' )
        {
           float resultado = TrianguloEqui(raio) ;
           printf("área do triângulo inscrito eh %f\n", resultado);
        }

        else if ( letrinha == 'Q' || 'q' )
        {
           float resultado = QuadradoInsc(raio) ;
           printf("a área do quadrado inscrito eh %f\n", resultado);
        }

         else if ( letrinha == 'H' || 'h' )
        {
           float resultado = HexagonoRegu(raio) ;
           printf("a área do hexágono inscrito eh  %f\n", resultado);
        }

        else 
        {
            printf("\nMANO LE O MENU ZÉ\n");
        } 
    }