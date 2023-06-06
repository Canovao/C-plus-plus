/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

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
   return ("Filled Waffer with " + filling + " - " + Cracker::getDescription());
   };
