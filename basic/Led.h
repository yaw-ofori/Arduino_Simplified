#ifndef _LED_H_
#define _LED_H_

#include <Arduino.h>
#define _data_direction(x, y) pinMode(x,y)
typedef uint8_t BYTE;
typedef uint8_t mode;

//enum mode { OUTPUTT = 0, INPUTT = 1, HIGHT=1, LOWT=0  };

class Led
{

public:
    Led();
    ~Led();
    //setters 
    void set_pin (BYTE);

    bool set_mode(mode);
    void blink(unsigned long);
    void on(unsigned long);
    void off(unsigned long);

    void init_fader (BYTE);
    void fade_out_in(BYTE, unsigned long)
private:
   // void pinMode(BYTE pin, mode m) {}
  //  void digitalWrite(BYTE led_pin, mode state) { }
 //   void delay (unsigned long ms) { }

private:
    BYTE m_pin;
    BYTE brightness = 0;

};



#endif
