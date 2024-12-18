int sensorState = 3;
const int buzzer1 = 9;
const int buzzer2 = 10; // Define another pin for the second buzzer

void setup() {
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT); // Set the second buzzer pin as OUTPUT
  Serial.begin(9600);
}

void loop() {
  sensorState = digitalRead(3);
  if (sensorState == LOW) {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);

  } else if (sensorState == HIGH) {
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);

    tone(buzzer1, 987.8); // Frequency of B note for the first buzzer
    tone(buzzer2, 987.8); // Frequency of B note for the second buzzer
    delay(3000);          // Play both buzzers for 3 seconds
    noTone(buzzer1);      // Stop the first buzzer
    noTone(buzzer2);      // Stop the second buzzer
    delay(1000);          // Wait for 1 second
  }
  delay(10);
}
