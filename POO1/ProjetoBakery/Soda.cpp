/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Soda.hpp"

#include <utility>

Soda::Soda(string type, string flavor, string brand, int unities, float volume, double value): Liquid(std::move(brand), value, unities, volume) {
    this->type = std::move(type);
    this->flavor = std::move(flavor);
}

Soda::~Soda() = default;

string Soda::getDescription(){
    return ("Soda " + type + " - " + to_string(unities) + " un - " + to_string(volume) + "L.");
}

const string &Soda::getType() const {
    return type;
}

const string &Soda::getFlavor() const {
    return flavor;
}
