// C++ code
//
int potentiopin = A5; // Pin connected to the potentiometer 
int ledCount = 10;   
// Number of LEDs
 int ledPins[] = {2,3,4,5,6,7,8,9,10,11}; // Pins connected to the LEDs 
void setup() {
 for (int currentLed = 0; currentLed < ledCount; currentLed++) {
   // Set the LED pins as output
   pinMode(ledPins[currentLed], OUTPUT); 
  }
 }
 // Start a loop
 void loop() {                               
 int potvalue = analogRead(potentiopin); // Analog input
 int ledLevel = map(potvalue, 0, 1023, 0, ledCount);
 //in ledLevel we are maping potentiometer value 0-1023 in 10 levels  
 for (int currentLed = 0; currentLed < ledCount; currentLed++) {
 if (currentLed<ledLevel) { // Turn on LEDs in sequence
 digitalWrite(ledPins[currentLed],HIGH);
    }
 else { // Turn off LEDs in sequence
 digitalWrite(ledPins[currentLed], LOW); 
    }
  }
 }
