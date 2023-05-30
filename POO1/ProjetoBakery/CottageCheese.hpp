#ifndef COTTAGECHEESE
#define COTTAGECHEESE

#include "Cheese.hpp"
using namespace std;

class CottageCheese: public Cheese {
private:
	float weight;
	string consistency;
public:
	CottageCheese(string consistency, string type, float weight, double value);
	virtual ~CottageCheese();
	string getDescription();
};

#endif
