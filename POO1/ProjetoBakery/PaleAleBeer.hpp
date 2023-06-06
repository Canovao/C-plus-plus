/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#ifndef PALE_ALE_BEER
#define PALE_ALE_BEER


#include "Beer.hpp"

class PaleAleBeer: public Beer {
private:
    string hopType;
public:
    PaleAleBeer(float, const string&, double, int, float, string);

    ~PaleAleBeer() override;
    string getDescription();
};


#endif
