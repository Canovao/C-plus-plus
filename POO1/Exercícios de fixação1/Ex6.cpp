#include <iostream>

using namespace std;

class Tabuada1{
    private:
        int numero;
    public:
        int getNumero(){
            return this->numero;
        }
        void setNumero(int numero){
            this->numero = numero;
        }
        Tabuada1(int numero){
            setNumero(numero);
        }

        void adicao(){
            cout << "Tabuada de adição do número [" << this->getNumero() << "]\n";
            for(int i=1;i<11;i++){
                cout << this->numero << " + " << i << " = " << (this->numero+i) << "\n";
            }
        }
        void subtracao(){
            cout << "Tabuada de subtração do número [" << this->getNumero() << "]\n";
            for(int i=1;i<11;i++){
                cout << this->numero << " - " << i << " = " << (this->numero-i) << "\n";
            }
        }
        void multiplicacao(){
            cout << "Tabuada de multiplicação do número [" << this->getNumero() << "]\n";
            for(int i=1;i<11;i++){
                cout << this->numero << " x " << i << " = " << (this->numero*i) << "\n";
            }
        }
        void divisao(){
            if(this->numero == 0){
                cout << "[ERRO] Número inserido é [0], impossível de calcular sua tabuada de divisão!";
            }else{
                cout << "Tabuada de divisão do número [" << this->getNumero() << "]\n";
                for(int i=1;i<11;i++){
                    cout << this->numero << " / " << i << " = " << (this->numero/i) << "\n";
                }
            }
        }
};

int main(){

    int num;

    cout << "Insira um número inteiro: ";
    cin >> num;

    Tabuada1* tabuada = new Tabuada1(num);

    tabuada->adicao();
    tabuada->subtracao();
    tabuada->multiplicacao();
    tabuada->divisao();

    delete tabuada;

    return 0;
}