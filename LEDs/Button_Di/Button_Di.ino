int buttonState = 0;

void setup() {
  // Configure pins for I/O
  pinMode(2, INPUT);
  pinMode(14, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read button state
  buttonState = digitalRead(2);
    
  if(buttonState == HIGH)
  {
    Serial.println("High");
    digitalWrite(14, HIGH);
  }
  else
  {
    Serial.println("Low");
    digitalWrite(14, LOW);
  }

}
