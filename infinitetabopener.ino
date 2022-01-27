#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
}
