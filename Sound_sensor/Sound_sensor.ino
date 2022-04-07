int soundPin = A2; //Analog sound sensor is to be attached to analog
int ledPin = 4; //Digital LED is to be attached to digital
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int soundState = analogRead(soundPin); //Read sound sensors value
  Serial.println(soundState);  // if the sound sensor’s value is greater than 200, the light will be on for 5 seconds
  if (soundState > 500)
  {
    digitalWrite(ledPin, HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(ledPin, LOW);
}
}
