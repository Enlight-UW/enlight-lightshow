int pinShiftCLK = 2;
int pinStoreCLK = 3;
int pinData = 4;

int pinShiftCLK2 = 8;
int pinStoreCLK2 = 9;
int pinData2 = 10;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(pinShiftCLK, OUTPUT);
  pinMode(pinStoreCLK, OUTPUT);  
  pinMode(pinData, OUTPUT);

  pinMode(pinShiftCLK2, OUTPUT);
  pinMode(pinStoreCLK2, OUTPUT);  
  pinMode(pinData2, OUTPUT);

}

void pattern1() {
 int count = 0; 
 for (int i = 0; i < 8; i++) { 
    digitalWrite(pinShiftCLK, LOW);
    digitalWrite(pinStoreCLK, HIGH);
    digitalWrite(pinShiftCLK2, LOW);
    digitalWrite(pinStoreCLK2, HIGH);
   
    delay(500);
    digitalWrite(pinShiftCLK, HIGH);
    digitalWrite(pinStoreCLK, LOW);
    
    digitalWrite(pinShiftCLK2, HIGH);
    digitalWrite(pinStoreCLK2, LOW);
    digitalWrite(pinData, (count % 2 == 0 ? HIGH : LOW));
    digitalWrite(pinData2, (count % 2 == 0 ? HIGH : LOW));
    count++;
  }
}

void pattern2() {
  int count = 0; 
  for (int i = 0; i < 8; i++) { 
    digitalWrite(pinShiftCLK, LOW);
    digitalWrite(pinStoreCLK, HIGH);
    digitalWrite(pinShiftCLK2, LOW);
    digitalWrite(pinStoreCLK2, HIGH);
   
    delay(100);
    digitalWrite(pinShiftCLK, HIGH);
    digitalWrite(pinStoreCLK, LOW);
    
    digitalWrite(pinShiftCLK2, HIGH);
    digitalWrite(pinStoreCLK2, LOW);
    digitalWrite(pinData, (count % 2 == 0 ? HIGH : LOW));
    digitalWrite(pinData2, (count % 2 == 0 ? HIGH : LOW));
    count++;
  }
}

void pattern3() {
  int count = 0; 
  for (int i = 0; i < 32; i++) { 
    digitalWrite(pinShiftCLK, LOW);
    digitalWrite(pinStoreCLK, HIGH);
    
    digitalWrite(pinShiftCLK2, LOW);
    digitalWrite(pinStoreCLK2, HIGH);
   
    delay(100);
    digitalWrite(pinShiftCLK, HIGH);
    digitalWrite(pinStoreCLK, LOW);
    
    digitalWrite(pinShiftCLK2, HIGH);
    digitalWrite(pinStoreCLK2, LOW);
    
    digitalWrite(pinData, (count % 3 == 0 ? HIGH : LOW));
    digitalWrite(pinData2, (count % 3 == 0 ? HIGH : LOW));
    count++;
  }
}

void pattern4() {
  int count = 0; 
  for (int i = 0; i < 32; i++) { 
    digitalWrite(pinShiftCLK, LOW);
    digitalWrite(pinStoreCLK, HIGH);
    
    digitalWrite(pinShiftCLK2, LOW);
    digitalWrite(pinStoreCLK2, HIGH);
   
    delay(100);
    digitalWrite(pinShiftCLK, HIGH);
    digitalWrite(pinStoreCLK, LOW);
    
    digitalWrite(pinShiftCLK2, HIGH);
    digitalWrite(pinStoreCLK2, LOW);
    
    digitalWrite(pinData, (count % 3 == 0 ? LOW : HIGH));
    digitalWrite(pinData2, (count % 3 == 0 ? LOW : HIGH));
    count++;
  }
}

// the loop routine runs over and over again forever:
void loop() {
  pattern1();
  pattern2();
  pattern3();
  pattern4();
}
