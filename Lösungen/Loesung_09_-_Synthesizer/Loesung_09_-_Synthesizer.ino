/*
 * OpenRobotX Schullernkurs
 * Lösung zum Projekt aus Lektion 09 - Synthesizer
 */

int frequenz = 1000;

void setup() {
  
  pinMode(9, INPUT_PULLUP); // Taster runter
  pinMode(10, INPUT_PULLUP); // Taster hoch

  pinMode(11, OUTPUT); // Piezo (Lautsprecher)

}

void loop() {
  
  bool tasterRunter = digitalRead(9);
  bool tasterHoch = digitalRead(10);

  if (tasterRunter == 0){

    // Damit die Frequenz nicht unter 0 fallen kann
    if (frequenz > 0){

      frequenz--;
      
    }
    else{

      frequenz = 0;
      
    }
    
  }

  if (tasterHoch == 0){

    // Damit die Frequenz nicht über 25000 steigen kann
    if (frequenz < 25000){

      frequenz++;
      
    }
    else{

      frequenz = 25000;
      
    }
    
  }

  tone(11, frequenz);
  
  delay(5);

}
