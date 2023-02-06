
int motorPin = 9 ; 
int  valor_limite = 650; 
const int buzzer = 6;
void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600); 
  pinMode(8, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  Serial.println(analogRead(A0)); 
  if(analogRead(A0) > valor_limite){ 
    digitalWrite(8, LOW); 
    digitalWrite(7, HIGH); 
    tone(buzzer, 1200);
     for (int i=0; i<=180 ;i++)
  {
    analogWrite(motorPin,i);
    Serial.println(i);
    delay(50);
  };
  delay(500);
  }
  else{ 
    digitalWrite(8, HIGH); 
    digitalWrite(7, LOW); 
    noTone(buzzer);
    delay(500);
    }
  delay (1000);
}
