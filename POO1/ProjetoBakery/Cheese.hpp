/*
 * Cheese.hpp
 *
 *  Created on: 29 de mai. de 2023
 *      Author: m260851
 */

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
	Cheese(string type, float weight, double value);
	virtual ~Cheese();
	string getDescription();
};

#endif /* SRC_CHEESE_HPP_ */
