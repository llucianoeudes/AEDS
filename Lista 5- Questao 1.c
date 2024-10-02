#include <stdio.h>
#include <stdbool.h>
int main (void)
{
  int ano;
  char escolha;
  bool ehbisexto;
  bool divPor4;
  bool divPor400;
  bool divPor100;
  bool erro;
  bool continuar;

do{
  printf("coloque seu ano\n");
  scanf("%d",&ano);

 divPor4 = ano % 4 == 0;
 divPor400 = ano % 400 == 0;
 divPor100 = ano % 100 == 0;

ehbisexto = (divPor4 && !divPor100) || (divPor4 && divPor400);
if (ehbisexto){
  printf("seu ano e bisexto\n");
} 
else {printf("nao e bisexto\n");}

do{
  printf("voce quer continuar o programa? [S/N]\n");
  scanf("% c",&escolha);
  erro = escolha !='s' && escolha !='S' && escolha !='n' && escolha !='N';
  if(erro){printf("Resposta invalida, tente novamente\n");}

}while(erro);

continuar = escolha== 'S' || escolha== 's';
} while(continuar);
  return 0;
}