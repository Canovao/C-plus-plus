#include "Milk.hpp"

#include <utility>

Milk::Milk(string type, string brand, int unities, float volume, double value): Liquid(std::move(brand), value, unities, volume) {
    this->type = std::move(type);
}

Milk::~Milk() = default;

string Milk::getDescription(){
    return ("Milk " + type + " - " + to_string(unities) + " un - " + to_string(volume) + "L.");
}
const string &Milk::getType() const {
    return type;
}