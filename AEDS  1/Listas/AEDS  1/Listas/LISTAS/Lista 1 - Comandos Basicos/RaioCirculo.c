#include <stdio.h>
#include <math.h>

// ler o raio de um circulo e falar a area e o perimetro

void Menu()
    {
        printf("\nPrograma para ler o raio de um circulo e exibir area e perimetro\n");
    }

float Raio() 
    {
        float raio;
        printf("\nDigite um  numero:\n");
        scanf("%f",&raio);

        return raio;
    }

float AreaCirculo(float raio)
    {
        float area;
        area = 3.14 * pow(raio,2); 

        return area;
    }    

 float PerimetroCirculo (float raio)
    {
        float perimetro;
        perimetro = 2 * 3.14 * raio; 

        return perimetro;
    }    

int main()
    {
        Menu();

        float num = Raio();
        float area1 = AreaCirculo(num);
        float perimetro1 = PerimetroCirculo(num);

        
        printf("\n A area de %f eh %f\n",num ,perimetro1 );
        printf("\n A area de %f eh %f\n",num ,area1  );

    }
