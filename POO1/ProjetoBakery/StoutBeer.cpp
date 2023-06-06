/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "StoutBeer.hpp"

StoutBeer::StoutBeer(float alcohol, const string &brand, double value, int unities, float volume, int coffeeContent) : Beer(alcohol, brand, value, unities, volume){
    this->coffeeContent = coffeeContent;
}

StoutBeer::~StoutBeer() = default;

string StoutBeer::getDescription(){
    return ("StoutBeer - " + to_string(coffeeContent) + " coffee/ml.");
}
