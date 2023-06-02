#ifndef PALE_ALE_BEER
#define PALE_ALE_BEER


#include "Beer.hpp"

class PaleAleBeer: public Beer {
private:
    string hopType;
public:
    PaleAleBeer(float, string, double, int, float, string);

    ~PaleAleBeer() override;
    string getDescription();
};


#endif
