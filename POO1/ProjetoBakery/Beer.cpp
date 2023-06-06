/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Beer.hpp"

#include <utility>

Beer::Beer(float alcohol, string brand, double value, int unities, float volume): Liquid(std::move(brand), value, unities, volume) {
    this->alcohol = alcohol;
}

Beer::~Beer() = default;

string Beer::getDescription(){
    return ("Beer - Alcohol: " + to_string(alcohol) + "% - " + to_string(unities) + " un - " + to_string(volume) + "L.");
}
