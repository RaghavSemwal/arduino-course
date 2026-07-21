/*
  Tutorial 18: Reading Numbers from the Serial Monitor
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-18-reading-numbers-from-the-serial-monitor/

  TODO: write/paste your code for this lesson here.
*/

// Declare a variable to store the number of blinks
int Number_of_blinks;

// Messages for user interaction
String msg = "Please enter the number";
String msg2 = "Your number is:";

// Setup function runs once when the Arduino is powered on or reset
void setup() {
  // Set pin 11 as an output pin (LED connected here)
  pinMode(11, OUTPUT);
  
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);
}

// Loop function runs continuously
void loop() {
  // Prompt the user to enter a number
  Serial.println(msg);
  
  // Wait until the user enters something in the Serial Monitor
  while (Serial.available() == 0) {
    // Do nothing, just wait
  }
  
  // Read the integer entered by the user
  Number_of_blinks = Serial.parseInt();
  
  // Blink the LED the specified number of times
  for (int j = 0; j < Number_of_blinks; j++) {
    digitalWrite(11, HIGH); // Turn LED ON
    delay(1000);            // Wait for 1 second
    digitalWrite(11, LOW);  // Turn LED OFF
    delay(1000);            // Wait for 1 second
  }
  
  // Print confirmation message with the entered number
  Serial.print(msg2);
  Serial.println(Number_of_blinks);
}