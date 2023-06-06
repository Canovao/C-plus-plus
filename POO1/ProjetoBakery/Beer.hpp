/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Liquid.hpp"

#ifndef BEER
#define BEER

class Beer: public Liquid {
protected:
    float alcohol;
public:
    Beer(float, string, double, int, float);
    virtual ~Beer();
    string getDescription();
};

#endif
