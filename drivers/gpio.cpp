#include "gpio.h"
#include "../matrix.h"
#include "matrix_hal/gpio_control.h"

matrix_hal::GPIOControl gpio_control;

gpio::gpio(){
    // setup hal GPIO
    gpio_control.Setup(&bus);
}
gpio::~gpio(){}

// - Set GPIO Pin state (digital)
// Paramters: int pin (0-15), int mode (0=INPUT or 1=OUTPUT)
bool gpio::setMode(int pin, int mode){
    return gpio_control.SetMode(pin, mode);
}

// - Set GPIO Pin function
// Parameters: int pin (0-15), int function (0=DIGITAL or 1=PWM)
bool gpio::setFunction(int pin, int function){
    return gpio_control.SetFunction(pin, function);
}

// - Read GPIO Pin state (digital only)
int gpio::getValue(int pin){
    return gpio_control.GetGPIOValue(pin);
}

// - Read all GPIO Pin states (digital only)
// returned as a 16bit integer 
int gpio::getValues(){
    return gpio_control.GetGPIOValues();
}

// - Set GPIO Pin Digital
bool gpio::setDigital(int pin, int value){
    return gpio_control.SetGPIOValue(pin, value);
}

// - Set GPIO Pin PWM
bool gpio::setPWM(int pin, float percentage, float frequency){
    return gpio_control.SetPWM(frequency, percentage, pin);
}

// - Set Servo angle through PWM
bool gpio::setServoAngle(int pin, float angle, float min_pulse_ms){
    return gpio_control.SetServoAngle(angle, min_pulse_ms, pin);
}