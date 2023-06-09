/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include <iostream>
using namespace std;

#ifndef MY_BOOLEAN_CLASS
   #define MY_BOOLEAN_CLASS

class MyBooleanClass
   {
   private: 
      bool booleanValue;
   
   public: 
      MyBooleanClass();
      MyBooleanClass(bool);
      ~MyBooleanClass();
   
      const bool getStatus(void);
   };
      
#endif
