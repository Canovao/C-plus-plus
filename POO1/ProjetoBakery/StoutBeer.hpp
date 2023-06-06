/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#ifndef STOUT_BEER
#define STOUT_BEER

#include "Beer.hpp"

class StoutBeer: public Beer {
private:
    int coffeeContent;
public:
    StoutBeer(float, const string&, double, int, float, int);

    virtual  ~StoutBeer();
    string getDescription();
};


#endif
