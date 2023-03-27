#include <iostream>

using namespace std;

class Classe{ 
  private:
    int numero;
  public:
    void setNumero(int numero){
      this->numero = numero;
    };
    int getNumero(){
      return this->numero;
    }
};

int main(){
  Classe classe;

  int num;

  cout << "Insira um número inteiro: ";
  cin >> num;

  classe.setNumero(num);

  cout << "Número inserido: " << classe.getNumero();

  return 0;
}