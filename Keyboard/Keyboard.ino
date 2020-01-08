//define voltage states on analog pins = address of line of buttons (min 0; max 1023)
//  VALUES will be set after test process!!!

#define constVolState01 100; #define constVolState02 200;
#define constVolState03 300; #define constVolState04 400;
#define constVolState05 500; #define constVolState06 600;
#define constVolState07 700; #define constVolState08 800;

//-----------------------------------------------------------------
void setup() {
  Serial.begin(9600); 
  Serial.println("41 buttons custom keyboard");
  for(i=2; i<10; i++) {
    pinMode(i, OUTPUT);               //set digital pins as output
    digitalWrite(i, HIGH);            //set hight state
  }
}
//Function - send note to serial port
/*
void noteOn(int cmd, int pitch, int velocity) {
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}
*/

void keyCheck(int pin, int volState) {
  
}

void loop() {
  //read analog state
  int a0 = analogRead( A0 );
  int a1 = analogRead( A1 );
  int a2 = analogRead( A2 );
  int a3 = analogRead( A3 );
  int a4 = analogRead( A4 );

  /*
  a0 > constVolState01 - 50 && a0 < constVolState01 + 50
  a0 > constVolState02 - 50 && a0 < constVolState02 + 50
  */
  
  delay(100);
}
