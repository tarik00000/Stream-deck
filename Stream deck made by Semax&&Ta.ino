#include <Keyboard.h>


const int key[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 16, 14, 15};
uint32_t previousmillis; 
int keypressed = 0;

void setup() {
  for (int i = 0; i < 12; i++) {
    pinMode(key[i], INPUT_PULLUP); 
  }
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  for (int i = 0; i < 12; i++) {
    if (digitalRead(key[i]) == LOW) {
      if (millis() - previousmillis > 200) { 
        previousmillis = millis();
        keypressed = i + 1;

       
        switch (keypressed) {
          case 1: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('1');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 2: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('2');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 3: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('S');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 4: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('X');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 5: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('M');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 6: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('D');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 7: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('3');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 8:
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('4');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 9: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('R');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 10: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('T');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 11: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('B');
            delay(100);
            Keyboard.releaseAll();
            break;
          case 12: 
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press('E');
            delay(100);
            Keyboard.releaseAll();
            break;
          default:
            break;
        }
      }
    }
  }
}
