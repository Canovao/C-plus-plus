/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include <iostream>
#include <sstream>

#include "MyProgram.hpp"
#include "Mortadella.hpp"
#include "Ham.hpp"
#include "Information.hpp"
#include "Beer.hpp"
#include "Bread.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"
#include "Cracker.hpp"
#include "FilledWaffer.hpp"
#include "Food.hpp"
#include "Menu.hpp"
#include "Milk.hpp"
#include "MyBooleanClass.hpp"
#include "Soda.hpp"
#include "Water.hpp"
#include "WineBeer.hpp"
#include "StoutBeer.hpp"
#include "PaleAleBeer.hpp"
#include "BrownAleBeer.hpp"

using namespace std;


void MyProgram::process(){
    vector<string> opcoes({ "Exit", "List Database", "Insert Items" });
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while(escolha){
        escolha = menu.getEscolha();

        switch(escolha){
            case 1:
                listItems();
                break;
            case 2:
                insertItems();
                break;
        }
    }
}

void MyProgram::clearAll(){
    myMainList.clear();

    auto it = myMainList.begin();

    while(it != myMainList.end()) {
        delete (*it);
        it++;
    }

    delete verboseMode;
    delete shortMessageMode;
    verboseMode = NULL;
    shortMessageMode = NULL;
}

void MyProgram::listItems(){
    double total = 0.00;

    cout << "------------------------------\nItems in Database:\n------------------------------\n";
    auto scan = myMainList.begin();

    while(scan != myMainList.end()){
        cout << "  @ " << setw(20) << (*scan)->getDescription() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValue() << endl;
        total +=  (*scan)->getValue();
        scan++;
    }
    cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
}

void MyProgram::insertItems(){
    cout << "------------------------------\nInset New Items:\n------------------------------\n";

    Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella", "Milk", "Water", "Soda", "Beer" });
    int escolha = -1;

    while(escolha){
        escolha = menu.getEscolha();

        switch(escolha){
            case 1:
                insertBread();
                break;
            case 2:
                insertCheese();
                break;
            case 3:
                insertCottageCheese();
                break;
            case 4:
                insertCracker();
                break;
            case 5:
                insertFilledWafer();
                break;
            case 6:
                insertHam();
                break;
            case 7:
                insertMortadella();
                break;
            case 8:
                insertMilk();
                break;
            case 9:
                insertWater();
                break;
            case 10:
                insertSoda();
                break;
            case 11:
                insertBeer();
                break;

            default:
                cout << "Opção inválida!" << endl;
        }
    }
}

template <typename TYPE>
TYPE MyProgram::getInput() {
    string buffer;
    TYPE input;

    while (true) {
        getline(cin, buffer);
        stringstream ss(buffer);
        if (ss >> input && ss.eof()) {
            return input;
        }
        else {
            if (buffer.empty()) {
                cout << "Entrada vazia. Por favor, digite uma entrada válida: ";
            }
            else {
                cout << "Entrada inválida. Por favor, digite uma entrada válida: ";
            }
        }
    }
}

void MyProgram::insertStoutBeer(){
    StoutBeer * stoutBeer;
    string buffer;

    float alcohol;
    string brand;
    double value;
    int unities;
    float volume;
    int coffeeContent;

    cout << "------------------------------\nInsert Stout Beer:\n------------------------------\n";
    cout << "Alcohol ......: ";
    alcohol = MyProgram::getInput<float>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Value ....: ";
    value = MyProgram::getInput<double>();

    cout << "Unities ......: ";
    unities = MyProgram::getInput<int>();

    cout << "Volume ......: ";
    volume = MyProgram::getInput<float>();

    cout << "Coffee Content ......: ";
    coffeeContent = MyProgram::getInput<int>();

    cin.clear();

    stoutBeer = new StoutBeer(alcohol, brand, value, unities, volume, coffeeContent);
    myMainList.insert(myMainList.end(), stoutBeer);

    cout << endl << stoutBeer->getDescription() << " - US$ " << fixed << setprecision(2) << stoutBeer->getValue() << endl;
}

void MyProgram::insertWineBeer(){
    WineBeer * wineBeer;
    string buffer;

    float alcohol;
    string brand;
    double value;
    int unities;
    float volume;
    int wineContent;

    cout << "------------------------------\nInsert Wine Beer:\n------------------------------\n";
    cout << "Alcohol ......: ";
    alcohol = MyProgram::getInput<float>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Value ....: ";
    value = MyProgram::getInput<double>();

    cout << "Unities ......: ";
    unities = MyProgram::getInput<int>();

    cout << "Volume ......: ";
    volume = MyProgram::getInput<float>();

    cout << "Wine Content ......: ";
    wineContent = MyProgram::getInput<int>();

    cin.clear();

    wineBeer = new WineBeer(alcohol, brand, value, unities, volume, wineContent);
    myMainList.insert(myMainList.end(), wineBeer);

    cout << endl << wineBeer->getDescription() << " - US$ " << fixed << setprecision(2) << wineBeer->getValue() << endl;
}

