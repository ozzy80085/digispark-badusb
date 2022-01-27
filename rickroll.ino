#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(650);
  DigiKeyboard.print("https://www.youtube.com/watch?v=a3Z7zEc7AXQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
