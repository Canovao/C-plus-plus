/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "PaleAleBeer.hpp"

#include <utility>

PaleAleBeer::PaleAleBeer(float alcohol, const string& brand, double value, int unities, float volume, string hopType) : Beer(alcohol, brand, value, unities, volume){
    this->hopType = std::move(hopType);
}

PaleAleBeer::~PaleAleBeer() = default;

string PaleAleBeer::getDescription(){
    return ("PaleAleBeer - Hop type: " + hopType);
}
