#include <stdio.h>

//login 

int main(){

    int anoNasceu;
    int senha;

    printf("\nLOGIN ESCOLA\n");
    printf("\nENTRE COM SEUS DADOS\n");
    printf("DIGITE O ANO QUE VOCE NASCEU:\n");
        
            scanf("%d",&anoNasceu);

            if (anoNasceu < 2000 || anoNasceu > 2025)
            {
                printf("Voce nao possui Cadastro nessa instituição\n");
            }
    
     printf("DIGITE SUA SENHA:\n");
            
            scanf("%d",&senha);

            if( senha != 1234)
            {
                printf("Senha invalida\n");
            }

            else 
            {
                printf("\nseja bem vindo estudante  , voce eh realmemte um estudante\n");

        
                printf("\nEscolha uma das opcoes:\n");
                printf("\nMENU\n");
                printf("1- CALCULADORA\n");
	            printf("2- SABER SE O NUMERO EH IMPAR OU PAR\n");
	            printf("3- VER MES REFERENTE AO NUMERO\n");
	            printf("4- MEU PERFIL\n");

                int opcao1;
                printf("Digite sua opcao\n");
	            scanf("%d",&opcao1);

	        if (opcao1 = 1)
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
           
            if(opcao1 = 2)
            {
                printf("\nIMPAR OU PAR\n");
	int num;
	
	printf("\nDigite um numero:\n");
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


            if (opcao1 = 3)
            {
                int mes;
	
	printf("\n QUAL MES REPRESENTA O NUMERO\n");
	printf("digite um numero:\n");
	scanf("%d",&mes);
	

	switch(mes)
	{
		case 1 : 
		printf("janeiro\n");
		break;
		
		case 2 : 
		printf("fevereiro\n");
		break;
		    
		case 3 : 
		printf("marco\n");
		break;
		
		case 4 : 
		printf("abril\n");
		break;
		
		case 5 : 
		printf("maio\n");
		break;
		
		case 6 : 
		printf("junho\n");
		break;
		
		case 7 : 
		printf("julho\n");
		break;
		
		case 8 : 
		printf("agosto\n");
		break;
		
		case 9 : 
		printf("setembro\n");
		break;
		
		case 10 : 
		printf("outubro\n");
		break;
		
		case 11 : 
		printf("novembro\n");
		break;
		
		case 12: 
		printf("dezembro\n");
		break;
		
		default:
		printf("voce colocou um numero invalido, recomerce e digite um numero de 1 a 12");
}
            }
            
            
        if (opcao1 = 4)
        {
          printf("SEU NOME EH LUCIANO EUDES E VC E MUITO LINDO ");
        }
        
       
        
        
        
        
        }
    
    return;
}