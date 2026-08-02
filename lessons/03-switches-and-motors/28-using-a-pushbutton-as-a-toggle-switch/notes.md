# Notes - Tutorial 28: Using a Pushbutton as a Toggle Switch

Here are clear, exam‑style notes on **Arduino Pushbutton as a Toggle Switch** — perfect for revision and practical setup:

---

# 📘 Notes: Arduino Pushbutton Toggle Switch

## 🔑 Concept
- A **pushbutton** can act as a **toggle switch**: each press changes the state of an output (e.g., LED).
- Unlike a normal button (momentary ON/OFF), toggle logic makes the LED stay ON until the next press.

---

## ⚙️ Components Needed
- Arduino board (Uno/Nano/MEGA)
- Pushbutton
- LED
- Resistor (220Ω for LED, 10kΩ for button pull‑down if needed)
- Breadboard + jumper wires

---

## 🛠️ Circuit Setup
- **Button**: One side to Arduino pin (e.g., D12), other side to GND.  
- Use **internal pull‑up** (`pinMode(buttonPin, INPUT_PULLUP)`) or external resistor.  
- **LED**: Anode → Arduino pin (e.g., D8), Cathode → GND via 220Ω resistor.

---

## 🧩 Code Logic
1. **Read button state** using `digitalRead(buttonPin)`.
2. **Compare with last state** to detect a press event (LOW → HIGH transition).
3. **Toggle LED state**:
   - If LED is OFF → turn ON.
   - If LED is ON → turn OFF.
4. **Store states** (`lastButtonState`, `ledState`) for next loop.
5. Optional: add **debounce delay** to avoid false toggles.

---

## 🖥️ Example Code (Simple)
```cpp
const int buttonPin = 12;
const int ledPin = 8;

int buttonState;
int lastButtonState = LOW;
int ledState = LOW;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastButtonState == LOW) {
    ledState = !ledState;             // Toggle LED state
    digitalWrite(ledPin, ledState);   // Apply state
    delay(200);                       // Simple debounce
  }

  lastButtonState = buttonState;
}
```

---

## 📋 Key Points
- **Toggle vs. Momentary**: Toggle remembers state, momentary does not.
- **Debouncing**: Mechanical buttons can cause multiple signals; use `delay()` or software debounce.
- **State Variables**: Essential for tracking LED and button changes.
- **Practical Use**: Light switches, mode selectors, start/stop controls.

---

## 🧠 Quick Takeaways
- Pushbutton toggle = **memory of state**.  
- Needs **two variables**: button state + LED state.  
- Debounce ensures **stable switching**.  
- Compact toggle: `ledState = !ledState;`.

---

