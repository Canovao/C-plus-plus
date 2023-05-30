/*
 * Ham.hpp
 *
 *  Created on: 29 de mai. de 2023
 *      Author: m260851
 */

#ifndef HAM
#define HAM

#include "Food.hpp"

class Ham: public Food{
private:
	string brand;
	string type;
	float weight;
public:
	Ham(string brand, string type, float weight, double value);
	virtual ~Ham();
	string getDescription();
};

#endif /* SRC_HAM_HPP_ */
