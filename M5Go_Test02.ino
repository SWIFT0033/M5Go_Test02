#include <M5Stack.h>

const uint8_t NORMAL_BRIGHTNESS = 255;
const uint8_t MINIMUM_BRIGHTNESS = 0;
const uint8_t SPEAKER_VOLUME = 7;
const uint32_t BUTTON_A_LONG_PRESS_MS = 1000;

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

void drawEnderDragonFace() {
  const uint16_t dragonBlack = M5.Lcd.color565(10, 4, 16);
  const uint16_t dragonPurple = M5.Lcd.color565(55, 18, 75);
  const uint16_t dragonScale = M5.Lcd.color565(90, 35, 115);
  const uint16_t dragonEye = M5.Lcd.color565(220, 70, 255);
  const uint16_t dragonGlow = M5.Lcd.color565(255, 170, 255);

  M5.Lcd.setBrightness(NORMAL_BRIGHTNESS);
  M5.Lcd.fillScreen(dragonPurple);

  // Horns and a large blocky dragon head.
  M5.Lcd.fillRect(24, 0, 48, 72, dragonBlack);
  M5.Lcd.fillRect(248, 0, 48, 72, dragonBlack);
  M5.Lcd.fillRect(48, 24, 224, 184, dragonBlack);
  M5.Lcd.fillRect(16, 56, 48, 64, dragonBlack);
  M5.Lcd.fillRect(256, 56, 48, 64, dragonBlack);

  // Scales, glowing eyes, and the dragon's snout.
  M5.Lcd.fillRect(112, 32, 40, 32, dragonScale);
  M5.Lcd.fillRect(168, 32, 40, 32, dragonScale);
  M5.Lcd.fillRect(72, 80, 72, 40, dragonEye);
  M5.Lcd.fillRect(176, 80, 72, 40, dragonEye);
  M5.Lcd.fillRect(112, 88, 32, 24, dragonGlow);
  M5.Lcd.fillRect(176, 88, 32, 24, dragonGlow);
  M5.Lcd.fillRect(80, 144, 160, 80, dragonBlack);
  M5.Lcd.fillRect(112, 160, 24, 24, dragonPurple);
  M5.Lcd.fillRect(184, 160, 24, 24, dragonPurple);
  M5.Lcd.fillRect(128, 200, 64, 24, dragonScale);
}

void drawWardenFullBody() {
  const uint16_t caveBlack = M5.Lcd.color565(5, 12, 16);
  const uint16_t wardenDark = M5.Lcd.color565(18, 48, 54);
  const uint16_t wardenTeal = M5.Lcd.color565(20, 95, 100);
  const uint16_t sculkBlue = M5.Lcd.color565(20, 165, 175);
  const uint16_t hornBone = M5.Lcd.color565(170, 200, 185);

  M5.Lcd.setBrightness(NORMAL_BRIGHTNESS);
  M5.Lcd.fillScreen(caveBlack);

  // Horns and head.
  M5.Lcd.fillRect(60, 16, 40, 12, hornBone);
  M5.Lcd.fillRect(76, 28, 40, 16, wardenTeal);
  M5.Lcd.fillRect(220, 16, 40, 12, hornBone);
  M5.Lcd.fillRect(204, 28, 40, 16, wardenTeal);
  M5.Lcd.fillRect(108, 20, 104, 64, wardenDark);
  M5.Lcd.fillRect(128, 48, 64, 20, sculkBlue);
  M5.Lcd.fillRect(144, 52, 32, 12, caveBlack);

  // Torso, glowing rib cage, and heart.
  M5.Lcd.fillRect(96, 84, 128, 96, wardenDark);
  M5.Lcd.fillRect(112, 96, 96, 12, wardenTeal);
  M5.Lcd.fillRect(112, 120, 96, 12, wardenTeal);
  M5.Lcd.fillRect(112, 144, 96, 12, wardenTeal);
  M5.Lcd.fillRect(132, 92, 12, 68, sculkBlue);
  M5.Lcd.fillRect(176, 92, 12, 68, sculkBlue);
  M5.Lcd.fillRect(148, 116, 24, 24, sculkBlue);

  // Long arms and legs complete the full-body silhouette.
  M5.Lcd.fillRect(48, 84, 48, 112, wardenDark);
  M5.Lcd.fillRect(224, 84, 48, 112, wardenDark);
  M5.Lcd.fillRect(40, 176, 56, 28, wardenTeal);
  M5.Lcd.fillRect(224, 176, 56, 28, wardenTeal);
  M5.Lcd.fillRect(108, 180, 44, 60, wardenDark);
  M5.Lcd.fillRect(168, 180, 44, 60, wardenDark);
  M5.Lcd.fillRect(100, 224, 52, 16, wardenTeal);
  M5.Lcd.fillRect(168, 224, 52, 16, wardenTeal);
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

void playEnderDragonSound() {
  const uint16_t frequencies[] = {
      2800, 2250, 3200, 1900, 1450, 1100, 820, 610, 430, 300, 210, 140};
  const uint16_t durations[] = {80, 70, 90, 70, 80, 90, 90, 100, 110, 120, 130, 180};

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
  static bool buttonComboHandled = false;
  static bool buttonALongHandled = false;

  M5.update();

  if (M5.BtnC.wasPressed()) {
    M5.Speaker.mute();
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setBrightness(MINIMUM_BRIGHTNESS);
    buttonComboHandled = false;
    buttonALongHandled = false;
    return;
  }

  const bool btnADown = M5.BtnA.isPressed();
  const bool btnBDown = M5.BtnB.isPressed();

  if (btnADown && btnBDown) {
    if (!buttonComboHandled) {
      drawEnderDragonFace();
      playEnderDragonSound();
      buttonComboHandled = true;
    }
    return;
  }

  if (!btnADown && !btnBDown) {
    buttonComboHandled = false;
  }

  if (!btnADown) {
    buttonALongHandled = false;
  }

  if (buttonComboHandled) {
    return;
  }

  if (btnADown && !btnBDown && !buttonALongHandled &&
      M5.BtnA.pressedFor(BUTTON_A_LONG_PRESS_MS)) {
    drawWardenFullBody();
    buttonALongHandled = true;
    return;
  }

  if (M5.BtnA.wasPressed()) {
    drawCreeperFace();
    playCreeperSound();
  } else if (M5.BtnB.wasPressed()) {
    drawEndermanFace();
    playEndermanSound();
  }
}
