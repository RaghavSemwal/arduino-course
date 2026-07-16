# Notes - Tutorial 10: Reading Analog Voltage Using analogRead

-Code Explanation
Pin Setup

cpp
int readpin = A3;

You’re using analog pin A3 as the input pin.

Analog pins can read voltages between 0V and 5V (on most Arduino boards).

Variables

cpp
int readval;
float v2 = 0;
int delaytime = 500;
readval: stores the raw ADC (Analog-to-Digital Converter) value.

v2: stores the converted voltage value.

delaytime: sets a delay of 500 ms between readings.



Setup Function

cpp
void setup() {
  pinMode(readpin, INPUT);
  Serial.begin(9600);
}

Configures pin A3 as an input.

Starts the Serial Monitor at 9600 baud rate so you can see the voltage readings.



Loop Function

cpp
void loop() {
  readval = analogRead(readpin);
  v2 = (5.0 / 1023.0) * readval;
  Serial.println(v2);
  delay(delaytime);
}
analogRead(readpin) gives a value between 0 and 1023 (10-bit resolution).

Formula:

𝑉=(5.0/1023.0)×readval

This converts the raw ADC value into a voltage (0–5V).

Prints the voltage to the Serial Monitor.

Waits 500 ms before repeating.

⚡ Example Output
If you connect a potentiometer to A3:

At 0V, readval = 0 → v2 = 0.00 V

At 2.5V, readval ≈ 512 → v2 ≈ 2.50 V

At 5V, readval = 1023 → v2 ≈ 5.00 V

🔑 Key Takeaways
analogRead() reads voltage as digital values (0–1023).

You must convert it back to voltage using the scaling formula.

The Serial Monitor is your best friend for debugging and visualization.