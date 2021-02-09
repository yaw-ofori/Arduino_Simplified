#include <Led.h>

Led myLed;

void setup(){
    myLed.set_mode(OUTPUT);
}

void loop() {
    myLed.on();
    delay(500);
    myLed.off();
    delay(500);
}