/******************************************************************************************/
// Tiny OS Bluetooth Bee Shield Test Sketch - Sending AT Commands
//  
// Ensure the UART/DLine switch is in the DLine position as AT Commands will be sent via software serial
// Connect RX from the Bluetooth Bee to pin 2 on the Arduino. 
// Connect TX from the Bluetooth Bee to pin 3 on the Arduino
// 
// In normal use both the switches on the switch block are moved to the left
// to send AT commands remove all power and move the top switch to the right
// Switch the power on, the green STATE led will flash on and off slowly
// 
// Open up the Serial Port Monitor
// Type in AT and click on the SEND button, OK will be printed in the monitor
// showing the module is receiving commands.
// 
// *****************************************************************************************

 #include <SoftwareSerial.h>
        
 SoftwareSerial mySerial(2, 3); // RX, TX

 String buildString = ""; // Stores response of bluetooth device
 // which simply allows \n between each response.
	              
 void setup()  
 {
// Open serial communications and wait for port to open:
// Hardware Serial port set to 9600
 Serial.begin(9600);
 Serial.println("Ensure that both NL and CR are selected");
 Serial.println("Enter AT commands");
// SoftwareSerial "com port" data rate. 38400.
 mySerial.begin(38400);  // default speed in AT mode
 }

 void loop() {
// Read device output if available.
 if (mySerial.available()) {
 while(mySerial.available()) { // While there is more to be read, keep reading.
 buildString += (char)mySerial.read();
 }
 Serial.println(buildString);
 buildString = ""; // reset string
 }
 // Read user input if available.
 if (Serial.available()){
 delay(10); 
 mySerial.write(Serial.read());
 } 
  
}
