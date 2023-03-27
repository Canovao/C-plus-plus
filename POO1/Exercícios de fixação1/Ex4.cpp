#include <iostream>

using namespace std;

class Classe{ 
  private:
    int numero;
  public:
    void setNumero(int numero){
      this->numero = numero;
    }
    int getNumero(){
      return this->numero;
    }
    Classe(int numero){
        this->numero = numero;
    }
};

int main(){
    
  int num;

  cout << "Insira um número inteiro: ";
  cin >> num;

  Classe classe(num);

  cout << "Agora insira outro: ";
  cin >> num;

  classe.setNumero(num);

  cout << "Número da classe: " << classe.getNumero();

  return 0;
}