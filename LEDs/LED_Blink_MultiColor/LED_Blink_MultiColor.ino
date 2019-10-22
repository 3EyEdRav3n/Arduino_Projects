#define RED_PIN 2
#define BLUE_PIN 3
#define GREEN_PIN 4

void setup() {
  // Configure pins for I/O
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  
}

void loop() {
  // Blink Red led
//  digitalWrite(RED_PIN, HIGH);
//  digitalWrite(BLUE_PIN, HIGH);
//  digitalWrite(GREEN_PIN, HIGH);

  analogWrite(GREEN_PIN, 100);
  analogWrite(RED_PIN, 50);
  analogWrite(BLUE_PIN, 50);
}
