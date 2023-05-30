#include <iostream>
#include <cmath>
using namespace std;

class Potencia{
private:
    double potencia;
public:
    double calcula(int base, int expoente){
        cout << "Método: [int/int]" << endl;
        this->potencia = pow(base, expoente);
        return potencia;
    }
    double calcula(int base, double expoente){
        cout << "Método: [int/double]" << endl;
        this->potencia = pow(base, expoente);
        return potencia;
    }
    double calcula(double base, double expoente){
        cout << "Método: [double/double]" << endl;
        this->potencia = pow(base, expoente);
        return potencia;
    }
};

int main(){
    Potencia *p1 = new Potencia;

    cout << p1->calcula(2, 2) << endl;
    cout << p1->calcula(2, 3.5f) << endl;
    cout << p1->calcula(2.5f, 2.5f) << endl;

    delete p1;
    return 0;
}