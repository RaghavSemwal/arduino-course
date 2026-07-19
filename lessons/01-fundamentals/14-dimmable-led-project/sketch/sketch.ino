/*
  Tutorial 14: Dimmable LED Project
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-14-dimmable-led-project/

  TODO: write/paste your code for this lesson here.
*/

// Arduino Tutorial 14: Dimmable LED Project
// This project uses a potentiometer to control the brightness of an LED

// Define pin connections
int greenpin = 9;   // LED connected to digital pin 9 (PWM pin)
int potpin   = A3;  // Potentiometer connected to analog pin A3

// Variables for storing values
int potval;         // Raw analog value from potentiometer (0–1023)
float LEDval;       // Scaled value for LED brightness (0–255)
float voltage;      // Calculated voltage from potentiometer

void setup()
{
  // Set pin modes
  pinMode(potpin, INPUT);       // Potentiometer as input
  pinMode(greenpin, OUTPUT);    // LED as output

  // Initialize serial communication for debugging
  Serial.begin(9600);           // Open serial monitor at 9600 baud
}

void loop()
{   
  // Read potentiometer value (range: 0–1023)
  potval = analogRead(potpin);
  
  // Convert raw value to voltage (0–5V)
  voltage = (5.0 / 1023.0) * potval;
  
  // Scale potentiometer value to LED brightness (0–255 for PWM)
  LEDval = (255.0 / 1023.0) * potval;
  
  // Alternative method using voltage (commented out)
  // LEDval = (255.0 / 5.0) * voltage;
  
  // Write PWM value to LED pin (controls brightness)
  analogWrite(greenpin, LEDval);
  
  // Print values to Serial Monitor for debugging
  Serial.print("LEDvalue = ");
  Serial.print(LEDval);
  Serial.print("   voltage = ");
  Serial.println(voltage);
  
  // Small delay for readability
  delay(1000);
}
