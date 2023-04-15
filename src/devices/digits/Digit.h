#if !defined(DIGIT_H)
#define DIGIT_H

#include "../device/Device.h"
#include <Arduino.h>

class Digit : public Device{

    private:
        static const uint8_t PRINT_0;
    
};

const uint8_t Digit::PRINT_0 = 0x77;

#endif