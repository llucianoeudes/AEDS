// ler o valor do salario minimo e o salario de uma pessoa , calcular e mostar quantos salarios minimos essa pessoa ganha

#include <stdio.h>
#include <math.h>

int main()
    {
        float salarioMin;
        float meuSalario;
        float quantSalario;

        printf("\nDigite o valor do salario minimo da sua região:\n");
        scanf("%f",&salarioMin);
        
        printf("\nDigite o valor seu salario minimo:\n");
        scanf("%f",&meuSalario);

        if(meuSalario < salarioMin )
        {
        printf("\nVoce nao recebe nem um salario minimo, procure as leis trabalhistas:\n");
        }

        quantSalario = meuSalario / salarioMin ;

        printf("\nvOCE RECEBE APROXIMADAMENTE %1.0f salarios \n",quantSalario);
    }
