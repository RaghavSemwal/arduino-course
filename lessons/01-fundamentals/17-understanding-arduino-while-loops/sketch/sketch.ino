/*
  Tutorial 17: Understanding Arduino While Loops
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-17-understanding-arduino-while-loops/

  TODO: write/paste your code for this lesson here.
*/

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
