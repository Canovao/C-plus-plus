/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Food.hpp"

#include <utility>

using namespace std;

Food::Food(string brand, double value){
    this->value = value;
    this->brand = std::move(brand);
}
   
Food::~Food() = default;

double Food::getValue(){
   return (value);
}
