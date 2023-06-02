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
