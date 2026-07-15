/*
  Tutorial 6: Build an LED Binary Counter
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-6-build-an-led-binary-counter/

  TODO: write/paste your code for this lesson here.
*/




// Arduino program to display binary numbers (0–15) using 4 LEDs
// Each LED represents one bit of the binary number

// Define LED pins (connect LEDs with resistors to pins 2–5)
int ledpin[4] = {2, 3, 4, 5};

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < 4; i++) {
    pinMode(ledpin[i], OUTPUT);
  }
}

void loop() {
  // Loop through numbers 0 to 15
  for (int number = 0; number < 16; number++) {
    showBinary(number);   // Display binary representation on LEDs
    delay(1000);          // Wait 1 second before showing next number
  }
}

// Function to display binary number on LEDs
void showBinary(int num) {
  // Go through each LED (bit position)
  for (int i = 0; i < 4; i++) {
    // Check if the least significant bit (LSB) is 1 or 0
    if (num % 2 == 1) {
      digitalWrite(ledpin[i], HIGH);   // Turn LED ON if bit = 1
    } else {
      digitalWrite(ledpin[i], LOW);    // Turn LED OFF if bit = 0
    }

    // Divide number by 2 to move to the next bit
    num = num / 2;
  }
}
