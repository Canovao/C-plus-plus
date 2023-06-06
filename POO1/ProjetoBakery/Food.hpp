/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#ifndef FOOD
   #define FOOD

#include <string>

using namespace std;

class Food{
protected:
    string brand;
    double value;
      
public:
    Food(string, double);
    virtual ~Food();
    virtual double getValue();

    virtual string getDescription() = 0;
};
   
#endif
