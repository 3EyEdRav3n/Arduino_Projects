void setup() {
  // Initialize the serial monitor
  Serial.begin(9600);
}

void loop() {
  // Output analog data to the serial monitor.
  Serial.println(analogRead(A0));
}
