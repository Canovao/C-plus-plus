/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#ifndef MORTADELLA
#define MORTADELLA

#include "Food.hpp"

class Mortadella: public Food{
private:
    string type;
    float weight;
public:
    Mortadella(string brand, string type, float weight, double value);
    virtual ~Mortadella();
    string getDescription();
};

#endif
