//Se definen los pines de los led.
#define LedCEN 13  //LED central
#define LedMID 14  //LEDs del medio
#define LedEXT 26  //LEDs de los extremos
#define pwmPin 15  //Potenciómetro
int value;
int output;

void setup() {
  pinMode(LedCEN, OUTPUT);
  pinMode(LedMID, OUTPUT);
  pinMode(LedEXT, OUTPUT);
  pinMode(pwmPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  value = analogRead(pwmPin);
  //Mapeo del potenciómetro a 6 valores
  output = map(value, 0, 4095, 0, 6);
  Serial.print(output);
  // 0 para apagado
    if (output == 0) {
      digitalWrite(LedCEN, HIGH);
      digitalWrite(LedMID, HIGH);
      digitalWrite(LedEXT, HIGH);
     delay(1000);
  // 1 a 2 para encender el central
  } else if (output > 0 && output < 3) { 
      digitalWrite(LedCEN, LOW);
      digitalWrite(LedMID, HIGH);
      digitalWrite(LedEXT, HIGH);
     delay(1000);
   // 3 a 5 para encender los del medio
  } else if (output >= 3 && output < 6) { 
      digitalWrite(LedMID, LOW);
      digitalWrite(LedCEN, HIGH);
      digitalWrite(LedEXT, HIGH);
     delay(1000);
   // 6 para encender los extremos
  } else if (output == 6) {
      digitalWrite(LedEXT, LOW);
      digitalWrite(LedCEN, HIGH);
      digitalWrite(LedMID, HIGH);
     delay(1000);
  }
}
