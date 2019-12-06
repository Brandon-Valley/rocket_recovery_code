// this sketch will allow you to bypass the Atmega chip
// and connect the Ultimate GPS directly to the USB/Serial
// chip converter.
 
// Connect VIN to +5V
// Connect GND to Ground
// Connect GPS RX (data into GPS) to Digital 0
// Connect GPS TX (data out from GPS) to Digital 1
 
void setup() 
{
   Serial.begin(9600);
   Serial.println("<Arduino is ready>");  
}
void loop() 
{
  delay(1500);  
  //Serial.print(random(37.954077,50));
  Serial.print(37.95);
  Serial.print(random(4077,5088));
  Serial.print(" , ");
  Serial.print(-91.76);
  Serial.println(random(7779,9130));
  }
