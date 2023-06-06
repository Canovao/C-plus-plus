/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include <string>
#include <utility>
#include "Bread.hpp"
#include "Food.hpp"

using namespace std;

Bread::Bread(string brand, string type, float weight, double value) : Food(std::move(brand), value){
   this->type = std::move(type);
   this->weight = weight;
}
   
Bread::~Bread() = default;

string Bread::getDescription(){
   return ("Bread " + type + " - " + to_string(weight) + " Kg.");
}
