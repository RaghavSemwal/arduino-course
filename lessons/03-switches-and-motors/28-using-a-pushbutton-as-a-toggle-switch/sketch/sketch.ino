/*
  Tutorial 28: Using a Pushbutton as a Toggle Switch
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-28-using-a-pushbutton-as-a-toggle-switch/

  TODO: write/paste your code for this lesson here.
*/

// Simple Pushbutton Toggle Example

const int buttonPin = 12;   // Pushbutton connected to pin 12
const int ledPin = 8;       // LED connected to pin 8

int newButtonState;         // Current button state
int lastButtonState = LOW;  // Previous button state
int ledState = LOW;         // LED state

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  newButtonState = digitalRead(buttonPin);

  // Check for button press (transition from LOW to HIGH)
  if (newButtonState == HIGH && lastButtonState == LOW) {
    // Toggle LED state
    if (ledState == LOW) {
      digitalWrite(ledPin, HIGH);
      ledState = HIGH;
    } else {
      digitalWrite(ledPin, LOW);
      ledState = LOW;
    }
    delay(200); // Simple delay to avoid bouncing
  }

  // Update last button state
  lastButtonState = newButtonState;
}
