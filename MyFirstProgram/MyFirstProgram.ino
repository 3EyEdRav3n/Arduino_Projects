int button_press = 1;

void setup() {
  // put your setup code here, to run once:
  int first_num = 5;
  int second_num = 9;
  
  Serial.begin(9600);
  
  switch(button_press){
    case 1:
      Serial.println("Button 1 pressed");
      break;
    case 2:
      Serial.println("Button 2 pressed");
      break;
    default:
      Serial.println("I don't know what was pressed.");
      break;
  }
} // end setup()

void loop() {
  
} // end loop()

int do_a_calc(int num1, int num2){
  return (num1 + num2);
} 
