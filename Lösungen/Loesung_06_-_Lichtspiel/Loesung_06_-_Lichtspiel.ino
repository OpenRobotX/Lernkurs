/*
 * OpenRobotX Schullernkurs
 * Lösung zum Projekt aus Lektion 06 - Lichtspiel
 */

int helligkeit = 0;

void setup() {
  
  pinMode(11, OUTPUT);

}

void loop() {
  
  analogWrite(11, helligkeit);

  // helligkeit = helligkeit + 1;
  helligkeit++;

  
  if (helligkeit == 255){
    
    helligkeit = 0;
    
    }

  delay(4);
  
}
