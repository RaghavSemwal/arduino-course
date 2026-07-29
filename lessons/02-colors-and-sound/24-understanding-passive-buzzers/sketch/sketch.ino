/*
  Tutorial 24: Understanding Passive Buzzers
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-24-understanding-passive-buzzers/

  TODO: write/paste your code for this lesson here.
*/

// Arduino Tutorial 24: Passive Buzzer Control
// A passive buzzer requires a square wave signal to produce sound.
// We will use a potentiometer to vary the frequency of the buzzer tone.

int buzzPin = 9;     // Pin connected to the buzzer
int potPin = A0;     // Pin connected to the potentiometer
int potVal;          // Variable to store potentiometer reading
int toneVal;         // Variable to store calculated tone delay

void setup() {
  pinMode(buzzPin, OUTPUT);   // Set buzzer pin as output
  pinMode(potPin, INPUT);     // Set potentiometer pin as input
}

void loop() {
  // Step 1: Read the potentiometer value (0–1023)
  potVal = analogRead(potPin);

  // Step 2: Map potentiometer value to frequency range
  // Formula: toneVal = (maxDelay / 1023) * potVal + minDelay
  // Here, minDelay = 60 µs, maxDelay ≈ 9940 µs
  toneVal = (9940.0 / 1023.0) * potVal + 60;

  // Step 3: Generate square wave by toggling buzzer pin
  digitalWrite(buzzPin, HIGH);        // Turn buzzer ON
  delayMicroseconds(toneVal);         // Wait for half cycle
  digitalWrite(buzzPin, LOW);         // Turn buzzer OFF
  delayMicroseconds(toneVal);         // Wait for half cycle
}
