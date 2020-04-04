/*  UV sensor demonstration sketch
 * 
 * This sketch reads the state of the Adafruit analog UV sensor.
 * It then converst the analog reading to a voltage, and then
 * the voltage to an actual UV index value.
 * 
 * This sketch was written for Arduino Step by Step by Peter Dalmaris.
 * 
 * Components
 * ----------
 *  - Arduino Uno
 *  - Adafruit UV sensor breakout or equivelant
 *  
 *  Libraries
 *  ---------
 *  NONE
 *
 * Connections
 * -----------
 *  Break out    |    Arduino Uno
 *  -----------------------------
 *      +        |         5V
 *      -        |         GND
 *      Out      |         A0
 *      
 * 
 * Other information
 * -----------------
 * This sensor can detect UV light at 240-370nm.
 * This contains UVA and most of UVB.
 * For more information on UV light see https://en.wikipedia.org/wiki/Ultraviolet
 * For more information on the breakout see https://www.adafruit.com/product/1918
 * For information on the UV index scale see https://www.epa.gov/sunsafety/uv-index-scale-1
 * Sensor datasheet: https://cdn-shop.adafruit.com/datasheets/1918guva.pdf
 *      
 *  Created on October 8 2016 by Peter Dalmaris
 * 
 */

// the setup routine runs once when you press reset:
void setup() {
  // Initialize the Baud rate
  Serial.begin(9600);
}

void loop() {
  // Read from analog A0
  int sensorValue = analogRead(A0);

  // Caculate the actual voltage at sensor out
  float voltage = sensorValue * (5.0/1023.0);

  // Print out the read value.
  Serial.println(sensorValue);
  Serial.print(",");

  // Print the UV index value. As per the specfication for the sensor,
  // this is done by deiving the sensor output voltage by 0.1
  Serial.println(voltage/0.1);
  delay(100);   // Delay between reads for stability

}
