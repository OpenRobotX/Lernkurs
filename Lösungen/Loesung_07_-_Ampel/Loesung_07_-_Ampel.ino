/*
 * OpenRobotX Schullernkurs
 * Lösung zum Projekt aus Lektion 07 - Ampel
 */

void setup() {
  
  pinMode(10, INPUT_PULLUP); // Taster
  
  pinMode(11, OUTPUT); // rote LED
  pinMode(12, OUTPUT); // grüne LED

}

void loop() {

  bool taster = digitalRead(10);

  if (taster == 0){

    // Ampel wird für 3 Sekunden grün
    delay(2000);

    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);

    delay(3000);

    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    
  }
  else{

    // Ampel ist rot
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    
  }

  // Sicherheits-Delay
  delay(5);
  
}
