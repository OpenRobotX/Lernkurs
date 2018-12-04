#define ledPin 13

char text;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

  Serial.println("Wollen Sie die LED einschalten? (J/N)");
}

void loop() {
  Lesen();
  Check();
}

void Lesen(){
  if (Serial.available() > 0) {
    text = Serial.read();
  
    // say what you got:
    Serial.print("Eingabe: ");
    Serial.println(text);
  }
}

void Check(){
  if(text == 'J'){
    digitalWrite(ledPin, HIGH);
    }
  else if(text == 'N'){
    digitalWrite(ledPin, LOW);
    }
  }  
