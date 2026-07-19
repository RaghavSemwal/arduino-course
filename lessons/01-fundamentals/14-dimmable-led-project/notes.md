# Notes - Tutorial 14: Dimmable LED Project

# Dimmable LED with Arduino

## Overview
This project demonstrates how to control the brightness of an LED using a potentiometer and Arduino.  
The potentiometer acts as an analog input device, and the Arduino converts its readings into PWM signals to dim the LED.

---

## Components Required
- Arduino Uno (or compatible board)
- LED (green or any color)
- 220Ω resistor (for LED protection)
- Potentiometer (10kΩ recommended)
- Breadboard and jumper wires

---

## Circuit Connections
- **LED**: Connect the anode (long leg) to pin 9 through a 220Ω resistor, cathode to GND.  
- **Potentiometer**: Connect one side to 5V, the other side to GND, and the middle pin (wiper) to A3.

---

## Code Explanation
```cpp
int greenpin = 9;   // LED pin (PWM)
int potpin   = A3;  // Potentiometer pin

int potval;         // Raw analog value (0–1023)
float LEDval;       // Scaled PWM value (0–255)
float voltage;      // Voltage calculated from potentiometer

void setup() {
  pinMode(potpin, INPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600); // Initialize serial monitor
}

void loop() {
  potval = analogRead(potpin); // Read potentiometer
  voltage = (5.0 / 1023.0) * potval; // Convert to voltage
  LEDval = (255.0 / 1023.0) * potval; // Scale to PWM range

  analogWrite(greenpin, LEDval); // Control LED brightness

  Serial.print("LEDvalue = ");
  Serial.print(LEDval);
  Serial.print("   voltage = ");
  Serial.println(voltage);

  delay(1000);
}

Key Notes
PWM (Pulse Width Modulation) is used to dim the LED by varying duty cycle.

The potentiometer provides an analog input between 0–1023, which is mapped to 0–255 for PWM.

Voltage calculation helps in debugging and understanding how the potentiometer divides the 5V supply.

Alternative Approach
Instead of manual scaling, you can use Arduino’s built-in map() function:

cpp
LEDval = map(potval, 0, 1023, 0, 255);
This simplifies the code and improves readability.

Applications
Light dimmers

Volume controls

Sensor calibration

Interactive projects where analog input controls output intensity