# Notes - Tutorial 4: Understanding Arduino Variables

Define Variables
Setup
Variables store values like pin numbers and timing delays.

int red_led = 8; → LED connected to pin 8

int dit = 350; → Short blink duration

int dah = 700; → Long blink duration

int LongW = 3000; → Word gap delay

2.configure Pin Mode
Tell Arduino how the pin will be used.

Use pinMode(red_led, OUTPUT);

This sets pin 8 as an output to control the LED



3.Use Variables in Loop
Variables replace raw numbers for flexibility.

digitalWrite(red_led, HIGH); → Turn LED ON

delay(dit); → Wait using variable

digitalWrite(red_led, LOW); → Turn LED OFF

Repeat with dit, dah, and LongW


4.Create Morse Pattern
Application
The LED blinks SOS using variable-based delays.

Three short blinks (dit) → S

Three long blinks (dah) → O

Three short blinks (dit) → S

Pause (LongW) before repeating



5.Advantages of Variables
Key Point
Variables make code readable, reusable, and easy to modify.

Change timing by editing one value

Avoid repeating raw numbers

Improve clarity and maintainability


✅ Summary Notes:

Variables are named storage locations for values (like pin numbers or delays).

They make code flexible (easy to change), readable (clear meaning), and maintainable (less repetition).

In this tutorial, variables control LED timing to blink Morse code SOS.