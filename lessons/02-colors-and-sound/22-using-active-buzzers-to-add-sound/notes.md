# Notes - Tutorial 22: Using Active Buzzers to Add Sound

**Active buzzers have a built-in oscillator and produce a fixed tone as soon as they are powered, while passive buzzers require an external signal (like PWM from Arduino) to generate sound, giving you control over pitch and melody.** In short: active = simple alarms, passive = customizable tones.  

---

## 🔊 Key Differences Between Active and Passive Buzzers

| Feature | **Active Buzzer** | **Passive Buzzer** |
|---------|------------------|--------------------|
| **Internal Circuit** | Has a built-in oscillator | Only piezo element, no oscillator |
| **Signal Needed** | Just DC voltage (HIGH/LOW) | Requires square wave or PWM |
| **Sound Output** | Fixed frequency (usually 2–4 kHz) | Variable pitch, can play melodies |
| **Ease of Use** | Very easy, plug-and-play | Needs coding for tone generation |
| **Arduino Code** | `digitalWrite(pin, HIGH/LOW)` | `tone(pin, frequency, duration)` |
| **Applications** | Alarms, notifications, simple beeps | Music, custom tones, games |
| **Cost (India)** | ₹20–50 (module form) | ₹5–30 (basic component)  [Zbotic](https://zbotic.in/piezo-buzzer-vs-passive-buzzer-arduino-sound-projects/) |

---

## ⚙️ How They Work
- **Active Buzzer**: Contains an oscillator circuit. When powered with 3.3V–5V, it automatically vibrates at a fixed frequency (like 2 kHz). Perfect for alarms or simple beeps.  
- **Passive Buzzer**: Just a piezo disc. Needs an alternating voltage (PWM signal) to vibrate. You can control pitch, duration, and even play melodies.  [Makerguides.com](https://www.makerguides.com/active-and-passive-piezo-buzzers-with-arduino/)  [Zbotic](https://zbotic.in/piezoelectric-buzzer-active-vs-passive-and-how-to-drive-them/)  

---

## 🖥️ Arduino Usage Examples

### Active Buzzer (Simple Alarm)
```cpp
#define BUZZER_PIN 8
void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}
void loop() {
  digitalWrite(BUZZER_PIN, HIGH); // ON
  delay(500);
  digitalWrite(BUZZER_PIN, LOW);  // OFF
  delay(500);
}
```

### Passive Buzzer (Play Melody)
```cpp
#define BUZZER_PIN 9
void setup() {}
void loop() {
  tone(BUZZER_PIN, 1000, 500); // 1kHz tone for 0.5s
  delay(1000);
  tone(BUZZER_PIN, 1500, 500); // 1.5kHz tone
  delay(1000);
}
```

---

## ✅ Choosing the Right Buzzer
- **Use Active** if you just need a simple beep/alarm (like gas leak alert or timer).  
- **Use Passive** if you want flexibility (melodies, variable tones, interactive sound effects).  








Here’s your corrected and well‑commented Arduino code, along with detailed notes so you fully understand how it works:

---

## ✅ Corrected & Commented Code

```cpp
// Define pin numbers
int buzzPin = 3;     // Buzzer connected to digital pin 3
int potPin = A2;     // Potentiometer connected to analog pin A2
int potVal = 0;      // Variable to store potentiometer reading

void setup() {
  pinMode(buzzPin, OUTPUT);   // Set buzzer pin as output
  pinMode(potPin, INPUT);     // Set potentiometer pin as input
}

void loop() {
  potVal = analogRead(potPin);   // Read value from potentiometer (0–1023)

  // If potentiometer value is greater than 100, turn buzzer ON
  if (potVal > 100) {
    digitalWrite(buzzPin, HIGH); // Activate buzzer
    delay(1000);                 // Wait for 1 second
  }
  else {
    digitalWrite(buzzPin, LOW);  // Deactivate buzzer
    delay(1000);                 // Wait for 1 second
  }
}
```

---

## 📘 Notes & Explanation

### 🔧 Hardware Setup
- **Buzzer**: Connect one leg to pin 3, the other to GND.  
- **Potentiometer**: Middle pin to A2, one side to 5V, the other to GND.  

### ⚙️ Code Flow
1. **Variable Declaration**  
   - `buzzPin` → digital pin controlling buzzer.  
   - `potPin` → analog pin reading potentiometer.  
   - `potVal` → stores potentiometer reading (0–1023).  

2. **Setup Function**  
   - Configures buzzer pin as output.  
   - Configures potentiometer pin as input.  

3. **Loop Function**  
   - Reads potentiometer value.  
   - If value > 100 → buzzer ON for 1 second.  
   - Else → buzzer OFF for 1 second.  

### 🔊 Behavior
- Turning the potentiometer changes the analog value.  
- If the value crosses **100**, buzzer beeps.  
- Below 100, buzzer stays silent.  

---

## 📝 Improvements You Can Try
- **Variable Delay**: Use potentiometer value to control buzzer delay.  
  ```cpp
  delay(potVal); // Delay depends on potentiometer position
  ```
- **Tone Function (Passive Buzzer)**:  
  ```cpp
  tone(buzzPin, potVal); // Frequency depends on potentiometer
  ```
- **Threshold Adjustment**: Change `100` to another value for sensitivity.  

---

