# Notes - Tutorial 13: Understanding Arduino If Statements

Arduino Tutorial Notes: If Statements with Voltage Reading

🔎 Overview

Arduino uses if statements to make decisions based on sensor input.

In this example, we read voltage from an analog pin and control an LED depending on the voltage level.

⚙️ Variables

int readpin = A5; → Analog input pin.

int redpin = 9; → Digital output pin for LED.

int readval; → Stores raw ADC value (0–1023).

float v2; → Stores converted voltage (0–5V).

int delaytime = 500; → Delay between readings in ms.

🛠 Setup Function

pinMode(readpin, INPUT); → Configures A5 as input.

pinMode(redpin, OUTPUT); → Configures pin 9 as output.

Serial.begin(9600); → Starts serial communication.

🔄 Loop Function

Read sensor value:

readval = analogRead(readpin);

Convert to voltage:

v2 = (5.0 / 1023.0) * readval;

Print voltage:

Serial.println(v2);

Decision-making with if statement:

if (v2 > 4.0) {
  digitalWrite(redpin, HIGH); // LED ON
} else {
  digitalWrite(redpin, LOW);  // LED OFF
}

Delay:

delay(delaytime);

🧠 Key Concept: If Statement

Syntax:

if (condition) {
  // code if true
} else {
  // code if false
}

Condition checks whether an expression is true or false.

Enables Arduino to react dynamically to sensor inputs.

🚀 Example Extension

Use multiple LEDs for voltage ranges:

Green LED → Low voltage (< 2.5V).

Yellow LED → Medium voltage (2.5V–4.0V).

Red LED → High voltage (> 4.0V).

✅ Takeaways

analogRead() gives raw sensor values.

Convert raw values to voltage using formula.

if statements allow decision-making.

LEDs or other actuators can be controlled based on sensor thresholds.
