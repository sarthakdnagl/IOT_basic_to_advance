// Define the pins for the 5 LEDs
const int ledPins[] = {3, 5, 6, 9, 10};
const int numLeds = 5;

void setup() {
  // Set all LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Fade in and out each LED one by one
  for (int i = 0; i < numLeds; i++) {
    fadeLedIn(ledPins[i]);
    delay(500); // Adjust the delay as needed
    fadeLedOut(ledPins[i]);
    delay(500); // Adjust the delay as needed
  }
}

void fadeLedIn(int pin) {
  // Fade in the LED
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(pin, brightness);
    delay(5); // Adjust the delay for smooth fading
  }
}

void fadeLedOut(int pin) {
  // Fade out the LED
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(pin, brightness);
    delay(5); // Adjust the delay for smooth fading
  }
  // Turn off the LED after fading out
  digitalWrite(pin, LOW);
}
