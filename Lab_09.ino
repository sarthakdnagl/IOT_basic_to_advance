int led = 3;       
int brightness = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key;
  if(Serial.available()>0)
  key = Serial.read();
  switch(key){
    case '1':
      brightness = 255;
      analogWrite(led, brightness);
      break;
    
    case '2':
      brightness = 192;
      analogWrite(led, brightness);
      break;

    case '3':
      brightness = 128;
      analogWrite(led, brightness);
      break;
    
    case '4':
      brightness = 64;
      analogWrite(led, brightness);
      break;
    
    case '5':
      brightness = 0 ;
      analogWrite(led, brightness);
      break;
  }
}
