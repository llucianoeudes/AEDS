/*#include <stdio.h>
int main()
{
  float pare; \\variavel qeu armazena a flag
  while (pare != 8)\\ <-- (flag) condição de parada da estrutura de repetição
    {
      for(int i= 0 ; i < 3 ; i++){
      printf("hello world\n");
    }
      scanf("  %f",&pare);
    }
return 0;
}*/
/*#include <stdio.h>
int main(){
  char pare;
  do{
    printf("hello world\n");
    scanf(" %c",&pare);
  }
    while(pare != 's');
  return 0;
}*/
// do while faz pelo menos uma interação

// INICIO DA LISTA 4
// com teste no inicio
/*#include <stdio.h>
int main(){
  int i = 10;
 while(i>=1){
   printf("%d\n",i);
  i--;
 }
  return 0;
  }*/
// com teste no final
/*#include <stdio.h>
 int main()
{
   int i=10;
   do{
     printf("%d\n",i);
       i--;
   }while(i>=1);

     return 0;
      }*/

/* #include<stdio.h>
int main(){
  int i=10;
  for(int i = 10 ; i>=1 ;i--){
    printf("%d\n",i);
  }
  return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

int main()
{
  float pesoIdeal;
  float altura;
  char  sexo;
  bool erro;
  do{
    scanf("%f", &altura);
    erro = altura < 0 || altura > 2.5;
    if (erro){
      printf("ERRO");
    } 
  }while(erro);
  do{
    scanf(" %c",&sexo);
    erro = sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f';
    if(erro){
      printf("ERRO");
    } 
  }while(erro);

  bool ehfeminino;
  ehfeminino = (sexo == 'F' || sexo == 'f');
if (ehfeminino)
{
  pesoIdeal = (62.1 * altura) - 44.7;
  printf("seu peso ideal eh %f",pesoIdeal);
}

  bool ehmasculino;
    ehmasculino = (sexo == 'M' || sexo == 'm');
  if (ehmasculino)
  {
    pesoIdeal = (72.7 * altura) - 58;
    printf("seu peso ideal eh %f",pesoIdeal);
  } 
  
  return 0;
  
}*/