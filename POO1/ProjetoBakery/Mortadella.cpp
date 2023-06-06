/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Mortadella.hpp"

#include <utility>

Mortadella::Mortadella(string brand, string type, float weight, double value): Food(std::move(brand), value) {
    this->type = std::move(type);
    this->weight = weight;
}

Mortadella::~Mortadella() = default;

string Mortadella::getDescription(void){
    return ("Mortadella: " + type + " Brand: " + brand + " - " + to_string(weight) + " Kg.");
}