#include <string>
#include "Bread.hpp"
#include "Food.hpp"

using namespace std;

Bread::Bread(string type, float weight, double value) : Food(value)
   {
   this->type = type;
   this->weight = weight;
   };
   
Bread::~Bread() = default;

string Bread::getDescription()
   { 
   return ("Bread " + type + " - " + to_string(weight) + " Kg.");
   };
