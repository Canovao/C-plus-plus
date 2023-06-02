#include "Liquid.hpp"

#include <utility>

Liquid::Liquid(string brand, double value, int unities, float volume): Food(std::move(brand), value){
    this->unities = unities;
    this->volume = volume;
}

Liquid::~Liquid() = default;