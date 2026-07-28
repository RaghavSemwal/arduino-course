# Notes - Tutorial 20: Understanding RGB LEDs



---

## 🔑 Notes on This Topic

- **RGB LED basics**:  
  An RGB LED has three internal LEDs (Red, Green, Blue). By turning them ON/OFF in different combinations, you can create multiple colours.

- **Serial Communication**:  
  - `Serial.begin(9600)` starts communication at 9600 bits per second.  
  - `Serial.readString()` reads the text typed in Serial Monitor.  
  - Always use `.trim()` to clean unwanted spaces/newlines.

- **String Comparison**:  
  - Use `==` for comparing strings in Arduino.  
  - Do NOT use `=` (that’s assignment, not comparison).

- **Best Practices**:  
  - Always reset LEDs before turning ON the chosen one.  
  - Provide clear instructions to the user via `Serial.println()`.  
  - Handle invalid inputs gracefully.

- **Extensions you can try**:  
  - Add more colours by mixing LEDs (e.g., red+blue = purple).  
  - Use `analogWrite()` with PWM pins to control brightness.  
  - Create a loop that blinks the chosen colour multiple times.

---
