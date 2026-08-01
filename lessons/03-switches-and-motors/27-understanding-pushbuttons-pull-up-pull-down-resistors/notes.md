# Notes - Tutorial 27: Understanding Pushbuttons, Pull-up & Pull-down Resistors




### 🔹 Pushbutton Basics
- A pushbutton is a simple switch that connects or disconnects a circuit when pressed.
- It has **two states**:
  - **Pressed** → circuit closed
  - **Released** → circuit open

### 🔹 Floating Pins Problem
- If you connect a button directly to an input pin, the pin may "float" (random HIGH/LOW values).
- To avoid this, we use **pull-up** or **pull-down resistors**.

### 🔹 Pull-Down Resistor
- Keeps the input pin at **LOW (0V)** when the button is not pressed.
- When pressed, the pin connects to **HIGH (5V)**.
- Typical value: **10kΩ resistor** to ground.

### 🔹 Pull-Up Resistor
- Keeps the input pin at **HIGH (5V)** when the button is not pressed.
- When pressed, the pin connects to **LOW (0V)**.
- Arduino has **internal pull-up resistors** (activated with `pinMode(pin, INPUT_PULLUP)`).

---

## 📊 Diagram Explanation (Markdown for VS Code)

Save this as `pushbutton_notes.md` in VS Code:

```markdown
# Pushbutton with Pull-Up and Pull-Down Resistors

## Pull-Down Resistor
```
```
 VCC (5V)
   |
 [Button]
   |
 Arduino Pin ----[10kΩ]---- GND
```

- Pin reads **LOW** when button not pressed.
- Pin reads **HIGH** when button pressed.

---

## Pull-Up Resistor
```
 Arduino Pin ----[10kΩ]---- VCC (5V)
   |
 [Button]
   |
  GND
```

- Pin reads **HIGH** when button not pressed.
- Pin reads **LOW** when button pressed.

---


