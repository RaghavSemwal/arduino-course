/*
  Tutorial 3: Understanding How Breadboards Work
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-3-understanding-how-breadboards-work/

  TODO: write/paste your code for this lesson here.
*/

// C++ code
//Red LED (pin 8): Blinks 5 times → total duration =5⋅(500+500)=5000ms = 5 seconds.
//Green LED (pin 9): Blinks 10 times → total duration =10⋅(500+500)=10000ms = 10 seconds.
//Blue LED (pin 10): Blinks 15 times → total duration =15⋅(500+500)=15000ms = 15 seconds.

void setup()
{
  pinMode(8, OUTPUT);//red led
  pinMode(9,OUTPUT);//green led
  pinMode(10,OUTPUT);//blue led
}

void loop()
{
  for(int i=0;i<5;i++){
  digitalWrite(8, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  }
  
  for(int i=0;i<10;i++){
  digitalWrite(9, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  }
  
  for(int i=0;i<15;i++){
  digitalWrite(10, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  }
  
  //improvements You Could Try
//Use a function for blinking to avoid repeating code:

// C++ code
// void setup() {
//   pinMode(8, OUTPUT);  // red LED
//   pinMode(9, OUTPUT);  // green LED
//   pinMode(10, OUTPUT); // blue LED
// }

// void blinkLED(int pin, int times, int delayTime) {
//   for (int i = 0; i < times; i++) {
//     digitalWrite(pin, HIGH);
//     delay(delayTime);
//     digitalWrite(pin, LOW);
//     delay(delayTime);
//   }
// }

// void loop() {
//   blinkLED(8, 5, 500);   // Red LED
//   blinkLED(9, 10, 500);  // Green LED
//   blinkLED(10, 15, 500); // Blue LED
// }

