/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Cheese.hpp"
#include "CottageCheese.hpp"

#include <utility>

CottageCheese::CottageCheese(string brand, string consistency, string type, float weight, double value): Cheese(std::move(brand), std::move(type), weight, value){
	this->consistency = std::move(consistency);
    this->weight = weight;
}

CottageCheese::~CottageCheese() = default;

string CottageCheese::getDescription(){
   return ("Cottage Cheese " + consistency + " - " + to_string(weight) + " Kg.");
};
