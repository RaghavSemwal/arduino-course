# Notes - Tutorial 26: More Fun with Photoresistors
Here are some **concise study notes** on photoresistors (LDRs) and their use in Arduino projects like the one you’re working on:  

---

## 🌞 Photoresistors (LDRs)
- **Definition**: A photoresistor (Light Dependent Resistor, LDR) is a sensor whose resistance changes with light intensity.  
- **Behavior**:
  - Bright light → resistance decreases → higher voltage reading.  
  - Darkness → resistance increases → lower voltage reading.  
- **Range**: Arduino reads values from **0–1023** using `analogRead()` (10-bit ADC).  

---

## ⚡ Circuit Basics
- **Connection**: LDR is usually part of a **voltage divider** with a fixed resistor.  
- **Analog Pin**: Connect the divider output to an analog pin (e.g., A5).  
- **Power**: One side of LDR to 5V, the other side to resistor → GND.  

---

## 🖥️ Arduino Code Concepts
- **Reading Light**:  
  ```cpp
  int photoVal = analogRead(A5);
  ```
- **Serial Monitor**: Useful for debugging sensor values.  
- **Mapping Values**: Convert sensor readings into delays, tones, or LED brightness.  

---

## 🔔 Using with Buzzer
- Light intensity mapped to **tone frequency**.  
- Formula in your code:  
  \[
  toneVal = \frac{9940}{1023} \cdot photoVal + 60
  \]  
- This creates a square wave → buzzer pitch changes with light.  

---

## 💡 Using with LEDs
- Instead of sound, you can blink LEDs based on light level.  
- Example:  
  - Dark → LED ON.  
  - Bright → LED OFF.  

---

## 📌 Applications
- **Automatic night lamps** (LED turns on in dark).  
- **Light-sensitive alarms** (buzzer sounds when light changes).  
- **Interactive projects** (games, sensors for robots).  
- **Energy-saving systems** (street lights controlled by ambient light).  

---

## ✅ Key Takeaways
- LDRs are simple but powerful sensors for detecting light.  
- Arduino can easily read their values and control outputs (LEDs, buzzers).  
- Mapping sensor values lets you create **dynamic responses** (tones, blinking, brightness).  

---

Would you like me to prepare a **short exam-style Q&A set** (like practice questions with answers) based on this topic? That way you can test your understanding quickly.
