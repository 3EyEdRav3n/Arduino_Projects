void setup() {
  // Initialize the serial monitor
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  // A0 have possible values 0...1023
  int potValue = analogRead(A0);

  // The function map takes a range of values (0, 1023) in this case
  // and converts it to another range of values (0, 255) 
  int mappedVaule = map(potValue, 0, 1023, 0, 255);

  // However, analogWrite has only 0...255
  // because it's 8 bits. So we had to modify with the "map" function
  analogWrite(2, mappedVaule);
  
  // Output analog data to the serial monitor.
  Serial.println(analogRead(A0));
}
