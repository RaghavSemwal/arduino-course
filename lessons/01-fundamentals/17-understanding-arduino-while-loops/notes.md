# Notes - Tutorial 17: Understanding Arduino While Loops

-Overview

This tutorial demonstrates how to use while loops in Arduino programming. A while loop repeatedly executes a block of code as long as a specified condition remains true.

Code Example

// Define pin numbers
int potPin = A0;        // Potentiometer connected to analog pin A0
int redPin = 7;         // Red LED connected to digital pin 7
int potVal;             // Variable to store potentiometer value
int delayTime = 500;    // Delay time in milliseconds

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set pin modes
  pinMode(potPin, INPUT);    // Potentiometer as input
  pinMode(redPin, OUTPUT);   // LED as output
}

void loop() {
  // Read the potentiometer value (range: 0–1023)
  potVal = analogRead(potPin);

  // Print the potentiometer value to the Serial Monitor
  Serial.println(potVal);

  // Small delay to make readings more readable
  delay(delayTime);

  // While loop: keep LED ON as long as potentiometer value > 1000
  while (potVal > 1000) {
    digitalWrite(redPin, HIGH);      // Turn LED ON
    potVal = analogRead(potPin);     // Keep checking potentiometer value
    Serial.println(potVal);          // Print updated value
    delay(delayTime);                // Delay for readability
  }

  // Once potVal <= 1000, LED will turn OFF
  digitalWrite(redPin, LOW);
}

Key Concepts

analogRead(potPin): Reads the potentiometer value (0–1023).

Serial.println(potVal): Prints the value to the Serial Monitor for observation.

while (potVal > 1000): Keeps executing the block until the potentiometer value drops below or equal to 1000.

digitalWrite(redPin, HIGH): Turns the LED ON.

digitalWrite(redPin, LOW): Turns the LED OFF once the loop exits.

Difference Between if and while

if statement: Executes the block once if the condition is true.

while loop: Executes the block repeatedly until the condition becomes false.

Practical Use

While loops are useful when you want to keep checking a condition continuously.

In this example, the LED stays ON as long as the potentiometer value is above 1000.

When the value drops below 1000, the loop exits and the LED turns OFF.

Takeaway

The while loop allows Arduino programs to wait and react dynamically to sensor inputs until a condition changes. This makes it powerful for tasks like monitoring sensors, waiting for user input, or controlling devices based on thresholds.