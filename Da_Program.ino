int sensorState = 3;
const int buzzer = 9;

void setup(){
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sensorState = digitalRead(3);
  if(sensorState == LOW){
  	digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
  }
  if(sensorState == HIGH){
  	digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    
    tone(buzzer, 987.8); // Frekuensi Nada B
  	delay(3000);        // ...for 1 sec
  	noTone(buzzer);     // Stop sound...
  	delay(1000);  
    
  }
  delay(10);
}
 