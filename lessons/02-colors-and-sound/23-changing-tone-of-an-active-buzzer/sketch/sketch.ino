/*
  Tutorial 23: Changing Tone of an Active Buzzer
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-23-changing-tone-of-an-active-buzzer/

  TODO: write/paste your code for this lesson here.
*/

// Arduino Tutorial 23: Changing Tone of an Active Buzzer
// ------------------------------------------------------
// This program demonstrates how to change the tone of an active buzzer
// by varying the ON/OFF delay times. 
// An active buzzer generates sound when powered ON, so we control
// the pitch (tone) by adjusting the frequency of ON/OFF switching.

// Define delay times (in milliseconds)
int dt1 = 1;   // Very short delay → high-pitched tone
int dt2 = 2;   // Slightly longer delay → lower-pitched tone

void setup() {
  // Set pin 3 as output (connect buzzer here)
  pinMode(3, OUTPUT);
}

void loop() {
  // First tone loop (high pitch)
  for (int i = 1; i <= 100; i++) {
    digitalWrite(3, HIGH);   // Turn buzzer ON
    delay(dt1);              // Short ON time
    digitalWrite(3, LOW);    // Turn buzzer OFF
    delay(dt1);              // Short OFF time
  }

  // Second tone loop (lower pitch)
  for (int i = 1; i <= 100; i++) {
    digitalWrite(3, HIGH);   // Turn buzzer ON
    delay(dt2);              // Longer ON time
    digitalWrite(3, LOW);    // Turn buzzer OFF
    delay(dt2);              // Longer OFF time
  }
}
