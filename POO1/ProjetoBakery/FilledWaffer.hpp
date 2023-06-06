/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#ifndef FILLED_WAFFER
   #define FILLED_WAFFER

#include <string>

#include "Cracker.hpp"

using namespace std;

class FilledWaffer: public Cracker
   {
   private:
      string filling;
      
   public:
      FilledWaffer(string, string, string, int, double);
      virtual ~FilledWaffer();
      virtual string getDescription();
   };
   
#endif
