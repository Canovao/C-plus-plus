#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

#include "Beer.hpp"
#include "Bread.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"
#include "Cracker.hpp"
#include "FilledWaffer.hpp"
#include "Food.hpp"
#include "Ham.hpp"
#include "Liquid.hpp"
#include "Menu.hpp"
#include "Milk.hpp"
#include "Mortadella.hpp"
#include "MyBooleanClass.hpp"
#include "MyProgram.hpp"
#include "Soda.hpp"
#include "Water.hpp"


using namespace std;

#ifndef MY_PROGRAM
#define MY_PROGRAM

class MyProgram{
private:
    MyBooleanClass * verboseMode       = NULL;
    MyBooleanClass * shortMessageMode  = NULL;

    vector<Food *> myMainList;

    void process();
    void clearAll();

    void listItems();
    void insertItems();
    void insertBread();
    void insertBeer(); // TODO fazer essa bosta
    void insertBeerType1();
    void insertBeerType2();
    void insertBeerType3();
    void insertBeerType4();
    void insertCheese();
    void insertCottageCheese();
    void insertCracker();
    void insertFilledWafer();
    void insertHam();
    void insertMilk(); // TODO fazer essa bosta
    void insertMortadella();
    void insertSoda(); // TODO fazer essa bosta
    void insertWater(); // TODO fazer essa bosta



public:
    MyBooleanClass *getShortMessageMode() const;

    MyBooleanClass *getVerboseMode() const;

    void setVerboseMode(MyBooleanClass *verboseMode);

    void setShortMessageMode(MyBooleanClass *shortMessageMode);
    void start(char* []);
    void verifyArguments(int, char* []);
};


#endif
