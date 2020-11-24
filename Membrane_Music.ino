
#include "pitches.h"
#include <Keypad.h>

int duration = 500;  // 500 miliseconds
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 


void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  
  char customKey = customKeypad.getKey();

  switch(customKey)
  {
    case '1': tone(13, NOTE_C5, duration);    break;
    case '2': tone(13, NOTE_D5, duration);    break;
    case '3': tone(13, NOTE_E5, duration);    break;
    case '4': tone(13, NOTE_F5, duration);    break;
    case '5': tone(13, NOTE_G5, duration);    break;
    case '6': tone(13, NOTE_A5, duration);    break;
    case '7': tone(13, NOTE_B5, duration);    break;
    case '8': tone(13, NOTE_C6, duration);    break;
  }

}
