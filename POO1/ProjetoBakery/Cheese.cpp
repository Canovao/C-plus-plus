#include "Cheese.hpp"

Cheese::Cheese(string type, float weight, double value): Food(value) {
	this->type = type;
	this->weight = weight;
};

Cheese::~Cheese() = default;

string Cheese::getDescription(){
   return ("Cheese " + type + " - " + to_string(weight) + " Kg.");
};
