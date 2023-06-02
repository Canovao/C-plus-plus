#ifndef COTTAGECHEESE
#define COTTAGECHEESE

#include "Cheese.hpp"
using namespace std;

class CottageCheese: public Cheese {
private:
	float weight;
	string consistency;
public:
	CottageCheese(string, string, string, float, double);
	virtual ~CottageCheese();
	string getDescription();
};

#endif
