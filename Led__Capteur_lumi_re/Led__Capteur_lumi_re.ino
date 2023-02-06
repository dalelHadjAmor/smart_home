/*
 * Code d'exemple pour une photorésistance.
 */


int capteur = A0;
int ledPin = 7;

void setup()
{
  pinMode(capteur, INPUT);
  pinMode(ledPin, OUTPUT);
}


// Fonction loop(), appelée continuellement en boucle tant que la carte Arduino est alimentée
void loop() {
  
  // Mesure la tension sur la broche A0
  int valeur = analogRead(A0);

/*500 et la valeur minimal de lumière 
 si la valeur est inférieur on allume la lumière
 si non on éteint la lumière
 */
  if (valeur < 500) {
  digitalWrite(ledPin, HIGH);
  }else{
      digitalWrite(ledPin, LOW);
  }  
}
