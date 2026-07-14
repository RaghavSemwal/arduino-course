/*
  Tutorial 4: Understanding Arduino Variables
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-4-understanding-arduino-variables/

  TODO: write/paste your code for this lesson here.
*/
/*
🔄 Loop Function
The loop is repeating a Morse code pattern:

First three short blinks (dit) → Morse S

Then three long blinks (dah) → Morse O

Then three short blinks again (dit) → Morse S

Finally, a long pause (LongW) before repeating.

So your LED is actually blinking out SOS in Morse code — a classic distress signal! */


int red_led=8;
int dit=350;
int dah=700;
int LongW=3000;
void setup()
{
  pinMode(red_led, OUTPUT);
}

void loop()
{
  digitalWrite(red_led, HIGH);
  delay(dit); // Wait for 100 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dit); // Wait for 100 millisecond(s)
  
  digitalWrite(red_led, HIGH);
  delay(dit); // Wait for 100 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dit); // Wait for 100 millisecond(s)
  
  digitalWrite(red_led, HIGH);
  delay(dit); // Wait for 100 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dit); // Wait for 100 millisecond(s)
  
  
  
  digitalWrite(red_led, HIGH);
  delay(dah); // Wait for 300 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dah); // Wait for 300 millisecond(s)
  
  digitalWrite(red_led, HIGH);
  delay(dah); // Wait for 300 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dah); // Wait for 300 millisecond(s)
  
  digitalWrite(red_led, HIGH);
  delay(dah); // Wait for 300 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dah); // Wait for 300 millisecond(s)
  
  
  
  digitalWrite(red_led, HIGH);
  delay(dit); // Wait for 100 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dit); // Wait for 100 millisecond(s)
  
  digitalWrite(red_led, HIGH);
  delay(dit); // Wait for 100 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dit); // Wait for 100 millisecond(s)
  
  digitalWrite(red_led, HIGH);
  delay(dit); // Wait for 100 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(dit); // Wait for 100 millisecond(s)
  
  delay(LongW);
}


