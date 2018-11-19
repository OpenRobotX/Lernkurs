/*
 * OpenRobotX Schullernkurs
 * Lösung zum Projekt aus Lektion 08 - Smartes Licht
 */

void setup() {
  
  pinMode(13, OUTPUT); // LED

}

void loop() {
  
  int licht = analogRead(A0);


  if (licht > 500){

    digitalWrite(13, HIGH);
    
  }
  else{

    digitalWrite(13, LOW);
    
  }

}
