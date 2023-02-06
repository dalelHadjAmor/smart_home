// C++ code
//
int motorPin = 9 ;
void setup()
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for (int i=0; i<=255 ;i++)
  {
    analogWrite(motorPin,i);
    Serial.println(i);
    delay(50);
  };
  delay(500);
  for (int i=255 ; i>=0 ; i--)
  {
    analogWrite(motorPin,i);  
  Serial.println(i);
    delay(50);  };
  delay(500);
}
