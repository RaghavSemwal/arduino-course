# Notes - Tutorial 19: Reading Strings from the Serial Monitor



# 📘 **NOTES: Serial Input + LED Control in Arduino**

---

## 🧠 **1. What this program does**
This Arduino program allows the user to **type a colour name** (red / green / blue) in the Serial Monitor.  
Based on the typed colour, the Arduino turns ON the corresponding LED.

This teaches three core concepts:
- Serial communication  
- Reading user input  
- Controlling digital output pins  

---

## 🔌 **2. Hardware Connections**
You need:
- Arduino Uno  
- 3 LEDs (Red, Green, Blue)  
- 3 resistors (220Ω)  
- Jumper wires  

**Connections:**
- Red LED → Pin 2  
- Green LED → Pin 3  
- Blue LED → Pin 4  
- All LED negative legs → GND  

---

## 🧩 **3. Important Arduino Concepts Used**

### **a) pinMode()**
Used to set a pin as INPUT or OUTPUT.
```cpp
pinMode(redpin, OUTPUT);
```

### **b) digitalWrite()**
Used to turn a pin HIGH (5V) or LOW (0V).
```cpp
digitalWrite(redpin, HIGH);
```

### **c) Serial.begin()**
Starts serial communication at a specific baud rate.
```cpp
Serial.begin(9600);
```

### **d) Serial.available()**
Checks if the user has typed something in the Serial Monitor.

### **e) Serial.readString()**
Reads the entire string typed by the user.

### **f) String comparison**
Correct way:
```cpp
if (mycolour == "red")
```
Wrong way:
```cpp
if (mycolour = "red")   // This assigns, not compares
```

---

## 🎯 **4. Program Flow (Step-by-Step)**

1. Arduino asks the user:  
   *“What colour LED do you want to blink?”*

2. Arduino waits until the user types something.

3. Arduino reads the typed colour.

4. Arduino turns OFF all LEDs.

5. Arduino checks:
   - If user typed **red** → turn ON red LED  
   - If **green** → turn ON green LED  
   - If **blue** → turn ON blue LED  
   - Otherwise → print “Invalid colour!”

---

## ⚠️ **5. Common Mistakes Students Make**
- Using `=` instead of `==` in if‑conditions  
- Typing wrong spelling in Serial Monitor  
- Forgetting to turn OFF other LEDs  
- Forgetting `Serial.begin()`  
- Not using `trim()` → input contains newline characters  

---

## 🧪 **6. How to Test the Program**
1. Upload code  
2. Open Serial Monitor  
3. Set **baud rate = 9600**  
4. Type:  
   - `red`  
   - `green`  
   - `blue`  
5. Observe LED behaviour  

---

## 📚 **7. Real‑Life Applications**
- RGB LED control  
- Menu‑based serial interfaces  
- IoT device command input  
- Robot debugging via serial commands  
- Home automation command testing  

---

## 📝 **8. Short Notes (Exam‑Ready)**

- **Serial.available()** → checks if data is received  
- **Serial.readString()** → reads full string  
- **digitalWrite(pin, HIGH)** → turns ON LED  
- **String comparison uses ==**  
- Always **initialize pins** using pinMode()  
- Use **trim()** to remove unwanted characters  

---

