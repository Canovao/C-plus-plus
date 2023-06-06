/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Cheese.hpp"

#include <utility>

Cheese::Cheese(string brand, string type, float weight, double value): Food(std::move(brand), value) {
	this->type = std::move(type);
	this->weight = weight;
};

Cheese::~Cheese() = default;

string Cheese::getDescription(){
   return ("Cheese " + type + " - " + to_string(weight) + " Kg.");
};
