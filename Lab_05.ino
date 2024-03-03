const int photoresistorPin = A0;  // Analog pin for the photoresistor
const int ledPin = 3;  // Pin where the LED for the street light is connected
void setup() {
  pinMode(photoresistorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the photoresistor
  int lightLevel = analogRead(photoresistorPin);

  // Check if it's dark (below the threshold) and turn on the street light
  if(lightLevel>50)
    analogWrite(ledPin,0);
  else if(50<lightLevel<60)
     analogWrite(ledPin,50);
  else if(20<lightLevel<50)
    analogWrite(ledPin,150);
  else if(0<lightLevel<20)
     analogWrite(ledPin,255);

  // Add a delay to avoid rapid changes in the light level
  Serial.print("LDR Value: ");
  Serial.println(lightLevel);
  delay(500);
}
