
/*Crie um programa que permita armazenar o nome, a altura e da data de nascimento
de até 10 pessoas. Cada pessoa deve ser representada por uma struct dentro de um
vetor. A data de nascimento também deve ser uma struct. O nome e a altura de cada
pessoa devem ser informados pelo teclado. A geração da data de nascimento deve ser
feita aleatoriamente através de uma função.*/

#include <stdio.h> 
#include <string.h>

// definir struct dia do nascimento;

typedef struct
{
    int dia;
    int mes;
    int ano

} DataNascimento;

typedef struct
{
    char nome[50];
    float altura;
    DataNascimento data_nascido;

} Pessoa;

int main()
    {
        Pessoa pessoas[10];

        printf("===== CADASTRO DE PESSOAS =====");

        for(int i = 0 ; i < 10 ; i++)
            {
                puts("Digite o nome:");
                fgets(pessoas[i].nome, 50 , stdin);
            }   
    } 


