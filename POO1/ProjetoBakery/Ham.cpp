/*
 * Ham.cpp
 *
 *  Created on: 29 de mai. de 2023
 *      Author: m260851
 */

#include "Ham.hpp"

Ham::Ham(string brand, string type, float weight, double value): Food(value) {
	this->brand = brand;
	this->type = type;
	this->weight = weight;
};

Ham::~Ham() = default;

string Ham::getDescription(void){
	return ("Ham: " + type + " Brand: " + brand + " - " + to_string(weight) + " Kg.");
};
