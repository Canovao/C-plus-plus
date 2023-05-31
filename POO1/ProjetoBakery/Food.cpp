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
