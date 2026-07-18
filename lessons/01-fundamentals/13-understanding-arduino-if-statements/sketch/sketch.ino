/*
  Tutorial 13: Understanding Arduino If Statements
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-13-understanding-arduino-if-statements/

  TODO: write/paste your code for this lesson here.
*/

// -----------------------------
// Arduino Tutorial: If Statements with Voltage Reading
// -----------------------------

// Step 1: Define variables
int readpin = A5;        // Analog pin A5 will be used as input
int readval;             // Stores the raw ADC value (0–1023)
float v2 = 0;            // Stores the converted voltage value
int delaytime = 500;     // Delay between readings in milliseconds
int redpin = 9;          // Digital pin 9 connected to Red LED

// -----------------------------
// Step 2: Setup function runs once at the start
// -----------------------------
void setup() {
  pinMode(readpin, INPUT);    // Configure A5 as input pin
  pinMode(redpin, OUTPUT);    // Configure pin 9 as output for LED
  Serial.begin(9600);         // Start Serial Monitor at 9600 baud rate
}

// -----------------------------
// Step 3: Loop function runs continuously
// -----------------------------
void loop() {
  // Read the raw analog value (0–1023)
  readval = analogRead(readpin);

  // Convert raw value to voltage (0–5V)
  // Formula: Voltage = (Reference Voltage / ADC Resolution) * raw value
  // Reference Voltage = 5.0V, ADC Resolution = 1023 (10-bit ADC)
  v2 = (5.0 / 1023.0) * readval;

  // Print the voltage value to Serial Monitor
  Serial.print("Voltage: ");
  Serial.println(v2);

  // -----------------------------
  // Decision-making using IF statement
  // -----------------------------
  if (v2 > 4.0) {
    // If voltage is greater than 4.0V, turn LED ON
    digitalWrite(redpin, HIGH);
  } else {
    // Otherwise, turn LED OFF
    digitalWrite(redpin, LOW);
  }

  // Wait for 500 ms before next reading
  delay(delaytime);
}













// -----------------------------------------------------
// Arduino Tutorial: Multi-LED Voltage Indicator
// Using If–Else If–Else Statements
// -----------------------------------------------------

// Step 1: Define variables
int readpin = A5;        // Analog pin A5 will be used as input
int readval;             // Stores the raw ADC value (0–1023)
float v2 = 0;            // Stores the converted voltage value
int delaytime = 500;     // Delay between readings in milliseconds

// LED pins for voltage indication
int redpin = 9;          // Red LED → High voltage
int yellowpin = 10;      // Yellow LED → Medium voltage
int greenpin = 11;       // Green LED → Low voltage

// -----------------------------------------------------
// Step 2: Setup function runs once at the start
// -----------------------------------------------------
void setup() {
  pinMode(readpin, INPUT);     // Configure A5 as input pin
  pinMode(redpin, OUTPUT);     // Configure pin 9 as output for Red LED
  pinMode(yellowpin, OUTPUT);  // Configure pin 10 as output for Yellow LED
  pinMode(greenpin, OUTPUT);   // Configure pin 11 as output for Green LED

  Serial.begin(9600);          // Start Serial Monitor at 9600 baud rate
}

// -----------------------------------------------------
// Step 3: Loop function runs continuously
// -----------------------------------------------------
void loop() {
  // Read the raw analog value (0–1023)
  readval = analogRead(readpin);

  // Convert raw value to voltage (0–5V)
  // Formula: Voltage = (Reference Voltage / ADC Resolution) * raw value
  // Reference Voltage = 5.0V, ADC Resolution = 1023 (10-bit ADC)
  v2 = (5.0 / 1023.0) * readval;

  // Print the voltage value to Serial Monitor
  Serial.print("Voltage: ");
  Serial.println(v2);

  // -----------------------------------------------------
  // Decision-making using If–Else If–Else statements
  // -----------------------------------------------------
  if (v2 > 4.0) {
    // High voltage → Red LED ON
    digitalWrite(redpin, HIGH);
    digitalWrite(yellowpin, LOW);
    digitalWrite(greenpin, LOW);
  }
  else if (v2 <= 4.0 && v2 >= 3.0) {
    // Medium voltage → Yellow LED ON
    digitalWrite(yellowpin, HIGH);
    digitalWrite(redpin, LOW);
    digitalWrite(greenpin, LOW);
  }
  else {
    // Low voltage → Green LED ON
    digitalWrite(greenpin, HIGH);
    digitalWrite(yellowpin, LOW);
    digitalWrite(redpin, LOW);
  }

  // Wait for 500 ms before next reading
  delay(delaytime);
}
