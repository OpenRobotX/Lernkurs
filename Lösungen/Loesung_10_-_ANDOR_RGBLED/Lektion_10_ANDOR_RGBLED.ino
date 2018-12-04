#define rLED 10
#define gLED 9
#define bLED 11

void setup() {
   pinMode(rLED, OUTPUT);
   pinMode(gLED, OUTPUT);
   pinMode(bLED, OUTPUT);
}

int rHell = 0; 
int gHell = 175;
int bHell = 255;

int rAdd = 1;
int gAdd = -1;
int bAdd = -1;

void loop() {
  analogWrite(rLED, rHell);
  analogWrite(gLED, gHell);
  analogWrite(bLED, bHell);

  if(rHell == 0 || rHell == 255){
    rAdd = rAdd * -1;
  }
  
  if(gHell == 0 || gHell == 255){
    gAdd = gAdd * -1;
  }
  
  if(bHell == 0 || bHell == 255){
    bAdd = bAdd * -1;
  }

  rHell = rHell + rAdd;
  gHell = gHell + gAdd;
  bHell = bHell + bAdd;
  delay(1);
}

void R_LED_TEST(){
  digitalWrite(rLED, HIGH);
  delay(200);
  digitalWrite(rLED, LOW);
  delay(200);
}

void G_LED_TEST(){
  
}

void B_LED_TEST(){
  
}

