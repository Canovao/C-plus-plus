#include <iostream>

using namespace std;

class Classe{ 
  private:
    string texto;
  public:
    void setTexto(string texto){
      this->texto = texto;
    }
    string getTexto(){
      return this->texto;
    }
    Classe(string texto){
        this->texto = texto;
    }
};

int main(){
    
  string text;

  cout << "Insira um texto: ";
  cin >> text;

  Classe classe(text);

  cout << "Agora insira outro texto: ";
  cin >> text;

  classe.setTexto(text);

  cout << "Texto da classe: " << classe.getTexto();

  return 0;
}