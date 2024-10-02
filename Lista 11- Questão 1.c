#include <stdio.h>
#include <stdlib.h>

float leiaReal (){
float x;
printf("digite o um numero real\n");
scanf("%f",&x);
return x;
}

float soma (float a , float b){
float resultado;
resultado = a + b;
  return resultado;
}

void escreva (float soma )
{
  float resultadoFinal;
  resultadoFinal = soma;
  printf("\n O RESULTADO E %2.f ",resultadoFinal);

}

int main (){
float a = leiaReal();
float b = leiaReal();
float resposta = soma(a,b);
escreva(resposta);
}