/*
  Tutorial 16: Fun with Arduino For Loops
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-16-fun-with-arduino-for-loops/

  TODO: write/paste your code for this lesson here.
*/

// Fun with Arduino For Loops
// Blink LEDs in sequence from pin 2 to pin 6

int delayTime = 200;   // Delay between LED blinks (milliseconds)

void setup() {
  // Set pins 2 through 6 as OUTPUT
  for (int pin = 2; pin <= 6; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Turn LEDs ON one by one
  for (int pin = 2; pin <= 6; pin++) {
    digitalWrite(pin, HIGH);   // Turn LED ON
    delay(delayTime);          // Wait
    digitalWrite(pin, LOW);    // Turn LED OFF
  }

  // Optional: reverse sequence (backwards blink)
  for (int pin = 6; pin >= 2; pin--) {
    digitalWrite(pin, HIGH);   // Turn LED ON
    delay(delayTime);          // Wait
    digitalWrite(pin, LOW);    // Turn LED OFF
  }
}
