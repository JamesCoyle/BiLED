/*
BiLED library - A simple library to control a bicolor red-green LED with 2 pins.

Created August 26st, 2015 by James Coyle (Solus Softworks).

Free for alteration, redistribution, and use (at your own risk). Attribution is
appreciated but not required.
*/

#include "Arduino.h"
#include "BiLED.h"

BiLED::BiLED(int r, int g)
: PIN_R(r), PIN_G(g) {
  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
}

void BiLED::red() {
  digitalWrite(PIN_R, HIGH);
  digitalWrite(PIN_G, LOW);
}

void BiLED::amber() {
  digitalWrite(PIN_R, HIGH);
  digitalWrite(PIN_G, HIGH);
}

void BiLED::green() {
  digitalWrite(PIN_R, LOW);
  digitalWrite(PIN_G, HIGH);
}

void BiLED::off() {
  digitalWrite(PIN_R, LOW);
  digitalWrite(PIN_G, LOW);
}
