#include <string>
#include <utility>
#include "Cracker.hpp"
#include "Food.hpp"

using namespace std;

Cracker::Cracker(string brand, string type, int unities, double value) : Food(std::move(brand), value){
   this->type = std::move(type);
   this->unities = unities;
}
   
Cracker::~Cracker() = default;

string Cracker::getDescription()
   { 
   return ("Cracker " + type + " - " + to_string(unities) + " un/package.");
   };
