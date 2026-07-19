# Notes - Tutorial 16: Fun with Arduino For Loops

Arduino For Loop LED Sequence Notes

🔄 Concept

For loops allow repeating actions a set number of times.

Useful for controlling multiple pins, blinking LEDs, or iterating through sensor readings.

📝 Code Overview

int delayTime = 200;   // Delay between LED blinks (milliseconds)

void setup() {
  // Set pins 2 through 6 as OUTPUT
  for (int pin = 2; pin <= 6; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Forward sequence: LEDs blink from pin 2 to 6
  for (int pin = 2; pin <= 6; pin++) {
    digitalWrite(pin, HIGH);   // Turn LED ON
    delay(delayTime);          // Wait
    digitalWrite(pin, LOW);    // Turn LED OFF
  }

  // Reverse sequence: LEDs blink from pin 6 back to 2
  for (int pin = 6; pin >= 2; pin--) {
    digitalWrite(pin, HIGH);   // Turn LED ON
    delay(delayTime);          // Wait
    digitalWrite(pin, LOW);    // Turn LED OFF
  }
}

⚡ Explanation

setup(): Configures pins 2–6 as outputs.

First loop: Blinks LEDs forward (2 → 6).

Second loop: Blinks LEDs backward (6 → 2).

delayTime: Controls speed of blinking.

💡 Hardware Setup

Connect LEDs to pins 2–6 with resistors (220Ω–330Ω).

Other ends of LEDs connect to GND.

🎯 Key Takeaways

For loops simplify repetitive tasks.

Forward and backward sequences demonstrate loop flexibility.

Changing delayTime alters the speed of the LED wave.

