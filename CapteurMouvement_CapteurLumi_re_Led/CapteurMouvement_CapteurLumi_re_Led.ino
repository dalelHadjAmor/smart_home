const int buttonPin = 7; // broche du capteur PIR
const int ledPin = 13; // la LED du Arduino
int buttonState = 0;// etat de la sortie du capteur
int capteur = A0;


void setup()
{
  pinMode(ledPin, OUTPUT); //la broche de la LED est mise en sortie
  pinMode(buttonPin, INPUT); //la broche du capteur est mise en entree
  pinMode(capteur, INPUT);
  Serial.begin(9600);


}
 
void loop()
{
  buttonState = digitalRead(buttonPin);//lecture du capteur
  int valeur = analogRead(A0);
  // Envoi la mesure au PC pour affichage et attends 250ms
  Serial.println(valeur);
  delay(250);

 if (valeur < 500) {
    if (buttonState == HIGH) //si quelquechose est detecte
  {
    digitalWrite(ledPin, HIGH); //on allume la LED
  }
  else //sinon
  {
    digitalWrite(ledPin, LOW); //on eteint la LED
  }
  
  }else{
      digitalWrite(ledPin, LOW);
  }  
}
