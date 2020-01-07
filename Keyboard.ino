float fmap(float x, float in_min, float in_max, float out_min, float out_max){
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void setup() {
  Serial.begin(9600); 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
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
  float _atov = fmap(_a0, 0, 1023, 0.0, 5.0);

  if(_atov < 1.3 && _atov > 1.2) {
  Serial.println("1;4");
  }
  if(_atov >4.6 && _atov < 4.8) {
  Serial.println("1;3");
  }

  //Serial.println(_atov);
  
  delay(50);
}
