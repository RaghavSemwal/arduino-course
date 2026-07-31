/*
  Tutorial 25: Understanding Photoresistors and Photo Detectors
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-25-understanding-photoresistors-and-photo-detectors/

  TODO: write/paste your code for this lesson here.
*/

// Arduino Tutorial 25: Understanding Photoresistors (LDRs) and Photo Detectors
// This program reads light intensity using a photoresistor (LDR) connected to analog pin A5.
// Based on the light level, it turns ON/OFF two LEDs connected to pins 2 and 3.

// Define variables

int photoVal;                 // Variable to store sensor reading
const int photoValPin = A5;   // Analog pin connected to LDR
const int ledPin1 = 2;        // LED 1 pin (LOW light indicator)
const int ledPin2 = 3;        // LED 2 pin (HIGH light indicator)

// Setup function runs once at the start
void setup() {
  pinMode(photoValPin, INPUT);   // Set LDR pin as input
  pinMode(ledPin1, OUTPUT);      // Set LED1 pin as output
  pinMode(ledPin2, OUTPUT);      // Set LED2 pin as output
  Serial.begin(9600);            // Start serial communication at 9600 baud
}

// Loop function runs continuously
void loop() {
  // Read the analog value from LDR (range: 0–1023)
  photoVal = analogRead(photoValPin);

  // Print sensor value to Serial Monitor for debugging
  Serial.print("Light Intensity: ");
  Serial.println(photoVal);

  // Decision making based on threshold
  if (photoVal > 600) {          // Adjust threshold depending on your environment
    digitalWrite(ledPin2, HIGH); // Bright light → LED2 ON
    digitalWrite(ledPin1, LOW);  // LED1 OFF
  } else {
    digitalWrite(ledPin1, HIGH); // Dim light → LED1 ON
    digitalWrite(ledPin2, LOW);  // LED2 OFF
  }

  delay(250); // Small delay for stability (250 ms)
}
