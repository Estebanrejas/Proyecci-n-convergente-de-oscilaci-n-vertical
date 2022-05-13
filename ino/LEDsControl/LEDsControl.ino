int LED_Intensity;
#define LedPin 2
#define PotentiometerPin A6

void setup() {
 pinMode(LedPin, OUTPUT);
 pinMode(PotentiometerPin, INPUT);
}

void loop() {
  digitalWrite(LedPin, HIGH);
  delay(1000);
  digitalWrite(LedPin, LOW);
  delay(1000);
}
