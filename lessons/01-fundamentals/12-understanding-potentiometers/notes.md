# Notes - Tutorial 12: Understanding Potentiometers

A potentiometer is a variable resistor that lets you adjust voltage manually, and with Arduino it’s commonly used to control brightness, volume, or sensor calibration. It has three pins: one to 5V, one to GND, and the middle pin to an analog input (like A0). By rotating the knob, you change the resistance, which Arduino reads as a varying voltage between 0–5V.

Here’s a clear step-by-step guide to help you understand and use potentiometers with Arduino:

1
Identify Potentiometer Pins
Setup
Potentiometers usually have 3 pins: VCC, GND, and output.

Connect VCC pin to Arduino 5V

Connect GND pin to Arduino GND

Connect middle pin (wiper) to Arduino analog input (e.g., A0)

2
Wire the Circuit
Place the potentiometer on a breadboard and wire it to Arduino.

Use jumper wires for clean connections

Ensure correct orientation of pins

Double-check power and ground connections

3
Write Arduino Code
Use analogRead() to measure the potentiometer’s voltage.

cpp
int potVal;
void loop() {
  potVal = analogRead(A0);
  Serial.println(potVal);
  delay(250);
}
analogRead(A0) gives values from 0–1023

These correspond to 0–5V input range

4
Convert to Voltage
Scale the raw ADC value to actual voltage.

Voltage = (5.0 / 1023.0) * potVal

Multiply by 5V reference

Print voltage to Serial Monitor

Useful for calibration and debugging

5
Test Applications
Recommended
Use potentiometer input to control outputs like LEDs or motors.

Map potentiometer value to PWM output

Adjust LED brightness smoothly

Control servo angle or motor speed






        +5V (Vcc)
           |
           |
          [ R1 ]
           |
           |-----> (Wiper) ----> Vout → A0 (Arduino)
           |
          [ R2 ]
           |
          GND

Explanation
R1 and R2 represent the two parts of the resistive track.

The Wiper is the middle terminal that slides between R1 and R2.

Vout is the variable voltage output connected to Arduino’s analog pin (A0).

As you rotate the knob, the wiper moves, changing the ratio of R1 and R2, thus varying the output voltage.
