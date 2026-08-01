/*
  Tutorial 27: Understanding Pushbuttons, Pull-up & Pull-down Resistors
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-27-understanding-pushbuttons-and-pull-up-and-pull-down-resistors/

  TODO: write/paste your code for this lesson here.
*/

// Arduino Tutorial 27: Understanding Pushbuttons and Pull-Up/Down Resistors

// Define pin numbers
int buttonPin = 8;   // Pin connected to the push button
int ledPin = 12;     // Pin connected to the LED

void setup() {
  // Configure pin modes
  pinMode(buttonPin, INPUT);   // Button pin as input
  pinMode(ledPin, OUTPUT);     // LED pin as output
  
  // Start serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the current state of the button (HIGH or LOW)
  int buttonState = digitalRead(buttonPin);
  
  // Print button state to Serial Monitor (0 = LOW, 1 = HIGH)
  Serial.println(buttonState);
  delay(100); // Small delay for readability
  
  // Control LED based on button state
  if (buttonState == LOW) {    
    // Button pressed (LOW when using pull-up resistor)
    digitalWrite(ledPin, HIGH); // Turn LED ON
  } else {
    // Button not pressed
    digitalWrite(ledPin, LOW);  // Turn LED OFF
  }
}
