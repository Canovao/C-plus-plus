#ifndef FILLED_WAFFER
   #define FILLED_WAFFER

#include <string>

#include "Cracker.hpp"

using namespace std;

class FilledWaffer: public Cracker
   {
   private:
      string filling;
      
   public:
      FilledWaffer(string, string, int, double);
      virtual ~FilledWaffer();
      virtual string getDescription();
   };
   
#endif
