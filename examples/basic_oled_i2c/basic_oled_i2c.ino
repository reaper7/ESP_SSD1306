#include <SPI.h>
#include <Wire.h>

#include <Adafruit_GFX.h>
#include <ESP_SSD1306.h>

#define SDAPIN  12
#define SCLPIN  14

#define ROTATION_0  0
#define ROTATION_90 1

ESP_SSD1306 display(false);   //reset disable

void setup() {
  Wire.begin(SDAPIN, SCLPIN);        //sda, scl
  Wire.begin();

  display.begin(SSD1306_SWITCHCAPVCC, 0x3c, false);
  display.clearDisplay();

  display.setTextColor(WHITE);
  display.setTextWrap(false);

  //display.setRotation(ROTATION_90);

  display.setCursor(0, 0);
  display.print("text message");

  display.display();

}

void loop() {
  // put your main code here, to run repeatedly:

}
