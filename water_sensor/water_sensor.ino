// Sensor pins
#define waterPin A0
#define ledPin 4
#define buzzerPin 5

int waterval = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(buzzerPin, HIGH); //buzzer is a low trigger type = beep on low
  digitalWrite(ledPin, HIGH); // always on to indicate the power is on
}

void loop() {
  waterval = analogRead(waterPin);
  if (waterval > 0) {
    digitalWrite(buzzerPin, LOW);
    delay(500);
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
    digitalWrite(buzzerPin, HIGH);
    delay(500);
  }
  else {
    digitalWrite(buzzerPin, HIGH);
  }
}
