/*
 * Cheese.cpp
 *
 *  Created on: 29 de mai. de 2023
 *      Author: m260851
 */

#include "Cheese.hpp"

Cheese::Cheese(string type, float weight, double value): Food(value) {
	this->type = type;
	this->weight = weight;
};

Cheese::~Cheese() = default;

string Cheese::getDescription(){
   return ("Cheese " + type + " - " + to_string(weight) + " Kg.");
};

