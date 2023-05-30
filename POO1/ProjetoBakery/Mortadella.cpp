#include "Mortadella.hpp"

Mortadella::Mortadella(string brand, string type, float weight, double value): Food(value) {
    this->brand = brand;
    this->type = type;
    this->weight = weight;
}

Mortadella::~Mortadella() = default;

string Mortadella::getDescription(void){
    return ("Mortadella: " + type + " Brand: " + brand + " - " + to_string(weight) + " Kg.");
}