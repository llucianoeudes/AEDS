#include <stdio.h>

int main()
{
    int salarioMinimo;
    int MaiorSalario = 0;
    int MenorSalario = 999999;
    int Funcionarios;
    int ContadorSalarioMin;
    float Percentual;
    int Salario;

    printf("\nDigite o valor do salario minimo:\n");
    scanf("%d", &salarioMinimo);

    printf("\nDigite o numero de funcionarios:\n");
    scanf("%d", &Funcionarios);

    for (int i = 0; i < Funcionarios; i++)
    {
        printf("\nDigite o valor do salario que vc recebe:\n");
        scanf("%d", &Salario);

        if (Salario == salarioMinimo)
        {
            ContadorSalarioMin++;
        }

        if (Salario > MaiorSalario)
        {
            MaiorSalario = Salario;
        }

        if (Salario < MenorSalario)
        {
            MenorSalario = Salario;
        }
    }
    Percentual = (ContadorSalarioMin / Funcionarios) * 100;

    printf("\nO percentual eh de %f \n", Percentual);
    printf("\nO maior salario eh %d\n", MaiorSalario);
    printf("\nO menor salario eh %d\n", MenorSalario);
}