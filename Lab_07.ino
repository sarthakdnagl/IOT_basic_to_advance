const int ledPin = 4;
const int increaseSwitchPin = 2;
const int decreaseSwitchPin = 3;

int blinkInterval = 1000; // Initial blinking interval in milliseconds

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(increaseSwitchPin, INPUT_PULLUP);
  pinMode(decreaseSwitchPin, INPUT_PULLUP);
}

void loop() {
  // Check if the increase switch is pressed
  if (digitalRead(increaseSwitchPin) == LOW) {
    increaseBlinkInterval();
  }

  // Check if the decrease switch is pressed
  if (digitalRead(decreaseSwitchPin) == LOW) {
    decreaseBlinkInterval();
  }

  // Blink the LED
  digitalWrite(ledPin, HIGH);
  delay(blinkInterval);
  digitalWrite(ledPin, LOW);
  delay(blinkInterval);
}

void increaseBlinkInterval() {
  blinkInterval = max(50, blinkInterval - 50); // Decrease interval by 50ms, with a minimum of 50ms
}

void decreaseBlinkInterval() {
  blinkInterval = min(2000, blinkInterval + 50); // Increase interval by 50ms, with a maximum of 2000ms
}

