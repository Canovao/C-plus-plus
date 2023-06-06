/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "Mortadella.hpp"
#include "Ham.hpp"
#include "Information.hpp"
#include "Beer.hpp"
#include "Bread.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"
#include "Cracker.hpp"
#include "FilledWaffer.hpp"
#include "Food.hpp"
#include "Menu.hpp"
#include "Milk.hpp"
#include "MyBooleanClass.hpp"
#include "Soda.hpp"
#include "Water.hpp"
#include "WineBeer.hpp"
#include "StoutBeer.hpp"
#include "PaleAleBeer.hpp"
#include "BrownAleBeer.hpp"


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
    void insertBeer();
    void insertBeerType1();
    void insertBeerType2();
    void insertBeerType3();
    void insertBeerType4();
    void insertCheese();
    void insertCottageCheese();
    void insertCracker();
    void insertFilledWafer();
    void insertHam();
    void insertMilk();
    void insertMortadella();
    void insertSoda();
    void insertWater();

    void insertStoutBeer();
    void insertWineBeer();
    void insertBrownAleBeer();
    void insertPaleAleBeer();
    
    template <typename TYPE>
    TYPE getInput();

public:
    MyBooleanClass *getShortMessageMode() const;

    MyBooleanClass *getVerboseMode() const;

    void setVerboseMode(MyBooleanClass *verboseMode);

    void setShortMessageMode(MyBooleanClass *shortMessageMode);
    void start(char* []);
    void verifyArguments(int, char* []);
};


#endif
