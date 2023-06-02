#ifndef FOOD
   #define FOOD

#include <string>

using namespace std;

class Food{
protected:
    string brand;
    double value;
      
public:
    Food(string, double);
    virtual ~Food();
    virtual double getValue();

    virtual string getDescription() = 0;
};
   
#endif
