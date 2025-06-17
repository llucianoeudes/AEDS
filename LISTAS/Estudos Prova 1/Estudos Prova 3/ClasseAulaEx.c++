#include <iostream>

using namespace std;

class Estudos
    {
        private:

        public:
        
        void Estudante()
            {
                cout<<"Luciano Eudes é estudante de Ciencias da Computação na PUC MINAS";
            }
        
        void Instante()
            {
                cout<< "Nesse momento ele esta estudando para a prova de AEDS";
            }
    };

int main()
    {
        Estudos Aluno;
        
        Aluno.Estudante();
        Aluno.Instante();

        return 0;
        
    }