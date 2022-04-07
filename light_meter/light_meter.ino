int sensorpin = A6; // Analog input pin that the sensor is attached to
int ledPin = 4; // LED port
int sensorValue = 0; // value read from the port 
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  sensorValue = analogRead(sensorpin);  // read the analog in value:
  Serial.println(sensorValue);
  if (sensorValue < 746)
  {
    digitalWrite(ledPin, HIGH);  // turn LED on:
   }
  else
  {
    digitalWrite(ledPin, LOW);    // turn LED off:
  }
  delay(200);
 }
