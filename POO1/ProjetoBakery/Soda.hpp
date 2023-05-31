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
