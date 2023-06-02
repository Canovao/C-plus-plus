// includes
#include "MyProgram.hpp"

int main(int argc, char *argv[]){
    auto * program = new MyProgram();

    program->verifyArguments(argc, argv);
    program->start(argv);

    return 0;
}