/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Jun/2023
*/

#include "MyProgram.hpp"
#include "FT_bakery.hpp"

FT_bakery::FT_bakery(){
    FT_bakery::program = new MyProgram();
}

int main(int argc, char *argv[]){
    FT_bakery* ft_bakery = new FT_bakery();
     
    ft_bakery->program->verifyArguments(argc, argv);
    ft_bakery->program->start(argv);

    return 0;
}