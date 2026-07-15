# Notes - Tutorial 7: Understanding the Arduino AnalogWrite Command

Code Explanation
cpp
int redpin = 9, bright = 255;

void setup() {
  pinMode(redpin, OUTPUT);
}

void loop() {
  analogWrite(redpin, bright);
}



int redpin = 9, bright = 255;

redpin is set to pin 9 (a PWM-capable pin on Arduino).

bright = 255 means maximum brightness (PWM duty cycle = 100%).

pinMode(redpin, OUTPUT);

Configures pin 9 as an output pin.

analogWrite(redpin, bright);

Sends a PWM (Pulse Width Modulation) signal to pin 9.

Value range: 0–255

0 → LED completely OFF

255 → LED fully ON

Any value in between → LED brightness proportional to the duty cycle.

⚡ Key Concept: analogWrite
Arduino does not output true analog voltages. Instead, it uses PWM to simulate analog levels.

PWM rapidly switches the pin between HIGH and LOW, and the ratio of ON time to OFF time (duty cycle) determines the perceived brightness of an LED or speed of a motor.

For example:

analogWrite(pin, 128); → ~50% duty cycle → LED appears half-bright.

analogWrite(pin, 64); → ~25% duty cycle → LED dimmer.

💡 Practical Demo Idea
Try this modification to see brightness gradually change:

cpp
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
This will make your LED fade in and out smoothly using PWM.