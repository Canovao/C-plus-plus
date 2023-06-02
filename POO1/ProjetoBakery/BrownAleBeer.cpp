//
// Created by USER on 31/05/2023.
//

#include "BrownAleBeer.hpp"

BrownAleBeer::BrownAleBeer(float d, const string &string, double d1, int i, float d2, int caramelContent) : Beer(d, string, d1, i, d2){
    this->caramelContent = caramelContent;
}

BrownAleBeer::~BrownAleBeer() = default;

string BrownAleBeer::getDescription(){
    return ("BrownAleBeer - Caramel content: " + to_string(caramelContent) + " g/ml");
}
