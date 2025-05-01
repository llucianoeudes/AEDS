//Ler um número inteiro.
//• Se ele for 1 ou 2, ler as medidas dos lados de um retângulo, calcular e escrever a área
//do círculo circunscrito a este retângulo.
//• Se for 3 ou 4 ou 5, ler a medida do raio de um círculo. Calcular e escrever a área do
//quadrado inscrito no mesmo.
//• Se for outro número inteiro que não estes, ler a medida do lado de um quadrado,
//calcular e escrever a área da coroa circular formada pelo círculo inscrito e circunscrito
//a este quadrado

#include <stdio.h>
#include <math.h>

int Numero() // função que le o numero que o usuario deseja saber
    {
        int num;
        printf("\nDigite um  numero inteiro:\n");
        scanf("%d",&num);

        return num;
    }

void Menu() //função que apresenta ao usuario as alternativas que ele pode escolher para execultar no programa 
    {
        printf("\nMENU\n");
        printf("\nDIGITE O NUMERO PARA FAZER A FUNCAO ESPERADA:\n");
        printf("\n 1 OU 2 - CALCULAR A AREA DE UM CIRCULO CIRCUNSCRITO A UM RETANGULO \n");
        printf("\n 3,4 ou 5 - CALCULAR A AREA DO QUADRADO INSCRITO NO MESMO\n");
        printf("\n QUALQUER OUTRO VALOR - CALCULAR A AREA DA COROA CIRCULAR FORMADA PELO CIRCULO INSCRITO E CIRCUNSCRITO\n");
    }


float AreaCirculo(float largura , float comprimento)  // função que calcula a area do circulo circunscrito a este retangulo
    {
         float diagonal;
         diagonal = sqrt(pow(comprimento , 2) + pow(largura,2));

         float raio;
         raio = diagonal / 2;

         float area;
         area = 3.14 * pow(raio,2);

         return area;
    }

    
float AreaQuadrado(float raio)  // função que calcula a area do quadrado inscrito no mesmo

    {
       float diametro;
        diametro = 2 * raio;

       float lado;
       lado = sqrt(pow(diametro,2) / 2);

        float area;
        area = pow(lado,2);
         
        return area;
    }


float AreaCoroa (float lado)
    {
    
        float raioInscrito;
        raioInscrito = lado / 2 ;

        float diagonal;
        diagonal = lado * sqrt(2);

        float raioCircunscrito;
        raioCircunscrito = diagonal / 2 ;

        float AreaInscrito = 3.14 * pow(raioInscrito,2);
        float AreaCircunscrito = 3.14 * pow(raioCircunscrito,2);
        float CoroaCircular =AreaCircunscrito - AreaInscrito;

        return CoroaCircular;
        

    }

int main ()
{
    Menu(); // apresentação;

    int NumeroInt = Numero();

    if( NumeroInt == 1 || NumeroInt == 2)
    {
        float largura;
        float comprimento;
        
        printf("\n Digite a largura do retangulo:\n");
        scanf("%f",&largura);
        
        printf("\n Digite o comprimento do retangulo:\n");
        scanf("%f",&comprimento);

        float resultado = AreaCirculo(largura , comprimento);

        printf("\n A AREA DO CIRCULO CIRCUNSCRITO ESTE RETANGULO EH APROXIMADAMENTE %f\n",resultado);
    }
    
    
    else if (NumeroInt == 3 || NumeroInt == 4 || NumeroInt == 5)
    {
        float raio;
        printf("\n Digite o valor do raio:\n");
        scanf("%f",&raio);

        float resultado = AreaQuadrado(raio);

        printf("\n  A AREA DO QUADRADO INSCRITO NO CIRCULO EH %f\n", resultado);

    }


    else
    {
        float lado;
        
        printf("\n Digite a medida de um lado do quadrado:\n");
        scanf("%f",&lado);
        
        float resultado = AreaCoroa(lado);

        printf("\n A AREA DA COROA CIRCULAR EH %f\n", resultado);
    }

}    

