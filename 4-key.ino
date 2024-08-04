#include <Keyboard.h>

// Pins
int pin_1 = A0;
int pin_2 = A1;
int pin_3 = A8;
int pin_4 = A7;

// Init Pins analogRead Value 
int pin_1_val = 0;
int pin_2_val = 0;
int pin_3_val = 0;
int pin_4_val = 0;

// Analog trigger threshold per key
// if analogRead (pin_x_val) less that this value, trigger the key
int key_1_thresh = 15; 
int key_2_thresh = 15;
int key_3_thresh = 15;
int key_4_thresh = 15;

void setup() {
  delay(5000);
  //Enable serial for debug
  // Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // Read the analog input value of each pin
   pin_1_val = analogRead(pin_1);
   pin_2_val = analogRead(pin_2);
   pin_3_val = analogRead(pin_3);
   pin_4_val = analogRead(pin_4);

  // Debug Serial Output
  //  Serial.println(pin_1_val);
  //  Serial.println(pin_2_val);
  //  Serial.println(pin_2_val);
  //  Serial.println(pin_4_val);

   // Measure the analog input value against the threshold value & handle key press
   if (pin_1_val < key_1_thresh){Keyboard.press('d');}
   else{Keyboard.release('d');}
   if (pin_2_val < key_2_thresh){Keyboard.press('f');}
   else{Keyboard.release('f');}
   if (pin_3_val < key_3_thresh){Keyboard.press('j');}
   else{Keyboard.release('j');}
   if (pin_4_val < key_4_thresh){Keyboard.press('k');}
   else{Keyboard.release('k');}
   
}