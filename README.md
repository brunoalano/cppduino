cppduino
========

This project aims to allow the use of a general class for using Arduino development of object-oriented way.

The design is extremely simple and can be used as a bootstrap into a simple prototype.

### Features
- Object-Oriented Development for Arduino Uno
- Event-based methods
- Easy setup to work with pins
- Helpers
- Javascript support (soon)
- Lua Support (soon)

### Limitations
- We don't have implemented complex functions

### How to use
Create a folder named __libraries__ in your Arduino project, and clone the __cppduino__ there. (ex: _myarduino_project/libraries/cppduino/_).

Now open the __Arduino IDE__ with your project sketch, go in the __Menu -> Sketch -> Import Libraries -> Add Library and select the _cppduino_ folder__.

In your source code, import our library using:

`#include <cppduino.h>`

### Creating an Arduino Object
```
#include <cppduino.h>

// Create the Arduino Manager
cppduino::Arduino myRobot(cppduino::models::ARDUINO_MODEL_UNO)
// or
cppduino::Arduino myRobot();

// Select what output pins you want
uint8_t output_pins[] = {1, 4, 7, 8};
myRobot.set_output_pins(output_pins);
```
__Done!__