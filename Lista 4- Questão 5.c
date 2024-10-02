#include <stdio.h>
int main()
{
 int opcao;
 float num1;
 float num2;
 float resultado;

 do{printf("Calculadora\n\n"); 
    printf("\n 0-  SAIR DO PROGRAMA");
    printf("\n 1- +ADICAO");
    printf("\n 2- -SUBTRAO");
    printf("\n 3- /DIVISAO");
    printf("\n 4- *MULTIPLICACAO");
    printf("\n digite sua opcao");

    scanf("%d\n",&opcao);

  if(opcao != 0)
  {
    printf("\ndigite o primeiro termo");
    scanf("%f",&num1);
    printf("\ndigite o segundo termo");
    scanf("%f\n",&num2);
  }

  switch(opcao)
    {
      case 0:
      printf("\n obrigado por usar o meu programa");
      break;

      case 1:
      resultado = num1 + num2 ;
      printf("o resultado dessa adição e %f",resultado);
      break;

      case 2:
      resultado = num1 - num2 ;
      printf("o resultado dessa subtracao e %f",resultado);
      break;

      case 3:
      resultado = num1 * num2 ;
      printf("o resultado dessa multiplicacao e %f",resultado);
      break;

      case 4:
      if (num2 != 0) {
      resultado = num1 - num2 ;
      printf("o resultado dessa divisao e %f",resultado);
      }
      else {
        printf("\n\aERRO");
      }
      break;

      default:
      printf("Opcao invalida.\n");
      break;
    }
    }while (opcao!=0);
  return 0;

}
