/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef FOOD
   #define FOOD

#include <string>

using namespace std;

class Food
   {
   protected:
      double value;
      
   public:
      Food(double);
      virtual ~Food();
      virtual double getValue();

      virtual string getDescription() = 0;
   };
   
#endif
   
/* fim de arquivo */
