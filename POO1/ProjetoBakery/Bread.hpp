/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#ifndef BREAD
   #define BREAD

#include <string>

#include "Food.hpp"

using namespace std;

class Bread : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Bread(string, string, float, double);
      virtual ~Bread();
      virtual string getDescription();
   };
   
#endif
