/*
BiLED library - A simple library to control a bicolor red-green LED with 2 pins.

Created August 26st, 2015 by James Coyle (Solus Softworks).

Free for alteration, redistribution, and use (at your own risk). Attribution is
appreciated but not required.
*/

#ifndef BILED_H
#define BILED_H

#include "Arduino.h"

class BiLED
{
private:
  const int PIN_G;
  const int PIN_R;
public:
  BiLED(int red, int green);
  void red();
  void amber();
  void green();
  void off();
};

#endif
