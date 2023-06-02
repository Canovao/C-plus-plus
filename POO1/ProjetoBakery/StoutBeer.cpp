#include "StoutBeer.hpp"

StoutBeer::StoutBeer(float d, const string &string, double d1, int i, float d2, int coffeeContent) : Beer(d, string, d1, i, d2){
    this->coffeeContent = coffeeContent;
}

StoutBeer::~StoutBeer() = default;

string StoutBeer::getDescription(){
    return ("StoutBeer - " + to_string(coffeeContent) + " coffee/ml.");
}
