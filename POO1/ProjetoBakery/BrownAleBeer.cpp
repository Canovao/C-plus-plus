/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "BrownAleBeer.hpp"

BrownAleBeer::BrownAleBeer(float alcohol, const string &brand, double value, int unities, float volume, int caramelContent) : Beer(alcohol, brand, value, unities, volume){
    this->caramelContent = caramelContent;
}

BrownAleBeer::~BrownAleBeer() = default;

string BrownAleBeer::getDescription(){
    return ("BrownAleBeer - Caramel content: " + to_string(caramelContent) + " g/ml");
}
