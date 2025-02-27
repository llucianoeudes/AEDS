#include <stadio.h>

//exercicios calculadora

int main()
{
	int resultado;
	int opcao;
	int num1;
	int num2;
 
	printf("\nCalculadora Luciano Eudes\n");
	printf("\nMenu\n");
	printf("1- Multiplicacao\n");
	printf("2- Divisao\n");
	printf("3- Soma\n");
	printf("4- Subtracao\n");
	
	printf("Digite sua opcao\n");
	scanf("%d",&opcao);
	
	printf("Digite o primeiro termo\n");
	scanf("%d",&num1);
	
	printf("Digite o segundo termo\n");
	scanf("%d",&num2);
	
	switch(opcao)
	{
		case 1: 
		resultado = num1 * num2;
		printf("resultado eh igual a %d",resultado);
		break;
		
		case 2:
		resultado = num1 / num2;
		printf("resultado eh igual a %d",resultado);
		break;
		
		case 3:
		resultado = num1 + num2;
		printf("resultado eh igual a %d",resultado);
		break;
		
		case 4:
		resultado = num1 - num2 ; 
		printf("resultado eh igual a %d",resultado);
		break;
		
		default:
		printf("\n a opcao selecionada nao esta dentro do menu, coloque um valor valido e digite o comando novamente\n");
	}	
}