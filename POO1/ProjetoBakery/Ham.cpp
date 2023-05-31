#include "Ham.hpp"

#include <utility>

Ham::Ham(string brand, string type, float weight, double value): Food(std::move(brand), value) {
	this->type = std::move(type);
	this->weight = weight;
};

Ham::~Ham() = default;

string Ham::getDescription(void){
	return ("Ham: " + type + " Brand: " + brand + " - " + to_string(weight) + " Kg.");
};