void MyProgram::insertBrownAleBeer(){
    BrownAleBeer * brownAleBeer;
    string buffer;

    float alcohol;
    string brand;
    double value;
    int unities;
    float volume;
    int caramelContent;

    cout << "------------------------------\nInsert Brown Ale Beer:\n------------------------------\n";
    cout << "Alcohol ......: "; 
    alcohol = MyProgram::getInput<float>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Value ....: ";
    value = MyProgram::getInput<double>();

    cout << "Unities ......: ";
    unities = MyProgram::getInput<int>();

    cout << "Volume ......: ";
    volume = MyProgram::getInput<float>();

    cout << "Caramel Content ......: ";
    caramelContent = MyProgram::getInput<int>();

    cin.clear();

    brownAleBeer = new BrownAleBeer(alcohol, brand, value, unities, volume, caramelContent);
    myMainList.insert(myMainList.end(), brownAleBeer);

    cout << endl << brownAleBeer->getDescription() << " - US$ " << fixed << setprecision(2) << brownAleBeer->getValue() << endl;
}

void MyProgram::insertPaleAleBeer(){
    PaleAleBeer * paleAleBeer;
    string buffer;

    float alcohol;
    string brand;
    double value;
    int unities;
    float volume;
    string hopType;

    cout << "------------------------------\nInsert Pale Ale Beer:\n------------------------------\n";
    cout << "Alcohol ......: "; 
    alcohol = MyProgram::getInput<float>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Value ....: ";
    value = MyProgram::getInput<double>();

    cout << "Unities ......: ";
    unities = MyProgram::getInput<int>();

    cout << "Volume ......: ";
    volume = MyProgram::getInput<float>();

    cout << "Hop Type ......: ";
    hopType = MyProgram::getInput<string>();

    cin.clear();

    paleAleBeer = new PaleAleBeer(alcohol, brand, value, unities, volume, hopType);
    myMainList.insert(myMainList.end(), paleAleBeer);

    cout << endl << paleAleBeer->getDescription() << " - US$ " << fixed << setprecision(2) << paleAleBeer->getValue() << endl;
}

