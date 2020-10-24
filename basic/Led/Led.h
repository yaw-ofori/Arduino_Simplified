#ifndef _LED_H_
#define _LED_H_

#define _data_direction(x, y) pinMode(x,y)
typedef unsigned int BYTE;

enum mode { OUTPUT = 0, INPUT = 1, HIGH=1, LOW=0  };

class Led
{

public:
    Led();
    ~Led();
    //setters 
    void set_pin (BYTE);

    bool set_mode(mode);
    void blink(unsigned long);


private:
    void pinMode(BYTE pin, mode m) {}
    void digitalWrite(BYTE led_pin, mode state) { }
    void delay (unsigned long ms) { }

private:
    BYTE m_pin;

};



#endif