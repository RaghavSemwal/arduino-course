# Notes - Tutorial 29: Using Push Buttons to Create a Dimmable LED


---

## 📘 Notes on This Topic

### 1. **PWM (Pulse Width Modulation)**
- Arduino uses PWM to simulate analog output on certain pins (marked with `~`).
- `analogWrite(pin, value)` sets duty cycle:
  - `0` → LED OFF
  - `255` → LED fully ON
  - Values in between → LED brightness proportional to duty cycle.

### 2. **Push Buttons**
- Buttons are digital inputs: `HIGH` or `LOW`.
- If using **pull-down resistors**, button reads `LOW` when pressed.
- If using **internal pull-up resistors** (`pinMode(pin, INPUT_PULLUP)`), logic inverts: pressed = `LOW`.

### 3. **Brightness Control**
- Increment/decrement brightness in small steps (e.g., `+5` or `-5`).
- Always **limit values** between 0 and 255 to avoid overflow.

### 4. **Buzzer Alert**
- Simple digital output: `HIGH` turns buzzer ON, `LOW` turns it OFF.
- Used here to signal when LED brightness hits maximum.

### 5. **Debouncing (Optional Improvement)**
- Mechanical buttons can cause multiple rapid signals when pressed.
- Debouncing (via software delay or hardware capacitor) ensures stable input.

---

⚡ **Practical Tip:**  
If you hold the button down, brightness will keep changing rapidly. To make it smoother, you can add **debouncing** or change logic to detect **button press events** instead of continuous reads.

---

Would you like me to extend this into a **debounced version with smoother control** (so brightness only changes once per press, not continuously while holding)? That’s the next step to make this project more polished.