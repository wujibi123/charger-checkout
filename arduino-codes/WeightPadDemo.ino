#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int pressurePin = A0;
int force;

void setup() {
lcd.begin(16, 2);
Serial.begin(9600);
}

void loop() {
force = analogRead(pressurePin);

lcd.clear();
lcd.setCursor(6, 0);

lcd.print(force);

delay(100);
}
