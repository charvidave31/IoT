/* Traffic Lights
*/

void setup()
{
 pinMode(2, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
}
void loop()
{
  digitalWrite(7,HIGH);
  delay(2000);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500); 
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500); 
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500); 
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500); 
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500); 
  digitalWrite(6,HIGH);
  delay(5000);
  digitalWrite(6, LOW);
 }
