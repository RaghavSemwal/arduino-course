# Notes - Tutorial 23: Changing Tone of an Active Buzzer



---

## ✅ Correct Arduino Code with Notes

```cpp
// Arduino Tutorial 23: Changing Tone of an Active Buzzer
// ------------------------------------------------------
// This program demonstrates how to change the tone of an active buzzer
// by varying the ON/OFF delay times. 
// An active buzzer generates sound when powered ON, so we control
// the pitch (tone) by adjusting the frequency of ON/OFF switching.

// Define delay times (in milliseconds)
int dt1 = 1;   // Very short delay → high-pitched tone
int dt2 = 2;   // Slightly longer delay → lower-pitched tone

void setup() {
  // Set pin 3 as output (connect buzzer here)
  pinMode(3, OUTPUT);
}

void loop() {
  // First tone loop (high pitch)
  for (int i = 1; i <= 100; i++) {
    digitalWrite(3, HIGH);   // Turn buzzer ON
    delay(dt1);              // Short ON time
    digitalWrite(3, LOW);    // Turn buzzer OFF
    delay(dt1);              // Short OFF time
  }

  // Second tone loop (lower pitch)
  for (int i = 1; i <= 100; i++) {
    digitalWrite(3, HIGH);   // Turn buzzer ON
    delay(dt2);              // Longer ON time
    digitalWrite(3, LOW);    // Turn buzzer OFF
    delay(dt2);              // Longer OFF time
  }
}
```

---

## 📝 Notes & Explanation

- **Active buzzer vs passive buzzer**  
  - *Active buzzer*: Already has an internal oscillator. It produces sound when powered ON.  
  - *Passive buzzer*: Needs a frequency signal (like `tone()` function).  

- **How tone is controlled here**  
  - By rapidly switching the buzzer ON and OFF, we create a square wave.  
  - The **delay values (`dt1`, `dt2`)** control the frequency of this square wave.  
  - Shorter delay → faster switching → higher frequency → higher pitch.  
  - Longer delay → slower switching → lower frequency → lower pitch.  

- **Why two loops?**  
  - The first loop plays a high-pitched tone (fast switching).  
  - The second loop plays a lower-pitched tone (slower switching).  
  - Together, they demonstrate how tone changes with delay.  

- **Experiment idea**  
  - Try changing `dt1` and `dt2` to values like `5`, `10`, `50`.  
  - You’ll hear distinct tones.  
  - You can even make a melody by chaining multiple delay values.  

---

⚡ Tip: If you use a **passive buzzer**, you should use the `tone(pin, frequency)` function instead of manually toggling with `digitalWrite`.  


