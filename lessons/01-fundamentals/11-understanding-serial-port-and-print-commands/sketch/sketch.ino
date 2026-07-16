/*
  Tutorial 11: Understanding Serial Port and Print Commands
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-11-understanding-the-arduino-serial-port-and-print-commands/

  TODO: write/paste your code for this lesson here.
*/

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud
}

void loop() {
  // Example 1: Using Serial.print()
  Serial.print("Hello ");
  Serial.print("World ");
  Serial.print(123);
  delay(1000);

  // Example 2: Using Serial.println()
  Serial.println("Hello");
  Serial.println("World");
  Serial.println(123);
  delay(2000);
}
