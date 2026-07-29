# Notes - Tutorial 24: Understanding Passive Buzzers


---

## Full Arduino Code with Comments

```cpp
// Arduino Tutorial 24: Passive Buzzer Control
// A passive buzzer requires a square wave signal to produce sound.
// We will use a potentiometer to vary the frequency of the buzzer tone.

int buzzPin = 9;     // Pin connected to the buzzer
int potPin = A0;     // Pin connected to the potentiometer
int potVal;          // Variable to store potentiometer reading
int toneVal;         // Variable to store calculated tone delay

void setup() {
  pinMode(buzzPin, OUTPUT);   // Set buzzer pin as output
  pinMode(potPin, INPUT);     // Set potentiometer pin as input
}

void loop() {
  // Step 1: Read the potentiometer value (0–1023)
  potVal = analogRead(potPin);

  // Step 2: Map potentiometer value to frequency range
  // Formula: toneVal = (maxDelay / 1023) * potVal + minDelay
  // Here, minDelay = 60 µs, maxDelay ≈ 9940 µs
  toneVal = (9940.0 / 1023.0) * potVal + 60;

  // Step 3: Generate square wave by toggling buzzer pin
  digitalWrite(buzzPin, HIGH);        // Turn buzzer ON
  delayMicroseconds(toneVal);         // Wait for half cycle
  digitalWrite(buzzPin, LOW);         // Turn buzzer OFF
  delayMicroseconds(toneVal);         // Wait for half cycle
}
```

---

## Notes on Passive Buzzers 🎵

### 🔑 Key Concepts
- **Passive vs Active Buzzer**:
  - *Active buzzer*: Has built-in oscillator, produces fixed tone when powered.
  - *Passive buzzer*: Needs external square wave signal to generate sound; more versatile for melodies.
  
- **Square Wave Principle**:
  - Sound is produced by rapid ON/OFF switching of the buzzer pin.
  - Frequency of switching determines pitch (higher frequency → higher pitch).

- **Potentiometer Control**:
  - Acts as a variable resistor.
  - Analog input (0–1023) is mapped to delay values.
  - Smaller delay → faster toggling → higher frequency sound.

### ⚡ Practical Applications
- Alarm systems (variable pitch alerts).
- Musical projects (Arduino piano or melody generator).
- Feedback signals in robotics or embedded systems.

### 🛠️ Tips
- Use `tone()` function for simpler melody generation, but manual square wave control (like above) gives deeper understanding.
- Experiment with different min/max delay values to change pitch range.
- Always connect buzzer with a resistor if needed to limit current.

---






---

# Arduino Tutorial 24: Passive Buzzers

## 📊 Frequency Calculation

We generate a square wave by toggling the buzzer pin ON and OFF with a delay.  
The **frequency** of the sound is determined by the delay time (`toneVal`).

### Formula:
\[
f = \frac{1}{2 \cdot T}
\]

Where:
- \( f \) = frequency (Hz)  
- \( T \) = delay time in seconds (microseconds converted to seconds)

Since `toneVal` is in microseconds:
\[
f = \frac{1}{2 \cdot toneVal \cdot 10^{-6}}
\]

---

### Mapping Potentiometer Value
```cpp
toneVal = (9940.0 / 1023.0) * potVal + 60;
```

- `potVal` ranges from **0 → 1023**  
- `toneVal` ranges from **60 µs → 10,000 µs approx.**

---

### Example Calculations

| Potentiometer Value | toneVal (µs) | Frequency (Hz) |
|---------------------|--------------|----------------|
| 0                   | 60           | ~8333 Hz       |
| 256                 | 2500         | ~200 Hz        |
| 512                 | 5000         | ~100 Hz        |
| 768                 | 7500         | ~66 Hz         |
| 1023                | 10000        | ~50 Hz         |

---

## 📈 Graph: Frequency vs Potentiometer Value

```plaintext
Frequency (Hz)
|
| 9000 ─●
| 7000 ─
| 5000 ─●
| 3000 ─
| 1000 ─●
|  500 ─
|   50 ─●
|
+------------------------------------ Potentiometer Value (0–1023)
   0        256        512        768        1023
```

- The graph shows an **inverse relationship**:  
  As potentiometer value increases, delay increases → frequency decreases → pitch lowers.

---

## 📝 Notes
- Passive buzzers require **square waves** to produce sound.  
- Frequency is controlled by **delay time**.  
- Potentiometer acts as a **variable resistor**, mapping analog input to frequency.  
- Useful for alarms, melodies, and variable pitch signals in robotics.

---
