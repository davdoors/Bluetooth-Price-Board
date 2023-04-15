#if !defined(DIGITS_CONTROLLER_H)
#define DIGITS_CONTROLLER_H

#include "../device/Device.h"
#include "Digit.h"

class DigitsController : public Device {
    private:
        Digit units;
        Digit tens;
        Digit hundredths;
        Digit thousandths;
        Digit digits[4];
        
        //* 74HC595 control pins
        static const uint8_t PIN_DS;
        static const uint8_t PIN_SH;
        static const uint8_t PIN_ST;
        static const uint8_t PIN_MR;
        static const uint8_t PIN_OE;  
        
    public:
        DigitsController();
};

const uint8_t DigitsController::PIN_DS = 11;
const uint8_t DigitsController::PIN_SH = 12;
const uint8_t DigitsController::PIN_ST = 8;
const uint8_t DigitsController::PIN_MR = 7;
const uint8_t DigitsController::PIN_OE = 6;

#endif