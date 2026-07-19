/*
  Tutorial 15: Understanding Arduino For Loops
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-15-understanding-arduino-for-loops/

  TODO: write/paste your code for this lesson here.
*/

// Define pin numbers for LEDs

int yellowpin = 2;   // Yellow LED connected to digital pin 2
int redpin = 3;      // Red LED connected to digital pin 3

void setup() {
  // Set pin modes to OUTPUT so LEDs can be controlled
  pinMode(yellowpin, OUTPUT);
  pinMode(redpin, OUTPUT);
}

void loop() {
  // Blink yellow LED 5 times
  blink(yellowpin, 5);
  
  // Blink red LED 3 times
  blink(redpin, 3);
}

// Function to blink an LED a given number of times

void blink(int outputpin, int number_of_blink) {
  // For loop repeats the blinking action 'number_of_blink' times
  for (int i = 0; i < number_of_blink; i++) {
    digitalWrite(outputpin, HIGH);   // Turn LED ON
    delay(500);                      // Wait for 500 milliseconds
    digitalWrite(outputpin, LOW);    // Turn LED OFF
    delay(500);                      // Wait for 500 milliseconds
  }
}
