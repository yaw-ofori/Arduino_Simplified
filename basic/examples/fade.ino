#include <Led.h>

Led myLed;

void setup(){
    myLed.set_mode(OUTPUT);
    myLed.init_fader(0);
}

void loop() {
    myLed.fade_out_in(5, 20);
}