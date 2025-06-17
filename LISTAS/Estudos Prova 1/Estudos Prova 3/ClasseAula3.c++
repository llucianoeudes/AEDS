#include <iostream>

using namespace std;

class carro
    {
        private:
        // geralmente colocamos as variaveis no privado

        int ano;
        float valor;
        float km;

        public:

        // Construtor  obs: nao preciso colocar o tipo

        carro(int a  , float k , float v );

        // GET E SET 
        // GET ->  utilizamos quando queremos obter algo
        // SET ->  utilizamos quando queremos indicar algo

        void setano(int a); // aqui eu coloco o A que ta vindo como o ano
        int getano();
        
        void setvalor(float v);
        float getvalor();
        

        void setKm(float k);
        float getKm();
    };

int main()
    {
        carro palio(1990,10000,20000); // aqui eu estou usando o construtor, pois ja tenho os dados , caso eu não tenha ou queira altera eu uso o set

        //palio.setano(1995);
        //palio.setKm(20000);
        //palio.setvalor(18000);

        cout << "Palio  \n";
        cout << "Ano: "<< palio.getano() << endl;
        cout << "km: " << palio.getKm() << endl;
        cout << "Valor: \n" << palio.getvalor() << endl;

        carro celta(1998,15000,28900);

        //celta.setano(2001);
        //celta.setKm(24500);
        //celta.setvalor(15000);

        cout << "Celta  \n";
        cout << "Ano: "<< celta.getano() << endl;
        cout << "km: " << celta.getKm() << endl;
        cout << "Valor: " << celta.getvalor() << endl;


    }

   

        // Construtor  obs: nao preciso colocar o tipo

        carro::carro(int a = 0 , float k = -1 , float v = -1)
            {
                ano = a ;
                km = k;
                valor = v;
            }
        

        // GET E SET 
        // GET ->  utilizamos quando queremos obter algo
        // SET ->  utilizamos quando queremos indicar algo

        void carro::setano(int a) // aqui eu coloco o A que ta vindo como o ano
        {
            ano = a ;
        }

        int carro::getano()
        {
            return ano;
        }

        void carro::setvalor(float v)
        {
            valor = v;
        }

        float carro::getvalor()
        {
            return valor;
        }

        void carro::setKm(float k)
        {
            km = k;
        }

        float carro::getKm()
        {
            return km;
        }