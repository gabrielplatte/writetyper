
#include <LCD_HD44780.h>

const int rs = 12, rw = 10, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LCD_HD44780 lcd(rs, rw, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(20, 4);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("I AM GOING CRAZY!        ");
  delay(30);
}
