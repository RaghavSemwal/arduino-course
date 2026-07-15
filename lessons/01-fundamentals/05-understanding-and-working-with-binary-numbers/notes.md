# Notes - Tutorial 5: Understanding and Working with Binary Numbers

What Are Binary Numbers?
Binary system (base 2) uses only 0 and 1.

Each digit is called a bit.

Example:

Decimal 6 → Binary 0110

Decimal 15 → Binary 1111

⚡ Why Binary Matters in Arduino
LED control: Each LED can represent one bit (ON = 1, OFF = 0).

Memory efficiency: Pack multiple true/false values into a single byte.

Fast math: Multiplying/dividing by powers of 2 is just shifting bits.

Hardware registers: Microcontrollers use bits to configure pins, timers, and sensors.

🧩 Key Concepts in Arduino Binary Tutorial
Binary literals in Arduino

You can write numbers directly in binary:

int x = 0b1010;  // decimal 10

Legacy constants also exist: B1010.

Bitwise operators

& (AND): Select specific bits (masking).

| (OR): Set specific bits.

^ (XOR): Toggle bits.

~ (NOT): Invert bits.

<< (Left shift): Multiply by 2.

>> (Right shift): Divide by 2.

Practical functions

bitRead(x, n) → read the nth bit of x.

bitSet(x, n) → set nth bit to 1.

bitClear(x, n) → set nth bit to 0.

bitWrite(x, n, value) → write 0/1 to nth bit

Study Notes
Binary = base 2 → only 0 and 1.

Decimal to binary conversion → divide by 2, record remainders.

Arduino supports binary literals with 0b.

Bitwise operators let you manipulate bits directly.

Practical use cases: LED patterns, sensor flags, memory optimization, fast math.

⚠️ Common Mistakes
Forgetting LED orientation (long leg = anode to Arduino pin, short leg = cathode to GND).

Using more LEDs than code supports (e.g., wiring 5 LEDs but coding for 4).

Placing num = num / 2; outside the loop (causes wrong binary display).