//define voltage states on analog pins = address of line of buttons (min 0; max 1023)
//  VALUES will be set after test process!!!

#define constVolState01 100; #define constVolState02 200;
#define constVolState03 300; #define constVolState04 400;
#define constVolState05 500; #define constVolState06 600;
#define constVolState07 700; #define constVolState08 800;
#define constDiff = 50;

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
void noteOn(int cmd, int pitch, int velocity) {
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}

//Function - check key from keyboard
void keyCheck(int pin, int volState) {
  switch(pin) {
    case 0:
  
         
      break;
    case 1:
    
      
      break;
    case 2:
   
      
      break;
    case 3:
     
      
      break;
    case 4:
    
      
      break;
    default:
      break;
  }
}

void loop() {
 
  keyCheck(0, analogRead(A0));
  
  delay(100);
}
