#ifndef STOUT_BEER
#define STOUT_BEER

#include "Beer.hpp"

class StoutBeer: public Beer {
private:
    int coffeeContent;
public:
    StoutBeer(float d, const string &string, double d1, int i, float d2, int coffeeContent);

    virtual  ~StoutBeer();
    string getDescription();
};


#endif
