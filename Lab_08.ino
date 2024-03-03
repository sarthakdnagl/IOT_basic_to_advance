void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key;
  if(Serial.available()>0)
  key = Serial.read();
  switch(key){
    case '1':
      digitalWrite(2,HIGH);
      break;
      
    case '2':
      digitalWrite(2,LOW);
      break;

    case '3':
      digitalWrite(3,HIGH);
      break;
      
    case '4':
      digitalWrite(3,LOW);
      break;

    case '5':
      digitalWrite(4,HIGH);
      break;
      
    case '6':
      digitalWrite(4,LOW);
      break;

    case '7':
      digitalWrite(5,HIGH);
      break;
      
    case '8':
      digitalWrite(5,LOW);
      break;

    case '9':
      digitalWrite(6,HIGH);
      break;
      
    case 'a':
      digitalWrite(6,LOW);
      break;
    
    
  }
}



