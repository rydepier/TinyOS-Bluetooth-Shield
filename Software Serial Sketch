/******************************************************************************************/
// Tiny OS Bluetooth Bee Shield Test Sketch
// This sketch tests the shield using the Arduino Software Serial Port (pins 2 and 3)
// Ensure the UART/DLine switch is in the DLine position
// and the two small switches on the Bluetooth unit are facing towards pin 10 on the Bluetooth board
//
// Run this sketch and run a bluetooth app on an Android device (Blueterm)
// press the Reset button on the Arduino and type into the Arduino Serial Port
// Press SEND and it will appear in the Android device.
//
// Type into the Android device terminal, press send and it will appear in the Arduino Serial
// port monitor
// 
// *****************************************************************************************

 #include <SoftwareSerial.h>
        
 SoftwareSerial mySerial(2, 3); // RX, TX

 String buildString = ""; // Stores response of bluetooth device
	              // which simply allows \n between each response.
 void setup()  
 {
 // Open serial communications and wait for port to open:
 Serial.begin(9600);
 Serial.flush(); // clear the buffer to allow the first string sent to print properly
 Serial.println("Bluetooth Connected");
 // SoftwareSerial "com port" data rate. 9600.
 mySerial.begin(9600);
 }

  void loop()
 {

 // Read device output if available.
 if (mySerial.available()) {
 while(mySerial.available()) { // While there is more to be read, keep reading.
 buildString += (char)mySerial.read();
 }
 Serial.println(buildString);
 buildString = ""; // rest string
 }
 // Read user input if available.
 if (Serial.available()){
 delay(10); // The DELAY!
 mySerial.write(Serial.read());
 }
 }// END loop()
