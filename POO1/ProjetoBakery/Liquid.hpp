#include "Food.hpp"

#ifndef LIQUID
#define LIQUID

class Liquid : public Food{
protected:
    int unities; // quantidades de garrafas
    float volume; // quantos L tem em cada garrafa
public:
    Liquid(string, double, int, float);
    virtual ~Liquid();
};

#endif
