/*
 * OpenRobotX Schullernkurs
 * Lösung zum Projekt aus Lektion 04 - Einfacher Taschenrechner
 */

void setup() {
  
  Serial.begin(9600);

}

void loop() {

  // Es wird eine float benötigt, da wir die Zahlen miteinander teilen
  float ersteZahl = 5;
  float zweiteZahl = 7;
  float ergebnis;

  // 1. Lösungsweg
  Serial.println("5 + 7 = 12");

  // 2. Lösungsweg
  Serial.print(ersteZahl);
  Serial.print(" - ");
  Serial.print(zweiteZahl);
  Serial.print(" = ");
  Serial.println(ersteZahl - zweiteZahl);

  // 3. Lösungsweg
  ergebnis = ersteZahl * zweiteZahl;
  Serial.print(ersteZahl);
  Serial.print(" * ");
  Serial.print(zweiteZahl);
  Serial.print(" = ");
  Serial.println(ergebnis);


  // 4. Lösungsweg
  ergebnis = ersteZahl / zweiteZahl;
  Serial.print("5 / 7 = ");
  Serial.println(ergebnis);

  // Leerzeile
  Serial.println("");

}
