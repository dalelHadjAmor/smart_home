

int  valor_limite = 650; 
const int buzzer = 6;
void setup() {
  Serial.begin(9600); 
  pinMode(8, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(buzzer, OUTPUT); // Buzzer
}

void loop() {
  Serial.println(analogRead(A0)); 
  if(analogRead(A0) > valor_limite){ 
    digitalWrite(8, LOW); 
    digitalWrite(7, HIGH); 
    tone(buzzer, 1200);
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
