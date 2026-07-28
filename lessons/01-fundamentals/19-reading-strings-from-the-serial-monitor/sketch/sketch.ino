/*
  Tutorial 19: Reading Strings from the Serial Monitor
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-19-reading-strings-from-the-serial-monitor/

  TODO: write/paste your code for this lesson here.
*/

// Control RGB LED using Serial input
// User types a colour name: red / green / blue


int redpin = 2;
int greenpin = 3;
int bluepin = 4;

String mycolour;

void setup() {
  // Set LED pins as OUTPUT
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);

  // Start Serial communication
  Serial.begin(9600);
}

void loop() {

  Serial.println("What colour LED do you want to blink?");
  
  // Wait until user enters something in Serial Monitor
  while (Serial.available() == 0) {
  }

  // Read the entered colour
  mycolour = Serial.readString();
  mycolour.trim();   // Removes spaces/newline characters

  // Turn OFF all LEDs first
  digitalWrite(redpin, LOW);
  digitalWrite(greenpin, LOW);
  digitalWrite(bluepin, LOW);

  // Compare strings using == (NOT =)
  if (mycolour == "red") {
    digitalWrite(redpin, HIGH);
  }
  else if (mycolour == "green") {
    digitalWrite(greenpin, HIGH);
  }
  else if (mycolour == "blue") {
    digitalWrite(bluepin, HIGH);
  }
  else {
    Serial.println("Invalid colour! Type red / green / blue");
  }

  delay(500); // Small delay
}

