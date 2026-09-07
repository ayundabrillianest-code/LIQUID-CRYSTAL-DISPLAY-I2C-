#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.clear();         
  lcd.backlight();

}

void loop() {

  lcd.setCursor(2,0);   
  lcd.print("Hello Ayunda!");
  
  lcd.setCursor(2,1);  
  lcd.print("LCD Ayunda");

delay(2000);
lcd.clear();

  lcd.setCursor(2,0);   
  lcd.print("Sekolah");
  
  lcd.setCursor(2,1);  
  lcd.print("SMKN 7");

delay(2000);
lcd.clear();
}

