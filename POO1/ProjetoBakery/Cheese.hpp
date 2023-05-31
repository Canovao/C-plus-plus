#ifndef CHEESE
#define CHEESE

#include <string>

#include "Food.hpp"

using namespace std;

class Cheese: public Food {
private:
	string type;
	float weight;

public:
	Cheese(string brand, string type, float weight, double value);
	virtual ~Cheese();
	string getDescription();
};

#endif
