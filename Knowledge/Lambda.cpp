#include <iostream>

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv){

    auto soma = [](int a, int b) { return a + b; };
    std::cout << soma(2, 3) << std::endl;

    int a = 10;
    auto add = [a](int b) { return a + b; };
    std::cout << add(5) << std::endl;

    auto abacaxi = (1>8)? "Laranja":"Abacaxi";// ternário, que é tipo uma lambda, só que mais fraca
    std::cout << abacaxi << std::endl;

    return 0;
}