# Notes - Tutorial 25: Understanding Photoresistors and Photo Detectors



---

# 📘 Final Notes: Photoresistors & Voltage Divider in Arduino

## 1. Concept of Photoresistor (LDR)
- A **photoresistor (Light Dependent Resistor)** changes resistance based on light intensity.  
- **Bright light → low resistance (~1kΩ or less)**  
- **Darkness → high resistance (~100kΩ or more)**  

---

## 2. Voltage Divider Principle
When an LDR is paired with a fixed resistor (e.g., 5kΩ), they form a **voltage divider**.  
- Input voltage: \( V_{in} = 5V \) (Arduino supply)  
- Current:  
  \[
  I = \frac{5}{R_s + 5000}
  \]  
- Voltage across fixed resistor (Arduino reads this):  
  \[
  V = \frac{5}{R_s + 5000} \cdot 5000
  \]  

### Behavior:
- **Light ↑ → \(R_s ↓\) → Current ↑ → Voltage ↑ → Higher analogRead value**  
- **Light ↓ → \(R_s ↑\) → Current ↓ → Voltage ↓ → Lower analogRead value**

---

## 3. Arduino Analog Reading
- Arduino’s `analogRead()` converts voltage (0–5V) into a digital value (0–1023).  
- Example:  
  - \( V = 2.5V \) → `analogRead ≈ 512`  
  - \( V = 4V \) → `analogRead ≈ 820`  

---

## 4. Code Logic (Simplified)
- Read LDR value from analog pin.  
- Compare with a **threshold** (e.g., 600).  
- If above threshold → LED for **bright light** ON.  
- If below threshold → LED for **darkness** ON.  

---

## 5. Applications
- **Automatic street lights** (turn ON at night, OFF in day).  
- **Light-sensitive alarms** (trigger when light changes suddenly).  
- **Smart homes** (adjust brightness based on ambient light).  
- **Robotics** (light-following robots).  

---

## 6. Practical Tips
- Always **calibrate threshold** by checking Serial Monitor values in your environment.  
- Use a **voltage divider** with a fixed resistor to ensure stable readings.  
- Add a **delay** (like 250 ms) to avoid flickering LEDs.  

---

✅ With this, you now have:  
- The **Arduino code** (with comments).  
- The **math equations** (voltage divider + current).  
- The **final notes** (concepts, applications, tips).  

---

