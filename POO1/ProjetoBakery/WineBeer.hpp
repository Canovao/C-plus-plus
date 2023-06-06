/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#ifndef WINE_BEER
#define WINE_BEER


#include "Beer.hpp"

class WineBeer: public Beer {
private:
    int wineContent;
public:
    WineBeer(float, const string&, double, int, float, int);

    virtual ~WineBeer();
    string getDescription();
};


#endif
