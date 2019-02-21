#ifndef GPIO_H
#define GPIO_H
#include <inttypes.h>

class gpio {
    public:
    gpio();
    ~gpio();

    bool setMode(int pin, int mode);
    bool setFunction(int pin, int pinFunction);
    int getValue(int pin);
    int getValues();
    bool setDigital(int pin, int value);
    bool setPWM(int pin, float percentage, float frequency);
};

#endif