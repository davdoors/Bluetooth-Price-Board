#include "Digit.h"

Digit::Digit():value(0x00){
}

void Digit::setValue(uint8_t value) {
    this->value = value;
}

uint8_t Digit::getValue(){
    return value;
}