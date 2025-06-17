#include <iostream>

using namespace std;

class propaganda
    {
        private: // so conseguimos acessar o que esta dentro de privado, somente na class

        public: // o que colocarmos dentro de publico, podemos ter acesso em outras classe e funções EX: eu só consigo acessar 
                // na main o que esta em publico

        void inscrever()
            {
                cout << "Se increva no canal\n";
            }
        
        void curta()
            {
                cout <<"Curta esse video e ative os sininhos!\n";
            }
    };

int main()
    {
       propaganda canal ; // toda class que eu for chamar eu tenho que dar nome a esse objeto 

       canal.curta() ; // uso para chamar
       canal.inscrever(); 
        return 0;
    }