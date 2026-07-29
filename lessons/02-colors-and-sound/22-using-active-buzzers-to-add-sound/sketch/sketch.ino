/*
  Tutorial 22: Using Active Buzzers to Add Sound
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-22-understanding-and-using-active-buzzers-to-add-sound-to-your-project/

  TODO: write/paste your code for this lesson here.
*/

// Define pin numbers
int buzzPin = 3;     // Buzzer connected to digital pin 3
int potPin = A2;     // Potentiometer connected to analog pin A2
int potVal = 0;      // Variable to store potentiometer reading

void setup() {
  pinMode(buzzPin, OUTPUT);   // Set buzzer pin as output
  pinMode(potPin, INPUT);     // Set potentiometer pin as input
}

void loop() {
  potVal = analogRead(potPin);   // Read value from potentiometer (0–1023)

  // If potentiometer value is greater than 100, turn buzzer ON
  if (potVal > 100) {
    digitalWrite(buzzPin, HIGH); // Activate buzzer
    delay(1000);                 // Wait for 1 second
  }
  else {
    digitalWrite(buzzPin, LOW);  // Deactivate buzzer
    delay(1000);                 // Wait for 1 second
  }
}

