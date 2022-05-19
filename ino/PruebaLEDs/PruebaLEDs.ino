
int sensorValue = 0;
int outputValue = 0;
int notputValue = 0;
float a = HIGH;
float b = LOW;
#define LedCEN 13
#define LedMID 14
#define LedEXT 26
#define PotentiometerPin 15

void setup() {
 Serial.begin(9600);
 pinMode(LedCEN, OUTPUT);
 pinMode(LedMID, OUTPUT);
 pinMode(LedEXT, OUTPUT);
 pinMode(PotentiometerPin, INPUT);
}


void loop() {
  // Código de prueba para prender dos tiras de LED por separado
  /*
   *digitalWrite(LedPin, HIGH);
    delay(2000);
    digitalWrite(LedPin, LOW);
    delay(500);
    digitalWrite(LedPin2, HIGH);
    delay(2000);
    digitalWrite(LedPin2, LOW);
    delay(500);
   */
 
  sensorValue = analogRead(PotentiometerPin);
  outputValue = map(sensorValue, 0, 4095, 1, 3);
  Serial.print(outputValue);
  if (outputValue = 1){ 
    digitalWrite(LedPin, HIGH);
    delay(2000);
    digitalWrite(LedPin, LOW);
    delay(500);
    digitalWrite(LedPin2, HIGH);
    delay(2000);
    digitalWrite(LedPin2, LOW);
    delay(500);
  } else if (outputValue = 2) {
    digitalWrite(LedPin, HIGH);
    delay(100);
    digitalWrite(LedPin, LOW);
    delay(100);
    digitalWrite(LedPin2, HIGH);
    delay(100);
    digitalWrite(LedPin2, LOW);
    delay(100);
  } else if (outputValue = 3) {
    
  }

  
/*
  // Código probado en TinkerCAD para integrar el potenciómetro
   // read the analog in value:
  sensorValue = analogRead(PotentiometerPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 4095, 1, 2);
  Serial.print(outputValue);
  /*
   * notputValue = map(sensorValue, 0, 4095, 14, 13);
   * analogWrite(outputValue, HIGH);
   * analogWrite(notputValue, LOW);
   */
   /*
  // change the analog out value:
  if (outputValue = 1) {
    analogWrite(LedPin, HIGH);
    //delay(10);
    //analogWrite(LedPin2, LOW);
    delay(10);
  } else {
    //analogWrite(LedPin2, HIGH);
    //delay(10);
    analogWrite(LedPin, LOW);
    delay(10);
  }

  // wait 2 milliseconds before the next loop for the
  // analog-to-digital converter to settle after the
  // last reading:
  delay(2);
  //analogWrite(outputValue, LOW);// Wait for 2 millisecond(s)
 */
}
