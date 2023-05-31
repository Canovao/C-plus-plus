#include "Liquid.hpp"

#ifndef WATER
#define WATER


class Water: public Liquid {
private:
    string type;
public:
    Water(string, string, int, float, double);
    virtual ~Water();
    string getDescription();

    const string &getType() const;
};


#endif
