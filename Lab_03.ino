// Define the pins for the LDR and the 5 LEDs
const int ldrPin = A0;      // Pin connected to the LDR
const int ledPins[] = {2, 3, 4, 5, 6}; // Pins connected to the 5 LEDs
const int numLeds = 5;

void setup() {
  // Set up LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
  // Read the analog value from the LDR
  int ldrValue = analogRead(ldrPin);

  // Map the LDR value to the range of LEDs (0 to numLeds - 1)
  int ledLevel = map(ldrValue, 0, 1023,0,numLeds);

  // Display the light intensity on the LEDs
  displayLightIntensity(ledLevel);

  // Print the LDR value and LED level to the serial monitor (optional)
  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" | LED Level: ");
  Serial.println(ledLevel);

  delay(500); // Adjust the delay as needed
}

void displayLightIntensity(int level) {
  // Turn off all LEDs
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  // Turn on LEDs up to the specified level
  for (int i = 0; i <= level; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
}
