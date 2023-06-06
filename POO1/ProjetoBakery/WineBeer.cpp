/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "WineBeer.hpp"

WineBeer::WineBeer(float alcohol, const string &brand, double value, int unities, float volume, int wineContent) : Beer(alcohol, brand, value, unities, volume){
    this->wineContent = wineContent;
}

WineBeer::~WineBeer() = default;

string WineBeer::getDescription(){
    return ("WineBeer - " + to_string(wineContent) + " wine/ml.");
}