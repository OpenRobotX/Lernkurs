/*
 * OpenRobotX Schullernkurs
 * Lösung zum Projekt aus Lektion 03 - SerialPrint
 */

void setup() {
  
  Serial.begin(9600);

}

void loop() {
  
  Serial.print("Vorname: ");
  Serial.println("Alexander");

  Serial.print("Nachname: ");
  Serial.println("Zgela");

  Serial.print("Alter: ");
  Serial.println("27");

  Serial.println("");

}
