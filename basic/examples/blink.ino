#include <Led.h>

Led myLed;

void setup(){
    myLed.set_mode(OUTPUT);
}

void loop() {
    myLed.blink();
}