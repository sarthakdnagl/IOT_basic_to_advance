// Define the pins for the 5 LEDs and the two switches
const int ledPins[] = {2, 3, 4, 5, 6};
const int switchPin1 = 7;  // Switch for running in one direction
const int switchPin2 = 8;  // Switch for running in the opposite direction

void setup() {
  // Set up LED pins as outputs
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  // Set up switch pins as inputs with pull-up resistors
  pinMode(switchPin1, INPUT_PULLUP);
  pinMode(switchPin2, INPUT_PULLUP);
}

void loop() {
  // Check the state of the first switch
  if (digitalRead(switchPin1) == LOW) {
    runPatternForward();
    delay(200); // Debounce delay
  }

  // Check the state of the second switch
  if (digitalRead(switchPin2) == LOW) {
    runPatternBackward();
    delay(200); // Debounce delay
  }
}

void runPatternForward() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100); // Adjust the delay as needed
    digitalWrite(ledPins[i], LOW);
  }
}

void runPatternBackward() {
  for (int i = 4; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100); // Adjust the delay as needed
    digitalWrite(ledPins[i], LOW);
  }
}
