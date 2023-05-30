#ifndef CRACKER
   #define CRACKER

#include <string>
#include <iostream>

#include "Food.hpp"

using namespace std;

class Cracker : public Food
   {
   private:
      string type;
      int    unities;
      
   public:
      Cracker(string, int, double);
      virtual ~Cracker();
      virtual string getDescription();
   };
   
#endif
