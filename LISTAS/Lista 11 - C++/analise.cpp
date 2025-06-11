#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    // Construtor
    Pessoa(string n, int i) {
        nome = n;
        idade = i;
        cout << "Pessoa criada: " << nome << ", " << idade << " anos" << endl;
    }

    // Método para exibir os dados
    void exibirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }

    // Destrutor
    ~Pessoa() {
        cout << "Pessoa destruída: " << nome << endl;
    }
};

int main() {
    Pessoa p("João", 30);
    p.exibirDados();

    return 0;
}
