/*
  Tutorial 7: Understanding the Arduino AnalogWrite Command
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-7-understanding-the-arduino-analog-write-command/

  TODO: write/paste your code for this lesson here.
*/

// int redpin=9,bright=255;
// void setup()
// {
//   pinMode(redpin, OUTPUT);
// }

// void loop()
// {
//   analogWrite(redpin,bright);
// }




int redpin = 9;

void setup() {
  pinMode(redpin, OUTPUT);
}

void loop() {
  for (int bright = 0; bright <= 255; bright++) {
    analogWrite(redpin, bright);
    delay(10); // smooth fade in
  }
  for (int bright = 255; bright >= 0; bright--) {
    analogWrite(redpin, bright);
    delay(10); // smooth fade out
  }
}
