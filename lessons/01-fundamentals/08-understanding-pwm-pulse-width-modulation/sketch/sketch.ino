/*
  Tutorial 8: Understanding PWM (Pulse Width Modulation)
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-8-understanding-pulse-width-modulation-pwm-and-the-arduino-analog-write-command/

  TODO: write/paste your code for this lesson here.
*/

int redpin=9,bright=127;
 void setup()
 {
   pinMode(redpin, OUTPUT);
 }

 void loop()
 {
   analogWrite(redpin,bright);
}

