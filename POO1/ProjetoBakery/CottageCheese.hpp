/*
 * CottageCheese.hpp
 *
 *  Created on: 29 de mai. de 2023
 *      Author: m260851
 */

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

#endif /* SRC_COTTAGECHEESE_HPP_ */
