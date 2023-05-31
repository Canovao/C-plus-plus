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
