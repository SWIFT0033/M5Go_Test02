#include <M5Stack.h>

const uint8_t NORMAL_BRIGHTNESS = 255;
const uint8_t MINIMUM_BRIGHTNESS = 0;
const uint8_t SPEAKER_VOLUME = 7;

void drawCreeperFace() {
  const uint16_t creeperGreen = M5.Lcd.color565(70, 170, 60);
  const uint16_t creeperLight = M5.Lcd.color565(100, 195, 75);
  const uint16_t creeperDark = M5.Lcd.color565(35, 120, 45);

  M5.Lcd.setBrightness(NORMAL_BRIGHTNESS);
  M5.Lcd.fillScreen(creeperGreen);

  // Pixelated green texture across the full screen.
  M5.Lcd.fillRect(0, 0, 48, 48, creeperLight);
  M5.Lcd.fillRect(112, 0, 48, 40, creeperDark);
  M5.Lcd.fillRect(240, 0, 80, 48, creeperLight);
  M5.Lcd.fillRect(0, 192, 64, 48, creeperDark);
  M5.Lcd.fillRect(80, 160, 32, 40, creeperLight);
  M5.Lcd.fillRect(208, 184, 32, 56, creeperLight);
  M5.Lcd.fillRect(256, 176, 64, 64, creeperDark);

  // Creeper eyes, nose, and mouth.
  M5.Lcd.fillRect(48, 48, 72, 64, BLACK);
  M5.Lcd.fillRect(200, 48, 72, 64, BLACK);
  M5.Lcd.fillRect(128, 88, 64, 48, BLACK);
  M5.Lcd.fillRect(104, 136, 112, 64, BLACK);
  M5.Lcd.fillRect(72, 152, 32, 48, BLACK);
  M5.Lcd.fillRect(216, 152, 32, 48, BLACK);
  M5.Lcd.fillRect(104, 200, 32, 40, BLACK);
  M5.Lcd.fillRect(184, 200, 32, 40, BLACK);
}

void drawEndermanFace() {
  const uint16_t endermanBlack = M5.Lcd.color565(8, 0, 12);
  const uint16_t endermanPurple = M5.Lcd.color565(65, 15, 85);
  const uint16_t eyePurple = M5.Lcd.color565(170, 35, 220);
  const uint16_t eyeGlow = M5.Lcd.color565(235, 100, 255);

  M5.Lcd.setBrightness(NORMAL_BRIGHTNESS);
  M5.Lcd.fillScreen(endermanBlack);

  // Subtle block texture and large glowing Enderman eyes.
  M5.Lcd.fillRect(0, 0, 64, 48, endermanPurple);
  M5.Lcd.fillRect(256, 192, 64, 48, endermanPurple);
  M5.Lcd.fillRect(24, 88, 112, 48, eyePurple);
  M5.Lcd.fillRect(184, 88, 112, 48, eyePurple);
  M5.Lcd.fillRect(88, 100, 48, 24, eyeGlow);
  M5.Lcd.fillRect(184, 100, 48, 24, eyeGlow);
}

void playCreeperSound() {
  const uint16_t frequencies[] = {
      6400, 5200, 7000, 5800, 6600, 4800, 420, 330, 250, 180, 110};
  const uint16_t durations[] = {35, 35, 35, 35, 35, 45, 70, 70, 80, 90, 120};

  for (size_t i = 0; i < sizeof(frequencies) / sizeof(frequencies[0]); ++i) {
    M5.Speaker.tone(frequencies[i]);
    delay(durations[i]);
  }

  M5.Speaker.mute();
}

void playEndermanSound() {
  const uint16_t frequencies[] = {
      900, 1450, 2200, 1150, 2700, 1600, 3100, 1950, 1050, 2400};
  const uint16_t durations[] = {80, 65, 75, 60, 85, 60, 75, 65, 90, 120};

  for (size_t i = 0; i < sizeof(frequencies) / sizeof(frequencies[0]); ++i) {
    M5.Speaker.tone(frequencies[i]);
    delay(durations[i]);
  }

  M5.Speaker.mute();
}

void setup() {
  M5.begin();
  M5.Speaker.setVolume(SPEAKER_VOLUME);
  M5.Lcd.setBrightness(NORMAL_BRIGHTNESS);
  M5.Lcd.fillScreen(BLACK);
}

void loop() {
  M5.update();

  if (M5.BtnA.wasPressed()) {
    drawCreeperFace();
    playCreeperSound();
  }

  if (M5.BtnB.wasPressed()) {
    drawEndermanFace();
    playEndermanSound();
  }

  if (M5.BtnC.wasPressed()) {
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setBrightness(MINIMUM_BRIGHTNESS);
  }
}
