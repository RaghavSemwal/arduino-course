# Notes - Tutorial 21: Mixing Primary Colors with an RGB LED



---

## 🎛️ Potentiometers and Analog Input
- **Potentiometer basics**: A variable resistor that outputs a voltage between 0–5V depending on knob position.
- **Arduino ADC**: `analogRead()` converts this voltage into a digital value between **0–1023** (10‑bit resolution).
  - 0 → 0V  
  - 1023 → 5V  
- Each potentiometer is connected to an **analog input pin (A2, A3, A4)**.

---

## 🌈 RGB LED Control
- An RGB LED has **three separate channels**: Red, Green, Blue.
- By adjusting the brightness of each channel, you can mix colors (e.g., Red + Green = Yellow).
- Arduino controls brightness using **PWM (Pulse Width Modulation)** via `analogWrite()`.
  - PWM values range from **0–255** (8‑bit resolution).

---

## 🔢 Scaling ADC to PWM
- Problem: ADC gives **0–1023**, but PWM expects **0–255**.
- Solution: Scale values using exact math:
  \[
  \text{PWM} = \frac{255.0}{1023.0} \times \text{ADC value}
  \]
- Example:
  - ADC = 1023 → PWM = 255.0  
  - ADC = 512 → PWM ≈ 127.6  
  - ADC = 256 → PWM ≈ 63.7  

---

## 🧮 Integer vs Float Scaling
- **Integer approximation**: `ADC / 4` (fast, but slightly inaccurate).
- **Exact float scaling**: `(255.0 / 1023.0) * ADC` (precise, avoids rounding errors).
- In your code, floats are used for accuracy, then implicitly converted to integers when passed to `analogWrite()`.

---

## 🖥️ Serial Monitor Debugging
- Printing values helps visualize how potentiometer positions map to PWM outputs.
- Example output:
  ```
  Red PWM: 128 | Green PWM: 64 | Blue PWM: 200
  ```

---

## ⚡ Practical Notes
- Always use **current‑limiting resistors** for each LED channel to prevent damage.
- Potentiometers should be wired correctly:
  - One side → 5V  
  - Other side → GND  
  - Middle pin → Arduino analog input  
- Delay in `loop()` controls how often values are updated in Serial Monitor.

---

## 📌 Key Takeaways
1. Potentiometers provide analog input (0–1023).  
2. RGB LED brightness is controlled via PWM (0–255).  
3. Exact scaling formula ensures precise color mixing.  
4. Using floats gives accuracy; integers give speed.  
5. Serial Monitor is essential for debugging and learning.  

---

Would you like me to also prepare a **comparison table** between the three methods (`map()`, integer division `/4`, and float scaling `(255.0/1023.0)*ADC`) so you can quickly see their pros and cons side by side?
