/* 

Construa um programa que permita identificar o perfil da turma:
- Percentual de homens e de mulheres.
- Percentual de alunos maiores em idade.
- Idade da pessoa mais velha.
- Idade da pessoa mais nova.

Domínio dos dados:

Gênero: m/f, sendo ‘m’=masculino e ‘f’=feminino.
Idade: 0..100

* Deverão ser rejeitados os valores lidos fora do domínio (observe que aqui deve ser utilizada a est. de rep. com teste no final)
* O número de alunos da turma deverá ser um valor lido*/

  #include <stdio.h>
  #include <stdbool.h>

  int main (){

    int alunos;
    printf("digite o numero de alunos da sala\n");
    scanf("%d",&alunos);
// essa estrutura não pode estar dentro do laço de repetição, poque ela que dara origem ao valor lido que sera ate quantas vezes o nosso laço irá se repetir.
    float percentualMulheres;
    float percentualHomens;
    float percentualMaiorIdade;
    int   MaisNova = 9999;
    int   MaiorIdade = 0;
    int   MaisVelha=  0;
    int   Idade = 0;
    char  sexo;
    int   totalPessoas; 
    int   totalMulheres = 0 ;
    int   totalHomens = 0 ;
    bool  erro;
 // nesse espaço colocamos as variaveis 
    for ( int i = 0 ; i < alunos ; i++)
    {
     do { //colocamos a estrutura com repetição no final, colocamos que a variavel bool ira valer a idade esta fora do dominio, ira apresnetar isso ao usuario, e ira repetir essa parte ate que o usuario coloque os valores dentro do dominio.
       printf(" DIGITE SUA IDADE \n");
      scanf("%d",&Idade);
      erro = ( Idade < 0 || Idade > 100);
        if(erro){
          printf("ERRO, IDADE FORA DO DOMINIO, TENTE NOVAMENTE!!!\n");
        }
     } while (erro);

     do{ // segui a mesma logica da questão anterior 
      printf("DIGITE AGORA SEU SEXO: [F/M]\n");
      scanf(" %c",&sexo);
      erro = (sexo != 'F' && sexo !='M');
      if (erro) 
      {
        printf("SEXO FORA DO DOMINIO, TENTE NOVAMENTE !!!\n");
      }
     }while (erro);

      if (sexo == 'F')
      {
      totalMulheres++; // quando a pessoa colocar que e F ira acrescentar mais uma mulher na contagem 
      }

      else {
        totalHomens++; // quando a pessoa colocar que e M ira acrescentar mais um homem  na contagem 
      }

      totalPessoas = totalHomens + totalMulheres;
//aqui o total de pessoas sera a soma de homens e mulheres
      
      if (Idade < MaisNova){ // aqui eu coloquei que se a idade for menor que a IdadeMais nova inicie a variavel com um numero muito grande para que pela a primeira vez que o usuario entrar a idade dele sera a mais nova, ai quando o segundo entarr a comparação vai ser de suas respcetivas Idades
      MaisNova = Idade;
      }
      if (Idade > MaisVelha){
      MaisVelha = Idade;
      }  // mesmo raciocinio, porem coloquei o menor numero possivel 

     if (Idade >= 18 ) {
       MaiorIdade++;
     }
      }
      percentualHomens = ((float)totalPessoas / totalHomens) * 100;
      percentualMulheres = ((float)totalPessoas / totalMulheres) * 100;
      percentualMaiorIdade = ((float)totalPessoas / MaiorIdade) * 100;
   //colocamos float emcima, as variaveis totalPessoas / totalHomens, dara um numero inteiro , por isso colocamos (float ) em uma das variaveis para não dar um valor inteiro e sim um valor real.
      printf("O PERCENTUAL DE HOMENS EH %f E O DAS MULHERES EH DE %f\n", percentualHomens,percentualMulheres);
      printf("O PERCENTUAL DE PESSOAS MAIORES DE IDADE EH %f \n", percentualMaiorIdade);
      printf ("A IDADE DA PESSOA MAIS VELHA EH %d E A MAIS NOVA %d\n", MaisVelha, MaisNova);

 // exibi para o usuarios as respostas
    return 0;
  }//fim do programa :)