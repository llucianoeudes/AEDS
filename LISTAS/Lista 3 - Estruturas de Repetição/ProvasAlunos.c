//Os alunos de uma turma com numAlunoS fizeram numP rova provas. Leia cada uma das
//numP rova provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média
//de cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ou igual a 80%
 
#include <stdio.h>
 
int main()
    {
        int alunos;
        int provas;
        int nota;
        float  media;
        int somaNota = 0 ;
        int totalProvas = 0 ;
        float mediaTurma = 0; 
        float AlunosMediaAlta = 0 ;
        float PercentualMediaAlta = 0 ; 

        printf("\nQuantos alunos tem na sala? \n");
        scanf("%d",&alunos);

        for(int i = 0 ; i < alunos ; i++)
        {
            printf("\nQuantas provas esse aluno fez:\n");
            scanf("%d",&provas);

            totalProvas = totalProvas + provas ;

            for(int n = 0 ; n <= provas ; n++)
                {
                    printf("\nQual a nota da prova:\n");
                    scanf("%d",&nota);
                    
                    somaNota = somaNota + nota;
                    

                }

            media = somaNota / totalProvas ; 

            printf("\nA media desse aluno eh %fn",media);

            mediaTurma = mediaTurma + media;

            if(media >= 80)
            {
                AlunosMediaAlta = AlunosMediaAlta + 1;

            }

            PercentualMediaAlta = (AlunosMediaAlta / alunos)*100;
            
            printf("\nOS ALUNOS MEDIA ALTA E %f",PercentualMediaAlta);

        }
    



        return 0;
    }