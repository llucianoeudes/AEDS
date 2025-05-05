
//fazer um programa que le dois numeros inteiros e calcular e imprimir a diferença desse numeros.Depois se o segundo numero for 
//diferente de zero,fazer a divisão do primeiro pelo segundo

#include <stdio.h>

    int FuncaoLer(int num)
    {
        printf("Digite um numero:\n");
        scanf("%d",&num);
        return num ; 
    }
   

    int CalculaDifer(int num1,int num2)
    {
        int diferenca;
        diferenca = num1 - num2 ;
        return diferenca;
    }

    int main()
    {
        printf("\n Diferenca de Valores \n");

        int num1 = FuncaoLer(num1);
        int num2 = FuncaoLer(num1);

        int diferenca = CalculaDifer (num1,num2);
        
        printf("\n A diferenca eh de %d \n" , diferenca);
        
        int resultado;

        if (num2 != 0)
        {
            resultado = num1 / num2 ;
            printf("O resultado da divisao do primeiro pelo segundo eh de %d", resultado);
        }
    }