# Notes - Tutorial 8: Understanding PWM (Pulse Width Modulation)

Pulse Width Modulation (PWM) on Arduino lets you simulate analog output using digital pins, and the analogWrite() command is the simplest way to control duty cycle values between 0–255. This is commonly used for LED brightness control, motor speed regulation, and generating signals.



🔧 What is PWM?
Definition: PWM (Pulse Width Modulation) is a technique to create analog-like behavior using digital signals.

Mechanism: A digital pin rapidly switches between HIGH (Vcc) and LOW (0V).

The duty cycle (percentage of time the signal is HIGH) determines the effective voltage.

Example: At 50% duty cycle, the pin outputs ~2.5V on a 5V Arduino board.

Frequency: On most Arduino boards, PWM runs at ~490 Hz (period ≈ 2 ms). Some pins (like 5 and 6 on UNO) use ~980 Hz.


⚡ Using analogWrite()
Syntax:

analogWrite(pin, value);
pin: Must be a PWM-capable pin (marked with ~ on Arduino boards).

value: Duty cycle from 0 (always LOW) to 255 (always HIGH).

Examples:

analogWrite(9, 0); → LED OFF

analogWrite(9, 127); → LED at ~50% brightness

analogWrite(9, 255); → LED fully ON


📌 Common PWM Pins
Board	PWM Pins
UNO/Nano/Mini	3, 5, 6, 9, 10, 11
Mega	2–13, 44–46
Leonardo/Micro	3, 5, 6, 9, 10, 11, 13
Due	2–13 + DAC0/DAC1 (true analog)


🌟 Applications of PWM
LED Dimming: Smooth brightness control.

Motor Speed Control: Adjust rotation speed of DC motors.

Audio Generation: Create tones or signals.

Communication: Infrared LED modulation for remotes.



⚠️ Limitations & Tips
Frequency Control: analogWrite() does not let you change PWM frequency directly. For advanced control, you must manipulate timer registers.

Resolution: Default is 8-bit (0–255). On newer boards, you can use analogWriteResolution(bits) to increase precision.

Filtering: With a capacitor, PWM can be smoothed into a true analog voltage.




WHAT HAPPEN IF WE ADD CAPACITOR TO CKT

Adding a capacitor to a PWM circuit changes the behavior significantly because the capacitor acts as a low-pass filter. Here’s what happens:

🔋 Effect of Adding a Capacitor
Smoothing the PWM signal:

PWM is a square wave (rapid ON/OFF).

A capacitor charges when the signal is HIGH and discharges when LOW.

This averaging effect smooths the waveform into a more stable DC-like voltage.

Result: Instead of a pulsing signal, you get a voltage proportional to the duty cycle.

Example: On a 5V Arduino, a 50% duty cycle with a capacitor gives ~2.5V steady output.



⚡ Practical Uses
Analog voltage simulation: Useful when you need a true analog voltage (e.g., feeding into an op-amp or sensor circuit).

Audio applications: Capacitors can smooth PWM audio signals to reduce noise.

Motor control: Helps reduce vibration and noise in motors by smoothing the drive signal.

⚠️ Things to Watch
Capacitor size matters:

Too small → still see ripples.

Too large → slow response, sluggish changes in voltage.

RC filter design: Often combined with a resistor to form an RC low-pass filter for better control.

Load dependency: The smoothing effect depends on what’s connected to the output (LED, motor, etc.).

