# Notes - Tutorial 18: Reading Numbers from the Serial Monitor

Arduino LED Blink with Serial Input

This tutorial demonstrates how to control the number of LED blinks using input from the Serial Monitor. The user enters a number, and the LED connected to pin 11 blinks that many times.

Full Code with Comments

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

Notes on the Topic

Serial Communication: Serial.begin(9600) starts communication between Arduino and your computer. The baud rate must match the Serial Monitor.

Waiting for Input: while (Serial.available() == 0) ensures the program waits until the user types something.

Reading Numbers: Serial.parseInt() extracts the first valid integer from the input.

LED Control: digitalWrite(11, HIGH) turns the LED ON, and digitalWrite(11, LOW) turns it OFF.

Delay: delay(1000) pauses the program for 1000 milliseconds (1 second).

Looping: The for loop repeats the ON/OFF cycle based on the number entered.

Practical Tips

Ensure the LED is connected to pin 11 with a resistor (~220Ω) to prevent damage.

Match the Serial Monitor baud rate to 9600.

Try entering different numbers to see how the LED blinks accordingly.

Experiment with changing the delay time to make the LED blink faster or slower.

Extensions

Modify the code to accept two numbers: one for blink count and another for blink speed.

Add conditions to check if the entered number is valid (e.g., greater than zero).

Use multiple LEDs on different pins and control them with different inputs.