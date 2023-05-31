#ifndef BROWN_ALE_BEER
#define BROWN_ALE_BEER

#include "Beer.hpp"

class BrownAleBeer: public Beer {
private:
    int caramelContent;
public:
    BrownAleBeer(float d, const string &string, double d1, int i, float d2, int caramelContent);

    virtual ~BrownAleBeer();
    string getDescription();
};


#endif
