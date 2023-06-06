/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#ifndef BROWN_ALE_BEER
#define BROWN_ALE_BEER

#include "Beer.hpp"

class BrownAleBeer: public Beer {
private:
    int caramelContent;
public:
    BrownAleBeer(float, const string&, double, int, float, int);

    virtual ~BrownAleBeer();
    string getDescription();
};


#endif
