#include "WineBeer.hpp"

WineBeer::WineBeer(float d, const string &string, double d1, int i, float d2, int wineContent) : Beer(d, string, d1, i, d2){
    this->wineContent = wineContent;
}

WineBeer::~WineBeer() = default;

string WineBeer::getDescription(){
    return ("WineBeer - " + to_string(wineContent) + " wine/ml.");
}