/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Liquid.hpp"

#include <utility>

Liquid::Liquid(string brand, double value, int unities, float volume): Food(std::move(brand), value){
    this->unities = unities;
    this->volume = volume;
}

Liquid::~Liquid() = default;