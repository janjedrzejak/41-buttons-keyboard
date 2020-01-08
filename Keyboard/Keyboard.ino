float fmap(float x, float in_min, float in_max, float out_min, float out_max){
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void setup() {
  Serial.begin(9600); 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
}
//Function - send note to serial port
/*
void noteOn(int cmd, int pitch, int velocity) {
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}
*/
void loop() {
  //read analog state
  int _a0 = analogRead( A0 );
  int _a1 = analogRead( A1 );
  int _a2 = analogRead( A2 );
  int _a3 = analogRead( A3 );
  int _a4 = analogRead( A4 );
  float _atov = fmap(_a0, 0, 1023, 0.0, 5.0);

  /*
  if(_atov < 1.3 && _atov > 1.15) {
  Serial.println("1;4");
  }
  if(_atov > 4.7 && _atov < 4.85) {
  Serial.println("1;3");
  }
  */
  if(_a0 <1015 || _a1 < 1015 || _a2 < 1015 || _a3 < 1015 || _a4 < 1015) {
  Serial.println(_a0);
  Serial.println(_a1);
  Serial.println(_a2);
  Serial.println(_a3);
  Serial.println(_a4);
  }
  delay(100);
}
