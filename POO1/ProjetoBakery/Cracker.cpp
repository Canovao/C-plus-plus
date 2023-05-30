#include <string>
#include "Cracker.hpp"
#include "Food.hpp"

using namespace std;

Cracker::Cracker(string type, int unities, double value) : Food(value)
   {
   this->type = type;
   this->unities = unities;
   };
   
Cracker::~Cracker() = default;

string Cracker::getDescription()
   { 
   return ("Cracker " + type + " - " + to_string(unities) + " un/package.");
   };
