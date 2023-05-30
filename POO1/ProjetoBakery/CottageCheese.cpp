#include "Cheese.hpp"
#include "CottageCheese.hpp"

CottageCheese::CottageCheese(string consistency, string type, float weight, double value): Cheese(type, weight, value){
	this->consistency = consistency;
}

CottageCheese::~CottageCheese() = default;

string CottageCheese::getDescription(){
   return ("Cottage Cheese " + consistency + " - " + to_string(weight) + " Kg.");
};
