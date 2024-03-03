const int ledPin = 3;      // Pin number for the LED
const int ldrPin = A0;  // Pin number for the ldr

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(ldrPin);
  
  // Map the light level to a blinking frequency
  int blinkInterval = map(lightLevel, 0, 1023, 100, 1000);

  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(blinkInterval);

  digitalWrite(ledPin, LOW);  // Turn off the LED
  delay(blinkInterval);

  // Print the light level and blinking frequency to the serial monitor
  Serial.print("Light Level: ");
  Serial.print(lightLevel);
  Serial.print("\tBlinking Frequency: ");
  Serial.print(1000 / blinkInterval); // Frequency in Hz
  Serial.println(" Hz");
}