void MyProgram::insertBeer(){
    cout << "------------------------------\nInsert Beer:\n------------------------------\n";

    Menu menu("Choose Beer", { "Exit", "Stout Beer", "Wine Beer", "Brown Ale Beer", "Pale Ale Beer" });
    int escolha = -1;

    while(escolha){
        escolha = menu.getEscolha();

        switch(escolha){
            case 1:
                insertStoutBeer();
                break;
            case 2:
                insertWineBeer();
                break;
            case 3:
                insertBrownAleBeer();
                break;
            case 4:
                insertPaleAleBeer();
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    }
}

void MyProgram::insertSoda(){
    Soda * soda;
    string buffer;

    string type;
    string flavor;
    string brand;
    int unities;
    float volume;
    double cost;

    cout << "------------------------------\nInsert Soda:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Flavor ....: ";
    flavor = MyProgram::getInput<string>();

    cout << "Unities ......: ";
    unities = MyProgram::getInput<int>();

    cout << "Volume ......: ";
    volume = MyProgram::getInput<float>();

    cout << "Cost ......: ";
    cost = MyProgram::getInput<double>();

    cin.clear();

    soda = new Soda(type, flavor, brand, unities, volume, cost);
    myMainList.insert(myMainList.end(), soda);

    cout << endl << soda->getDescription() << " - US$ " << fixed << setprecision(2) << soda->getValue() << endl;

}

void MyProgram::insertWater(){
    Water * water;
    string buffer;

    string type;
    string brand;
    int unities;
    float volume;
    double cost;

    cout << "------------------------------\nInsert Water:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Unities ......: ";
    unities = MyProgram::getInput<int>();

    cout << "Volume ......: ";
    volume = MyProgram::getInput<float>();

    cout << "Cost ......: ";
    cost = MyProgram::getInput<double>();

    cin.clear();

    water = new Water(type, brand, unities, volume, cost);
    myMainList.insert(myMainList.end(), water);

    cout << endl << water->getDescription() << " - US$ " << fixed << setprecision(2) << water->getValue() << endl;
}

void MyProgram::insertMilk(){
    Milk * milk;
    string buffer;

    string type;
    string brand;
    int unities;
    float volume;
    double cost;

    cout << "------------------------------\nInsert Milk:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Unities ......: ";
    unities = MyProgram::getInput<int>();

    cout << "Volume ......: ";
    volume = MyProgram::getInput<float>();

    cout << "Cost ......: ";
    cost = MyProgram::getInput<double>();

    cin.clear();

    milk = new Milk(type, brand, unities, volume, cost);
    myMainList.insert(myMainList.end(), milk);

    cout << endl << milk->getDescription() << " - US$ " << fixed << setprecision(2) << milk->getValue() << endl;
}

void MyProgram::insertBread(){
    Bread * bread;
    string buffer;
    string brand;
    string type;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Weight ....: "; 
    weight = MyProgram::getInput<float>();

    cout << "Cost ......: "; 
    cost = MyProgram::getInput<double>();

    cin.clear();

    bread = new Bread(brand, type, weight,cost);
    myMainList.insert(myMainList.end(), bread);

    cout << endl << bread->getDescription() << " - US$ " << fixed << setprecision(2) << bread->getValue() << endl;
}

void MyProgram::insertCheese(){
    Cheese * cheese;
    string buffer;
    string brand;
    string type;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();
    
    cout << "Weight ....: "; 
    weight = MyProgram::getInput<float>();

    cout << "Cost ......: "; 
    cost = MyProgram::getInput<double>();

    cin.clear();

    cheese = new Cheese(brand, type, weight, cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl << cheese->getDescription() << " - US$ " << fixed << setprecision(2) << cheese->getValue() << endl;
}

void MyProgram::insertCottageCheese(){
    CottageCheese * cottageCheese;
    string buffer;
    string consistency;
    string type;
    string brand;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();
    
    cout << "Weight ....: "; 
    weight = MyProgram::getInput<float>();

    cout << "Cost ......: "; 
    cost = MyProgram::getInput<double>();

    cout << "Consistency: ";
    consistency = MyProgram::getInput<string>();

    cin.clear();

    cottageCheese = new CottageCheese(brand, consistency, type, weight, cost);
    myMainList.insert(myMainList.end(), cottageCheese);

    cout << endl << cottageCheese->getDescription() << " - US$ " << fixed << setprecision(2) << cottageCheese->getValue() << endl;
}

void MyProgram::insertCracker(){
    Cracker * cracker;
    string buffer;
    string brand;
    string type;
    int    amount;
    double cost;

    cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Amount ....: "; 
    amount = MyProgram::getInput<int>();

    cout << "Cost ......: "; 
    cost = MyProgram::getInput<double>();

    cin.clear();

    cracker = new Cracker(brand, type, amount, cost);
    myMainList.insert(myMainList.end(), cracker);

    cout << endl << cracker->getDescription() << " - US$ " << fixed << setprecision(2) << cracker->getValue() << endl;
}

void MyProgram::insertFilledWafer(){
    FilledWaffer * filledWafer;
    string buffer;
    string brand;
    string type;
    string filling;
    int    amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Amount ....: "; 
    amount = MyProgram::getInput<int>();

    cout << "Cost ......: "; 
    cost = MyProgram::getInput<double>();

    cout << "Filling ...: "; 
    filling = MyProgram::getInput<string>();

    cin.clear();

    filledWafer = new FilledWaffer(brand, type, filling, amount,cost);
    myMainList.insert(myMainList.end(), filledWafer);

    cout << endl << filledWafer->getDescription() << " - US$ " << fixed << setprecision(2) << filledWafer->getValue() << endl;
}

void MyProgram::insertHam(){
    Ham * ham;
    string buffer;
    string brand;
    string type;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Weight ....: "; 
    weight = MyProgram::getInput<float>();

    cout << "Cost ......: "; 
    cost = MyProgram::getInput<double>();

    cin.clear();

    ham = new Ham(brand, type, weight, cost);
    myMainList.insert(myMainList.end(), ham);

    cout << endl << ham->getDescription() << " - US$ " << fixed << setprecision(2) << ham->getValue() << endl;
}

void MyProgram::insertMortadella(){
    Mortadella * mortadella;
    string buffer;
    string brand;
    string type;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
    cout << "Type ......: "; 
    type = MyProgram::getInput<string>();

    cout << "Brand ....: ";
    brand = MyProgram::getInput<string>();

    cout << "Weight ....: "; 
    weight = MyProgram::getInput<float>();

    cout << "Cost ......: "; 
    cost = MyProgram::getInput<double>();

    cin.clear();

    mortadella = new Mortadella(brand, type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl << mortadella->getDescription() << " - US$ " << fixed << setprecision(2) << mortadella->getValue() << endl;
}

void MyProgram::verifyArguments(int argc, char* argv[]){
    verboseMode      = nullptr;
    shortMessageMode = nullptr;

    for(int count = 1; count < argc; count++){
        if(string(argv[count]) == "-v") {
            MyProgram::setVerboseMode(new MyBooleanClass(true));
        }
        if(string(argv[count]) == "-s") {
            MyProgram::setShortMessageMode(new MyBooleanClass(true));
        }
    }

    if(!verboseMode){
        verboseMode = new MyBooleanClass();
    }

    if(!shortMessageMode){
        shortMessageMode = new MyBooleanClass();
    }
}

void MyProgram::start(char* argv[]){
    myMainList.clear();
    Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
    process();
    Information::bye(shortMessageMode->getStatus());
    clearAll();
}

MyBooleanClass *MyProgram::getShortMessageMode() const {
    return shortMessageMode;
}

MyBooleanClass *MyProgram::getVerboseMode() const {
    return verboseMode;
}

void MyProgram::setVerboseMode(MyBooleanClass *verboseMode) {
    MyProgram::verboseMode = verboseMode;
}

void MyProgram::setShortMessageMode(MyBooleanClass *shortMessageMode) {
    MyProgram::shortMessageMode = shortMessageMode;
}
