// The MIT License (MIT)

// Copyright (c) 2020 AWESOMEKEN - BABYSTEPS

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

#include "Led.h"


/*
*   Led - construct LED object setting it to a default pin 13
*   @param - no param
*/
Led::Led() { 
    m_pin = 13; //default pin 
}
/*
*   off - switches the LED off
*   @param
*   p - pin number 
*/
void Led::set_pin(BYTE p) {
    this->m_pin = p;
}
/*
*   set_mode - sets the mode in which pin is supposed to operate
*   mode values = {INPUT, OUTPUT}
*   @param - 
*/
bool Led::set_mode (mode p_mode )
{
    pinMode(this->m_pin, p_mode);

    return true;
}

/*
*   off - blinks the LED at a specified rate 
*   @param 
*   ms - blink rate
*/
void Led::blink(unsigned long ms) {
    digitalWrite(this->m_pin, HIGH);
    delay(ms);
    digitalWrite(this->m_pin, LOW);
    delay(ms);
}
/*
*   ON - switches the LED ON by setting the pin to HIGH 
*   @param - 
*/
void Led::on() {
    digitalWrite(this->m_pin, HIGH);
}
/*
*   off - switches the LED off by setting the pin to LOW
*   @param - 
*/
void Led::off() {
    digitalWrite(this->m_pin, LOW);
}

/*
*   init_fader - sets the initial level of brightness for fading starts
*   @param - 
*/
void Led::init_fader(BYTE brightness_level) {
    this->brightness = brightness_level;
}

/*
*   fade_out_in - fades the LED out and in
*   @param 
*   start - brightness level to start
*   step - amount of increment or decrement in brightness level
*   interval - wait time before transition to new brightness level
*/
void Led::fade_out_in(BYTE step, unsigned long interval){
    analogWrite(led, this->brightness);

    this->brightness = this->brightness + step;

    if (this->brightness <= 0 || this->brightness >= 255) {
        step = -step; //inverts the sign of the step value
    }

    delay(interval);
}

Led::~Led()
{
}

