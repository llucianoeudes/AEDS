  #include <stdio.h>
  #include <stdbool.h>

  int main (){
    int alunos;
    printf("digite o numero de alunos\n");
    scanf("%d", &alunos);

    float nota;
    float media;
    float soma = 0;
    float maiorNota = 0;
    float menorNota = 999;
    bool ehreprovado;
    bool erro;

    for (int i = 0 ; i < alunos ; i++)
      {
        do{
          printf("Digite sua nota");
        scanf("%f",&nota);
        erro = nota < 0 || nota > 100;
           if (erro)
        {
         printf("Nota invalida, tente novamente\n"); 
        }
        } while (erro);

        soma = soma + nota;

        ehreprovado = nota < 60;
          if (ehreprovado)
          {
            printf("voce foi reprovado\n");
          }
          else {
            printf("voce foi aprovado\n");
          }

        if (menorNota > nota)
        {
           menorNota = nota;
        }
        if (maiorNota < nota)
        {
          maiorNota = nota;
        }
          media = soma / alunos;

      } if(alunos == 0)
        {
          media = menorNota = maiorNota = 0;
        }
        printf("O valor da sua media e %f\n", media);
        printf("O valor da sua menor Nota e %f\n", menorNota);
        printf("O valor da sua maior Nota e %f\n", maiorNota);


    return 0;
  }