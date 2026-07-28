/*
  Tutorial 21: Mixing Primary Colors with an RGB LED
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-21-understanding-and-mixing-primary-colors-with-an-rgb-led/

  TODO: write/paste your code for this lesson here.
*/

// Program: Control RGB LED using 3 potentiometers (Exact float scaling)
// Description: Potentiometers connected to A4 (Red), A2 (Green), A3 (Blue)
// Each potentiometer controls the brightness of its respective LED channel.
// The values are scaled precisely from 0–1023 (ADC) to 0–255 (PWM).

// -------------------- Pin Configuration --------------------
int redpin = 11;    // Pin connected to RED LED
int greenpin = 9;   // Pin connected to GREEN LED
int bluepin = 10;   // Pin connected to BLUE LED

// -------------------- Potentiometer Inputs --------------------
int redPot = A4;    // Potentiometer for RED channel
int greenPot = A2;  // Potentiometer for GREEN channel
int bluePot = A3;   // Potentiometer for BLUE channel

void setup() {
  // Set LED pins as OUTPUT so Arduino can drive them
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);

  // Start Serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // -------------------- Read Potentiometer Values --------------------
  // Each potentiometer gives a value between 0–1023 (10-bit ADC)
  int redValue = analogRead(redPot);
  int greenValue = analogRead(greenPot);
  int blueValue = analogRead(bluePot);

  // -------------------- Scale Values to PWM Range --------------------
  // PWM expects values between 0–255 (8-bit).
  // Exact mathematical scaling: (255.0 / 1023.0) * ADC_value
  // Using float ensures precise conversion, then cast to int for analogWrite.
  float redPWM   = (255.0 / 1023.0) * redValue;
  float greenPWM = (255.0 / 1023.0) * greenValue;
  float bluePWM  = (255.0 / 1023.0) * blueValue;

  // -------------------- Apply PWM to LEDs --------------------
  // analogWrite requires integer values, so float is implicitly converted.
  analogWrite(redpin, redPWM);
  analogWrite(greenpin, greenPWM);
  analogWrite(bluepin, bluePWM);

  // -------------------- Debugging Output --------------------
  // Print scaled values to Serial Monitor for observation
  Serial.print("Red PWM: ");
  Serial.print(redPWM);
  Serial.print(" | Green PWM: ");
  Serial.print(greenPWM);
  Serial.print(" | Blue PWM: ");
  Serial.println(bluePWM);

  // Delay for readability in Serial Monitor
  delay(1000);
}

