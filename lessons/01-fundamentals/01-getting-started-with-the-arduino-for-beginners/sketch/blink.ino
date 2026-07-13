/*
  Tutorial 1: Getting Started with the Arduino for Beginners
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-1-getting-started-with-the-arduino-for-beginners/

  TODO: write/paste your code for this lesson here.
*/

// Arduino Blink Program
// This program makes the LED on pin 13 blink every 500 milliseconds

void setup()
{
  pinMode(13, OUTPUT);   // Set digital pin 13 as an OUTPUT (controls LED)
}

void loop()
{
  digitalWrite(13, HIGH); // Turn LED ON (send 5V to pin 13)
  delay(500);             // Wait for 500 milliseconds (0.5 seconds)

  digitalWrite(13, LOW);  // Turn LED OFF (send 0V to pin 13)
  delay(500);             // Wait for 500 milliseconds (0.5 seconds)
}
