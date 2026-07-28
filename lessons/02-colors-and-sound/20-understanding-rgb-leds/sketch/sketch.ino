/*
  Tutorial 20: Understanding RGB LEDs
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-20-understanding-rgb-leds/

  TODO: write/paste your code for this lesson here.
*/

// Program: Control RGB LED using Serial input
// Description: User types a colour name (red / green / blue) in Serial Monitor,
// and the corresponding LED lights up.

// -------------------- Pin Configuration --------------------
int redpin = 2;    // Pin connected to RED LED
int greenpin = 3;  // Pin connected to GREEN LED
int bluepin = 4;   // Pin connected to BLUE LED

// Variable to store user input from Serial Monitor
String mycolour;

void setup() {
  // Set LED pins as OUTPUT so Arduino can control them
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);

  // Start Serial communication at 9600 baud rate
  // (must match Serial Monitor settings)
  Serial.begin(9600);
}

void loop() {
  // Prompt user to enter a colour
  Serial.println("What colour LED do you want to blink? (red/green/blue)");

  // Wait until user types something in Serial Monitor
  while (Serial.available() == 0) {
    // Do nothing until input is available
  }

  // Read the entered colour as a string
  mycolour = Serial.readString();
  mycolour.trim();   // Removes spaces and newline characters

  // -------------------- Reset LEDs --------------------
  // Turn OFF all LEDs before lighting the chosen one
  digitalWrite(redpin, LOW);
  digitalWrite(greenpin, LOW);
  digitalWrite(bluepin, LOW);

  // -------------------- Decision Making --------------------
  // Compare user input with expected colour names
  if (mycolour == "red") {
    digitalWrite(redpin, HIGH);   // Turn ON red LED
  }
  else if (mycolour == "green") {
    digitalWrite(greenpin, HIGH); // Turn ON green LED
  }
  else if (mycolour == "blue") {
    digitalWrite(bluepin, HIGH);  // Turn ON blue LED
  }
  else {
    // If user types something invalid
    Serial.println("Invalid colour! Please type: red / green / blue");
  }

  delay(500); // Small delay to stabilize output
}
