#include <iostream>
#include <string> 

using namespace std;

class estudos
{
    private:

    string nome;
    int idade;
    float altura;
    
    public:

    estudos(string name , int years , float tamanho)
    {
        nome = name;
        idade = years;
        altura = tamanho;
    }

    string nomes()
        {
            return nome;
        }

    int idades()
        {
            return idade;
        }

    float alturas()
        {
            return altura;
        }

};


int main()
    {
        estudos Luciano("luciano",19, 1.80);
        
        cout<<"Aluno: \n";
        cout<< "Nome:"<< Luciano.nomes() <<endl;
        cout<< "Idade:"<< Luciano.idades() <<endl;
        cout<< "altura:"<< Luciano.alturas() <<endl;

        estudos Ernando("Ernando",19, 1.80);
        
        cout<<"Aluno: \n";
        cout<< "Nome:"<< Ernando.nomes() <<endl;
        cout<< "Idade:"<< Ernando.idades() <<endl;
        cout<< "altura:"<< Ernando.alturas() <<endl;

        estudos Igor("Igor",20, 1.77);
        
        cout<<"Aluno: \n";
        cout<< "Nome:"<< Igor.nomes() <<endl;
        cout<< "Idade:"<< Igor.idades() <<endl;
        cout<< "altura:"<< Igor.alturas() <<endl;

    }