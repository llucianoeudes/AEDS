#include <stdio.h>
#include <stdbool.h>
int main ()
{
  float base;
  int expoente;
  bool erro 

  printf("digite o valor de sua base\n");
  scanf("%f",&base);

  do{
    printf("digite seu expoente um número natural: inteiro, positivo ou nulo(zero).\n");
    scanf("%d",&expoente);
  erro == expoente < 0 
    if (erro) {printf("numero invalido, tente novamente\n");
  }while (erro)

  float resultado = 1 ;
    for ( int i = 0 ; i < expoente , i++) {
      resultado = resultado * base
    }
  printf(" o seu resultado e %2.f",resultado);



  return 0;