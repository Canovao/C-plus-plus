#include "Water.hpp"

#include <utility>

Water::Water(string type, string brand, int unities, float volume, double value): Liquid(std::move(brand), value, unities, volume) {
    this->type = std::move(type);
}

Water::~Water() = default;

string Water::getDescription(){
    return ("Water " + type + " - " + to_string(unities) + " un - " + to_string(volume) + "L.");
}

const string &Water::getType() const {
    return type;
}
