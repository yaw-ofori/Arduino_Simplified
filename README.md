# Arduino_Simplified
This project contains classes of basic arduino components used in project. It seeks to simplify arduino programming by abstracting most of the initializations that have to be done, also converting several steps of codes into few lines
#How to Use
Open Libraries folder in arduino root folder.
Create a folder and name it "Led"
Copy and paste Led.h and Led.cpp into this folder.
Restart arduino ide if already opened to load new libraries

#Usage

In .ino file

////////////////////////////////////////////////////

#include <Led.h>

Led redLed;

void setup() {

redLed.set_pin(13);

redLed.set_mode(OUTPUT);

}

void loop() {

redLed.blink(500);

}

///////////////////////////////////////////////////
