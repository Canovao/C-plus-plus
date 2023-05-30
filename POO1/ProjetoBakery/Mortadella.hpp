//
// Created by USER on 30/05/2023.
//

#ifndef MORTADELLA
#define MORTADELLA

#include "Food.hpp"

class Mortadella: public Food{
private:
    string brand;
    string type;
    float weight;
public:
    Mortadella(string brand, string type, float weight, double value);
    virtual ~Mortadella();
    string getDescription();
};

#endif
