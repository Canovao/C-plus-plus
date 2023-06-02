#include <string>
#include <utility>
#include "FilledWaffer.hpp"
#include "Cracker.hpp"

using namespace std;

FilledWaffer::FilledWaffer(string brand, string type, string filling, int unities, double value) : Cracker(std::move(brand), std::move(type), unities, value){
   this->filling = std::move(filling);
}
   
FilledWaffer::~FilledWaffer() = default;

string FilledWaffer::getDescription()
   { 
   return ("Waffer filled with " + filling + " - " + Cracker::getDescription());
   };
