#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <EEPROM.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo bombaServo;

int niveis[5] = {2, 3, 4, 5, 6};
int vazaoPin = A0;

#define LED_VERMELHO A1
#define LED_VERDE    A2

void setup() {
 lcd.init();
 lcd.backlight();

 for (int i = 0; i < 5; i++) {
   pinMode(niveis[i], INPUT_PULLUP);
 }

 pinMode(LED_VERMELHO, OUTPUT);
 pinMode(LED_VERDE, OUTPUT);

 bombaServo.attach(7);
}
