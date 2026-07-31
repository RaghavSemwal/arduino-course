/*
  Tutorial 26: More Fun with Photoresistors
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-26-more-fun-with-photo-resistors/

  TODO: write/paste your code for this lesson here.
*/

// Arduino Tutorial: Fun with Photoresistors (LDRs)
// -------------------------------------------------
// This program reads light intensity using a photoresistor (LDR)
// connected to analog pin A5. Based on the light level, it generates
// a variable-frequency tone on a buzzer connected to pin 5.
//
// Hardware connections:
// - LDR connected to analog pin A5 (with a resistor divider)
// - Buzzer connected to digital pin 5
// -------------------------------------------------

// Define variables
int photoVal;                   // Stores sensor reading (0–1023)
const int photoValPin = A5;     // Analog pin connected to LDR
const int buzzPin = 5;          // Buzzer pin

void setup() {
  pinMode(photoValPin, INPUT);   // Set LDR pin as input
  pinMode(buzzPin, OUTPUT);      // Set buzzer pin as output
  Serial.begin(9600);            // Start serial communication at 9600 baud
}

void loop() {
  // Step 1: Read the analog value from LDR (range: 0–1023)
  photoVal = analogRead(photoValPin);

  // Step 2: Print sensor value to Serial Monitor for debugging
  Serial.print("Light Intensity: ");
  Serial.println(photoVal);

  // Step 3: Map light intensity to buzzer delay (tone frequency)
  // Formula: toneVal = (maxDelay / 1023) * photoVal + minDelay
  // minDelay = 60 µs (high pitch), maxDelay ≈ 9940 µs (low pitch)
  int toneVal = (9940.0 / 1023.0) * photoVal + 60;

  // Step 4: Generate square wave for buzzer
  digitalWrite(buzzPin, HIGH);        // Turn buzzer ON
  delayMicroseconds(toneVal);         // Wait for half cycle
  digitalWrite(buzzPin, LOW);         // Turn buzzer OFF
  delayMicroseconds(toneVal);         // Wait for half cycle

  // Step 5: Small delay for stability
  delay(100); 
}
