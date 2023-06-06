/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Food.hpp"

#ifndef LIQUID
#define LIQUID

class Liquid : public Food{
protected:
    int unities;
    float volume;
public:
    Liquid(string, double, int, float);
    virtual ~Liquid();
};

#endif
