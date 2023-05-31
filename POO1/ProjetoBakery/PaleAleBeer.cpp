#include "PaleAleBeer.hpp"

#include <utility>

PaleAleBeer::PaleAleBeer(float d, string brand, double d1, int i, float d2, string hopType) : Beer(d,std::move(brand),d1, i, d2){
    this->hopType = std::move(hopType);
}

PaleAleBeer::~PaleAleBeer() = default;

string PaleAleBeer::getDescription(){
    return ("PaleAleBeer - Hop type: " + hopType);
}
