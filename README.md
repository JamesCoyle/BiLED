# BiLED
A simple Arduino library to control a bicolor red-green LED with 2 digital pins.

# Installation
1. Download ZIP 
2. Sketch -> Include Library -> Add .ZIP Library...
3. Include the library in your sketch by either:
 3. Sketch -> Include Library -> BiLED or
 3. Adding `#include <BiLED.h>` to the top of the file

# Usage
Create a BiLED variable and call the BiLED constructor with the pin numbers of the red and green pins. The library will set the pins to outputs so there is no need to do so in your sketch.

    int red = 5;
    int green = 6;
    BiLED led = BiLED(red, green);

The library provides 4 methods to control the LED state: `off()`; `red()`; `amber()`; and `green()`. Their function is pretty self explanitory. Here is a simple example sketch:

    #include <BiLED.h>
    
    BiLED led = BiLED(5, 6);

    void setup() {
      // the library handles all setup!
    }

    void loop() {
      // make the LED red
      led.red();
      delay(250);
      // make the LED amber/orange
      led.amber();
      delay(250);
      // make the LED green
      led.green();
      delay(250);
      // turn the LED off
      led.off();
      delay(250);
    }
