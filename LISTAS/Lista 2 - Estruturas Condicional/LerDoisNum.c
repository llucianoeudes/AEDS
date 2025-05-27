//Ler dois valores reais. Calcular e escrever o quociente do primeiro pelo segundo se este or diferente de zero

#include <stdio.h>

    float lerNumero ()
    {
        float num;
        printf("\nDigite um numero:\n");
        scanf("%f",&num);
        
        return num;

    }

    float Calcula(float val1 , float val2)
    {
            float result = val1 / val2 ;
            return result;

    }

    int main()
    {
        float valor1 = lerNumero ();
        float valor2 = lerNumero ();
        
        if(valor1 && valor2 != 0 )
        {
        float resultado = Calcula(valor1 , valor2); 
        printf("\n O RESULTADO EH %f \n", resultado);
        }
        
        
        
        
        
        
        return 0;
    }
