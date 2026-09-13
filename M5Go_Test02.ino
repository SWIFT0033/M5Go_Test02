#include <M5Stack.h>

void setup() {
  M5.begin();
  M5.Lcd.fillScreen(BLACK);
}

void loop() {
  M5.update();

  if (M5.BtnA.wasPressed()) {
    M5.Lcd.fillScreen(WHITE);
  }
}
