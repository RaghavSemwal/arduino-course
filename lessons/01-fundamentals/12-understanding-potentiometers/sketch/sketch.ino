/*
  Tutorial 12: Understanding Potentiometers
  Source playlist: https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP
  Reference: https://toptechboy.com/arduino-tutorial-12-understanding-potentiometers/

  TODO: write/paste your code for this lesson here.
*/

// Step 1: Define variables

int readpin = A3;        // Analog pin A3 will be used as input
int readval;             // Stores the raw ADC value (0–1023)
float v2 = 0;            // Stores the converted voltage value
int delaytime = 500;     // Delay between readings in milliseconds

// Step 2: Setup function runs once at the start

void setup() {
  pinMode(readpin, INPUT);   // Configure A3 as input pin
  Serial.begin(9600);        // Start Serial Monitor at 9600 baud rate
}

// Step 3: Loop function runs continuously
void loop() {
  // Read the raw analog value (0–1023)
  readval = analogRead(readpin);

  // Convert raw value to voltage (0–5V)
  // Formula: Voltage = (Reference Voltage / ADC Resolution) * raw value
  // Reference Voltage = 5.0V, ADC Resolution = 1023 (10-bit ADC)
  v2 = (5.0 / 1023.0) * readval;

  // Print the voltage value to Serial Monitor
  Serial.println(v2);

  // Wait for 500 ms before next reading
  delay(delaytime);
}


