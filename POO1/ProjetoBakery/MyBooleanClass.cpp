/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "MyBooleanClass.hpp"

   MyBooleanClass::MyBooleanClass()            { booleanValue = false;  };
   MyBooleanClass::MyBooleanClass(bool value ) { booleanValue = value;  };
   MyBooleanClass::~MyBooleanClass()           { booleanValue = false;  };
   
   const bool MyBooleanClass::getStatus(void)  { return(booleanValue);  };