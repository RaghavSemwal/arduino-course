/*
  Tutorial 29: Using Push Buttons to Create a Dimmable LED
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-29-using-push-buttons-to-create-dimmable-led/

  TODO: write/paste your code for this lesson here.
*/

// -----------------------------
// Dimmable LED with Push Buttons + Buzzer Alert
// -----------------------------

// Define pin numbers
int buttonPin1 = 12;   // Button 1 increases brightness
int buttonPin2 = 11;   // Button 2 decreases brightness
int LEDPin     = 3;    // LED connected to PWM pin 3
int buzzPin    = 2;    // Buzzer connected to pin 2

// Variables to store button states and LED brightness
int buttonVal1 = 0;
int buttonVal2 = 0;
int LEDBright  = 0;    // Start with LED off (brightness = 0)

void setup() {
  // Set button pins as input
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

  // Set LED and buzzer pins as output
  pinMode(LEDPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);

  // Start serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read button states
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);

  // Print button states to Serial Monitor
  Serial.print("Button 1 = ");
  Serial.print(buttonVal1);
  Serial.print(", ");
  Serial.print("Button 2 = ");
  Serial.println(buttonVal2);

  // Small delay to avoid too fast changes
  delay(100);

  // If Button 1 is pressed (LOW when pressed if using pull-down resistor)
  if (buttonVal1 == LOW) {
    LEDBright = LEDBright + 5;   // Increase brightness
  }

  // If Button 2 is pressed
  else if (buttonVal2 == LOW) {
    LEDBright = LEDBright - 5;   // Decrease brightness
  }

  // Limit brightness to valid PWM range (0–255)
  if (LEDBright > 255) {
    LEDBright = 255;  // Cap at maximum brightness

    // Buzzer alert when max brightness reached
    digitalWrite(buzzPin, HIGH);
    delay(200);
    digitalWrite(buzzPin, LOW);
  }

  if (LEDBright < 0) {
    LEDBright = 0;    // Cap at minimum brightness
  }

  // Write brightness value to LED using PWM
  analogWrite(LEDPin, LEDBright);
}

