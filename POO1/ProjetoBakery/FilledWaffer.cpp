/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "FilledWaffer.hpp"
#include "Cracker.hpp"

using namespace std;

FilledWaffer::FilledWaffer(string type, string filling, int unities, double value) : Cracker(type, unities, value)
   {
   this->filling = filling;
   };
   
FilledWaffer::~FilledWaffer() = default;

string FilledWaffer::getDescription()
   { 
   return ("Waffer filled with " + filling + " - " + Cracker::getDescription());
   };
   
/* fim de arquivo */
