#define Relay1 13
#define Relay2 26
#define pwmPin 15 
int value;
int output;

void setup() {
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(pwmPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  value = analogRead(pwmPin);
  output = map(value, 0, 4095, 1, 2);
  Serial.print(output);
  if (output < 2) { 
    digitalWrite(Relay1, HIGH);
    digitalWrite(Relay2, LOW);
    delay(1000);
  } else if (output > 1) { 
    digitalWrite(Relay2, HIGH);
    digitalWrite(Relay1, LOW);
    delay(1000);
  }
}
