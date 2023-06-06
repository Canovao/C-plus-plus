/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Liquid.hpp"

#ifndef MILK
#define MILK


class Milk: public Liquid {
private:
    string type;
public:
    Milk(string, string, int, float, double);
    virtual ~Milk();
    const string &getType() const;
    string getDescription();
};


#endif
