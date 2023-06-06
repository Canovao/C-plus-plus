/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "Liquid.hpp"

#ifndef SODA
#define SODA


class Soda: public Liquid {
private:
    string type;
    string flavor;

public:
    Soda(string, string, string, int, float, double);
    virtual ~Soda();
    string getDescription();

    const string &getType() const;

    const string &getFlavor() const;
};


#endif
