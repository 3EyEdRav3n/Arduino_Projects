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
  digitalWrite(RED_PIN, HIGH);
  delay(1000);
  digitalWrite(RED_PIN, LOW);
  delay(1000);

  // Blink Blue led
  digitalWrite(BLUE_PIN, HIGH);
  delay(1000);
  digitalWrite(BLUE_PIN, LOW);
  delay(1000);

  // Blink Green led
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);
  digitalWrite(GREEN_PIN, LOW);
  delay(1000);

}
