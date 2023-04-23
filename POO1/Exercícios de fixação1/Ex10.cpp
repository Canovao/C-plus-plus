#include <iostream>
#include <vector>
using namespace std;

class HotDog{
private:
    bool pao, salsicha, molhoTomate, mostarda, batataFrita, maionese, picles, pimenta, oregano; 
    vector<bool*> checklist = {&pao, &salsicha, &molhoTomate, &mostarda, &batataFrita, &maionese, &picles, &pimenta, &oregano};
    vector<string> ingredientes = {"Pão", "Salsicha", "Molho de Tomate", "Mostarda", "Batata Frita", "Maionese", "Picles", "Pimenta", "Oregano"};
public:
    HotDog(){
        this->pao = true;
        this->salsicha = true;
        this->molhoTomate = false;
        this->mostarda = false;
        this->batataFrita = false;
        this->maionese = false;
        this->picles = false;
        this->pimenta = false;
        this->oregano = false;
    }

    HotDog(bool molhoTomate){
        this->pao = true;
        this->salsicha = true;
        this->molhoTomate = molhoTomate;
        this->mostarda = false;
        this->batataFrita = false;
        this->maionese = false;
        this->picles = false;
        this->pimenta = false;
        this->oregano = false;
    }

    HotDog(bool molhoTomate, bool mostarda){
        this->pao = true;
        this->salsicha = true;
        this->molhoTomate = molhoTomate;
        this->mostarda = mostarda;
        this->batataFrita = false;
        this->maionese = false;
        this->picles = false;
        this->pimenta = false;
        this->oregano = false;
    }

    HotDog(bool molhoTomate, bool mostarda, bool batataFrita){
        this->pao = true;
        this->salsicha = true;
        this->molhoTomate = molhoTomate;
        this->mostarda = mostarda;
        this->batataFrita = batataFrita;
        this->maionese = false;
        this->picles = false;
        this->pimenta = false;
        this->oregano = false;
    }

    HotDog(bool molhoTomate, bool mostarda, bool batataFrita, bool maionese){
        this->pao = true;
        this->salsicha = true;
        this->molhoTomate = molhoTomate;
        this->mostarda = mostarda;
        this->batataFrita = batataFrita;
        this->maionese = maionese;
        this->picles = false;
        this->pimenta = false;
        this->oregano = false;
    }

    HotDog(bool molhoTomate, bool mostarda, bool batataFrita, bool maionese, bool picles){
        this->pao = true;
        this->salsicha = true;
        this->molhoTomate = molhoTomate;
        this->mostarda = mostarda;
        this->batataFrita = batataFrita;
        this->maionese = maionese;
        this->picles = picles;
        this->pimenta = false;
        this->oregano = false;
    }

    HotDog(bool molhoTomate, bool mostarda, bool batataFrita, bool maionese, bool picles, bool pimenta){
        this->pao = true;
        this->salsicha = true;
        this->molhoTomate = molhoTomate;
        this->mostarda = mostarda;
        this->batataFrita = batataFrita;
        this->maionese = maionese;
        this->picles = picles;
        this->pimenta = pimenta;
        this->oregano = false;
    }

    HotDog(bool molhoTomate, bool mostarda, bool batataFrita, bool maionese, bool picles, bool pimenta, bool oregano){
        this->pao = true;
        this->salsicha = true;
        this->molhoTomate = molhoTomate;
        this->mostarda = mostarda;
        this->batataFrita = batataFrita;
        this->maionese = maionese;
        this->picles = picles;
        this->pimenta = pimenta;
        this->oregano = oregano;
    }

    void deliveryHotDog(){
        cout << endl;
        cout << "Ingredientes:" << endl;
        cout << "=====================" << endl;
        for(int i = 0; i < 9; i++){
            if(*checklist[i]){
                cout << "- " << ingredientes[i] << endl;
            }
        }
        cout << "=====================" << endl;
        cout << endl;
    }

};

int main(void){
    HotDog *h1 = new HotDog();
    h1->deliveryHotDog();
    delete h1;

    HotDog *h2 = new HotDog(true, true, true);
    h2->deliveryHotDog();
    delete h2;

    HotDog *h3 = new HotDog(true, true);
    h3->deliveryHotDog();
    delete h3;

    return 0;
}
