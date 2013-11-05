/******************************************************************************************/
// Tiny OS Bluetooth Bee Shield Test Sketch
// This sketch tests the shield using the Arduino Serial Port (pins 0 and 1)
// Ensure the UART/DLine switch is in the UART position
// and the two small switches on the Bluetooth unit are facing towards pin 10 on the Bluetooth board
//
// Run this sketch and run a bluetooth app on an Android device (Blueterm)
// press the Reset button on the Arduino and the message "Press 1 to turn on Arduino pin 13 LED
// press 0 to turn it off.
//
// Now press 1 on the Android keyboard, LED 13 will come on, press 0 and it will turn off.
//
// Two way communication!
// *****************************************************************************************

  char INBYTE;
  int  LED = 13; // LED on pin 13

  void setup() {
  Serial.begin(9600); 
  pinMode(LED, OUTPUT);
  Serial.println("Press 1 to turn Arduino pin 13 LED ON or 0 to turn it OFF:");
  }

  void loop() {
  while (!Serial.available());                 // stay here so long as COM port is empty   
  INBYTE = Serial.read();                      // read next available byte
  if( INBYTE == '0' ) {
  digitalWrite(LED, LOW);                      // if it's a 0 (zero) tun LED off
  Serial.println("LED 13 is OFF");             // Send message to the Android device
  }
  if( INBYTE == '1' ) {
  digitalWrite(LED, HIGH);                     // if it's a 1 (one) turn LED on
  Serial.println("LED 13 is ON");              // Send message to the Android device
  }
  delay(200);                                  // wait
}
