#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Servo.h>
Servo myservo;

const byte ROWS = 4; 
const byte COLS = 4; 
const byte buttonPin = 23; //
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {6, 5, 4, 3}; 
byte colPins[COLS] = {2, 1, 0, 14}; 

Keypad keypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
const String correctPin = "1234"; 
const String maintPin = "#*32"; 
const String opnPin = "#*41"; 

bool maintenanceEntered = false;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Enter PIN:");
  myservo.attach(16);
  myservo.write(90);
}

void loop() {
  String enteredPin = "";
  while (enteredPin.length() < 4) {
    char key = keypad.getKey();
    if (key) {
      enteredPin += key;
      lcd.setCursor(0, 1);
      lcd.print(enteredPin);
    }
  }
  if (enteredPin.length() == 4) {
    if (enteredPin == correctPin) {
      lcd.clear();
      lcd.print("ERR 27");
      delay(2000); 
      lcd.clear();
      lcd.print("Enter PIN:");
    } 
    else if (enteredPin == maintPin) {
      lcd.clear();
      lcd.print("Maintenance");
      maintenanceEntered = true;
      enteredPin = ""; 
    } 
    else if (maintenanceEntered && enteredPin == opnPin) {
      lcd.clear();
      lcd.print("Man override");
      myservo.write(150);
      enteredPin = ""; 
      delay(2000); 
     
    } 
    else {
      lcd.clear();
      lcd.print("Incorrect");
      delay(2000); 
      lcd.clear();
      lcd.print("Enter PIN:");
      enteredPin = ""; 
      
  }
}
}
