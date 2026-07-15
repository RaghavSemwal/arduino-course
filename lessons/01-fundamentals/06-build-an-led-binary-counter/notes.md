# Notes - Tutorial 6: Build an LED Binary Counter

1 — Variable declaration
int ledpin[4] = {2, 3, 4, 5};
This creates an array of 4 integers. An array stores multiple values under one name. Each value is the pin number connected to one LED — pin 2 is LED 0 (least significant bit), pin 5 is LED 3 (most significant bit). Using an array means we can loop through all pins instead of writing four separate lines.
Viva QWhy use an array instead of 4 separate variables?
Because we can use a for loop to process all 4 pins at once. It makes the code shorter and easier to scale.

2 — setup() function
void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledpin[i], OUTPUT);
  }
}
setup() runs once when the Arduino powers on. pinMode(pin, OUTPUT) tells the Arduino that a pin will send signals out, not receive them. The for loop runs 4 times (i = 0, 1, 2, 3) and sets each LED pin as output. Without this, the pins default to INPUT mode and the LEDs won't turn on.
Viva QWhat happens if you forget to call pinMode?
The pin stays in INPUT mode by default. digitalWrite will have no effect and the LEDs will not light up.


3 — loop() function
void loop() {
  for (int number = 0; number < 16; number++) {
    showBinary(number);
    delay(1000);
  }
}
loop() runs forever after setup. The for loop counts from 0 to 15 (16 values = all 4-bit binary combinations). For each number, it calls showBinary() to light the correct LEDs, then delay(1000) pauses for 1000 milliseconds (1 second). After 15, the loop restarts from 0 automatically — creating a continuous binary counter.
Viva QWhy 16 numbers? Why not 15?
4 LEDs = 4 bits. 2⁴ = 16 possible combinations (0000 to 1111), representing decimal 0 to 15. The condition is number < 16, so it runs for 0, 1, 2 … 15 — that is exactly 16 values. 


4 — showBinary() function — the key logic
void showBinary(int num) {
  for (int i = 0; i < 4; i++) {
    if (num % 2 == 1) {
      digitalWrite(ledpin[i], HIGH);
    } else {
      digitalWrite(ledpin[i], LOW);
    }
    num = num / 2;
  }
}
This is the most important function. It takes a decimal number and displays its binary form on the LEDs. It works by extracting one bit at a time from right (LSB) to left (MSB).

Step-by-step for the number 6 (binary = 0110):
i (LED)	num	num % 2	LED (pin)	num / 2 (next)
0	6	0	pin 2 → LOW (off)	3
1	3	1	pin 3 → HIGH (on)	1
2	1	1	pin 4 → HIGH (on)	0
3	0	0	pin 5 → LOW (off)	0

Result: OFF ON ON OFF = 0110 in binary = 6 in decimal. The modulo operator (%) gives the remainder after dividing by 2 — this is always the rightmost (least significant) bit. Dividing by 2 then shifts all bits one position to the right, ready for the next iteration.
Viva QWhat does num % 2 do?
% is the modulo operator — it gives the remainder of division. Any number % 2 is either 0 (even, bit = 0) or 1 (odd, bit = 1). This lets us read one binary bit at a time.
Viva QWhy divide num by 2 each iteration?
Dividing by 2 is equivalent to a right bit-shift. It moves the next bit into the LSB position so the next % 2 check reads the next bit. Without this, every LED would just read bit 0 forever.
Viva QWhich LED shows the MSB and which shows the LSB?
ledpin[0] (pin 2) = LSB (bit 0, value 1). ledpin[3] (pin 5) = MSB (bit 3, value 8). The function fills from LSB to MSB because it reads the remainder first.