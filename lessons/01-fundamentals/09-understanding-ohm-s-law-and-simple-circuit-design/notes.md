# Notes - Tutorial 9: Understanding Ohm's Law and Simple Circuit Design

Recall Ohm’s Law
Formula

Understand the relationship between voltage, current, and resistance.

V = I × R

V = Voltage (Volts)

I = Current (Amps)

R = Resistance (Ohms)

Rearrange formula depending on what you need to calculate



2.Gather Components
Setup
Collect the basic parts for the circuit.

Arduino board (UNO recommended)

Breadboard

1 LED

220Ω resistor (or calculated value)

Jumper wires



3.Calculate Resistor Value
Safety
Prevent burning out the LED by limiting current.

R = V / I

Assume LED forward voltage ≈ 2V

Desired current ≈ 20mA (0.02A)

Arduino pin provides 5V → R = (5V - 2V) / 0.02A = 150Ω

Use nearest standard resistor (e.g., 220Ω for safety)



4.Build the Circuit
Hands-On
Connect the LED and resistor to Arduino.

Place LED on breadboard (long leg = anode)

Connect resistor to LED cathode (short leg)

Wire resistor to Arduino GND

Connect LED anode to Arduino pin 13



5.Upload Arduino Code
Test
Write a simple sketch to blink the LED.

cpp
void setup(){
  pinMode(13, OUTPUT);
}
void loop(){
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}


6.Observe and Adjust
Experiment
Test the circuit and modify values.

LED should blink once per second

Try different resistor values to see brightness changes

Note: Lower resistance → higher current → brighter LED (but risk damage)

Higher resistance → dimmer LED, safer for long-term use
