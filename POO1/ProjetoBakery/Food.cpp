#include "Food.hpp"

using namespace std;

Food::Food(double value){
   this->value = value;
}
   
Food::~Food() = default;

double Food::getValue(){
   return (value);
}