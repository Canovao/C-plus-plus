#ifndef FOOD
   #define FOOD

#include <string>

using namespace std;

class Food
   {
   protected:
      double value;
      
   public:
      Food(double);
      virtual ~Food();
      virtual double getValue();

      virtual string getDescription() = 0;
   };
   
#endif
