# Notes - Tutorial 3: Understanding How Breadboards Work

🧠 Concept Overview
A breadboard is a reusable platform for building and testing electronic circuits without soldering. It allows you to connect components like LEDs, resistors, and sensors easily using jumper wires.


⚙️ Breadboard Structure

| Section | Description |
| --- | --- |
| **Power Rails** | Long rows on the top and bottom, marked **“+” (red)** and **“–” (blue)**. Used to distribute power (VCC and GND). |
| **Terminal Strips** | The main area in the center. Each column of 5 holes is **electrically connected** vertically. |
| **Gap in the Middle** | Separates the two halves; used to place ICs so each side connects to different pins. |
| **Rows and Columns** | Rows are numbered; columns are labeled A–J for easy reference. |





🔌 How Connections Work
Holes in the same column (A–E or F–J) are connected internally.

Power rails run horizontally across the board.

The center gap isolates the two halves — ideal for integrated circuits (ICs).

You connect components by inserting their leads into connected holes.


⚡ Typical Arduino Setup
Connect Arduino 5 V → breadboard + rail.

Connect Arduino GND → breadboard – rail.

Place components (LEDs, resistors, sensors) across the terminal strips.

Use jumper wires to link Arduino pins to the breadboard.