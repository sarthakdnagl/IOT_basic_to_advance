// Define the pins for the 5 LEDs
const int ledPins[] = {2, 3, 4, 5, 6};
const int numLeds = 5;

void setup() {
  // Set up LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Run the lights from left to right
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);  // Adjust the delay for the speed of the running lights
    digitalWrite(ledPins[i], LOW);
  }

  // Run the lights from right to left
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);  // Adjust the delay for the speed of the running lights
    digitalWrite(ledPins[i], LOW);
  }
}
