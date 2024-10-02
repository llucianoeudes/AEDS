/* 
Construir uma nova versão para o seguinte problema: ler a nota obtida por cada aluno da turma. A
leitura deverá ser interrompida quando for informada uma nota igual a zero (flag). Ao final do programa,
deverão ser escritos o percentual de alunos aprovados e o percentual de alunos reprovados, sabendo ser
requerida uma nota mínima igual a 60 para a aprovação do aluno.
Domínio da nota: 0..100 – Rejeitar a leitura de valores inválidos (fora do domínio)


*/
#include <stdio.h>
#include <stdbool.h>
#define _FLAG 0 

int main(){


  float nota;
  float percentualRepro;
  float percentualApro;
  bool erro; 
  int alunosApro = 0 ;
  int alunosRepro = 0 ;
   int alunos = 0 ;


  do {
   printf("DIGITE SUA NOTA: \n");
   scanf("%f",&nota);
   erro = (nota < 0 || nota >100 );
   if (erro){
     printf("NOTA FORA DO DOMINIO, TENTE NOVAMENTE!!");
   }
  } while (erro);

  while (nota != _FLAG){

    if (nota >= 60) 
    {
      printf("VOCE FOI APROVADO :) \n");
      alunosApro++;
      alunos++;
    }

    else {
      printf ("VOCE FOI REPROVADO :( \n");
      alunosRepro ++;
      alunos++;
        }

  percentualApro = ((float)alunos / alunosApro) * 100;
  percentualRepro = ((float)alunos / alunosRepro ) *100;


    do {
     printf("DIGITE SUA NOTA: \n");
     scanf("%f",&nota);
     erro = (nota < 0 || nota >100 );
     if (erro){
       printf("NOTA FORA DO DOMINIO, TENTE NOVAMENTE!!");
     }
    } while (erro);

  } 




  printf("O percentual de aprovação é %f e reprovação é %f\n ",percentualApro,percentualRepro);


  return 0; 
}
