#ifndef WINE_BEER
#define WINE_BEER


#include "Beer.hpp"

class WineBeer: public Beer {
private:
    int wineContent;
public:
    WineBeer(float d, const string &string, double d1, int i, float d2, int wineContent);

    virtual ~WineBeer();
    string getDescription();
};


#endif
