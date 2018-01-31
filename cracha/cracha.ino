
#include <DigisparkOLED.h>
#include <Wire.h>
// ============================================================================

void setup() {
  // put your setup code here, to run once:
  oled.begin();
  pinMode(1, OUTPUT);//LED BUILT_IN
}

void loop() {
  
  // put your main code here, to run repeatedly:
  //oled.fill(0xFF); //fill screen with color
  digitalWrite(1,HIGH);
  delay(1000);
  //oled.clear(); //all black
  digitalWrite(1,LOW);
  delay(1000);
  //usage: oled.setCursor(X IN PIXELS, Y IN ROWS OF 8 PIXELS STARTING WITH 0);
  oled.setCursor(0, 0); //top left
  oled.setFont(FONT8X16);
  oled.print(F("Lucas N Nobrega")); //wrap strings in F() to save RAM!
  //oled.setFont(FONT6X8);
  //oled.print(F(" OLED!"));
  oled.setCursor(0, 2); //two rows down because the 8x16 font takes two rows of 8
  oled.println(F("ENG COMP - UFPB")); //println will move the cursor 8 or 16 pixels down (based on the front) and back to X=0
  oled.print(F("lucasnnobrega.github.io")); //lines auto wrap
  
  //delay(3000);
  //usage oled.bitmap(START X IN PIXELS, START Y IN ROWS OF 8 PIXELS, END X IN PIXELS, END Y IN ROWS OF 8 PIXELS, IMAGE ARRAY);
  //digitalWrite(1,HIGH);
  //oled.bitmap(0, 0, 128, 8, img0_128x64c1);
  //digitalWrite(1,LOW);
  //delay(3000);
  //oled.bitmap(0, 0, 128, 8, digistumplogo);
  //delay(3000);
}
