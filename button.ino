#include <M5Stack.h> /*library m5stack*/

void setup() {
  M5.begin(); /* memulai board m5 stack */
}

void loop() {
  M5.Lcd.setCursor(0, 0); /* posisi tampilan pada lcd */
  M5.Lcd.print("Button A Status: "); /* menampilkan "Button A Status: " */
  M5.Lcd.println(M5.BtnA.read()); /* membaca kondisi Button A */ 
}
