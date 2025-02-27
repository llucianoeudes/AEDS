#include <stdio.h>
//numero par o impar 
	int main()
	{
		
	printf("\nIMPAR OU PAR\n");
	int num;
	
	printf("Digite um numero:\n");
	scanf("%d",&num);
	
	if( num % 2 == 0 )
	{
		printf("EH PAR");
    }
	
	else 
	{
		printf("EH IMPAR");
	}
	
	}