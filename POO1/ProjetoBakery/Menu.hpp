/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MENU
#define MENU

#include <string>
#include <vector>

using namespace std;

class Menu
   {
   private:
      string titulo;
      vector<string> opcoes;

   public:
      Menu(string titulo, vector<string> opcoes);
      virtual ~Menu();
      const virtual int getEscolha();
   };
   
#endif
   
/* fim de arquivo */
