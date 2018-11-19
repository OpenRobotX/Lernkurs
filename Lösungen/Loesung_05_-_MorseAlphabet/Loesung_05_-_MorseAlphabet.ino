/*
 * OpenRobotX Schullernkurs
 * Lösung zum Projekt aus Lektion 05 - MorseAlphabet
 */

void setup() {
  
  pinMode(13, OUTPUT);

}

void loop() {

  // A . _
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(250);

  // Symbolabstand
  delay(250);
  
  digitalWrite(13, HIGH);
  delay(750);
  digitalWrite(13, LOW);
  delay(250);

  // Buchstabenabstand
  delay(750);

  //L . _ . .
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(250);

  delay(250);

  digitalWrite(13, HIGH);
  delay(750);
  digitalWrite(13, LOW);
  delay(250);

  delay(250);

  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(250);

  delay(250);

  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(250);

  delay(750);

  //E .
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(250);

  delay(750);

  //X _ . . _
  digitalWrite(13, HIGH);
  delay(750);
  digitalWrite(13, LOW);
  delay(250);

  delay(250);

  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(250);

  delay(250);

  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(250);

  delay(250);

  digitalWrite(13, HIGH);
  delay(750);
  digitalWrite(13, LOW);
  delay(250);

  // Wortabstand
  delay(1750);
  
}
