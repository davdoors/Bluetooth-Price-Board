#if !defined(DIGIT_H)
#define DIGIT_H

#include "../device/Device.h"

class Digit : public Device{

    private:
    //* Binary values for turning on and off corresponding digit segments.
        static const uint8_t DIGIT_0;
        static const uint8_t DIGIT_1;
        static const uint8_t DIGIT_2;
        static const uint8_t DIGIT_3;
        static const uint8_t DIGIT_4;
        static const uint8_t DIGIT_5;
        static const uint8_t DIGIT_6;
        static const uint8_t DIGIT_7;
        static const uint8_t DIGIT_8;
        static const uint8_t DIGIT_9;
        static const uint8_t DOT_VALUE;
        static const uint8_t DIGIT_OFF;
        
    uint8_t value;
    
    public:
        Digit();
        
        void setValue(uint8_t);
        uint8_t getValue();
        
    
};

const uint8_t Digit::DIGIT_0 = 0x77;
const uint8_t Digit::DIGIT_1 = 0x06;
const uint8_t Digit::DIGIT_2 = 0x3D;
const uint8_t Digit::DIGIT_3 = 0x2F;
const uint8_t Digit::DIGIT_4 = 0x4E;
const uint8_t Digit::DIGIT_5 = 0x6B;
const uint8_t Digit::DIGIT_6 = 0x7B;
const uint8_t Digit::DIGIT_7 = 0x26;
const uint8_t Digit::DIGIT_8 = 0x7F;
const uint8_t Digit::DIGIT_9 = 0x6E;
const uint8_t Digit::DOT_VALUE = 0x80;
const uint8_t Digit::DIGIT_OFF = 0x00;



#endif