#include <LiquidCrystal.h>

int temp = A0;
LiquidCrystal lcd(7,8,9,10,11,12);

void setup() {
  //Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  pinMode(temp, INPUT);
}

void loop() {
  float value = analogRead(temp);
  float milVoltage = (5 * 1000 * value ) / 1024;
  float degree = milVoltage / 10; // as 10 mv == 1 degree celcius
  lcd.setCursor(0,0);
  lcd.print("Temp :");
  lcd.print(degree);
  lcd.clear();

}
