void setup() {
  // Initialize the Baud rate
  Serial.begin(9600);
}

void loop() {
  // Read from ananlog A0
  int sensorValue = analogRead(A0);
  // Pring out the read value.
  Serial.println(sensorValue);
  delay(10);

}
