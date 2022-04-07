int rotaryPin = A0; //select the input pin for the rotary
int ledPin = 4; //select the pin for the LED
int rotaryvalue = 0; //variable to store the value coming from the rotary

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); //declare the ledPin as an OUTPUT:
  pinMode(rotaryPin, INPUT); ////declare the rotaryPin as an INPUT:
}

void loop() {
  // put your main code here, to run repeatedly:
  rotaryvalue = analogRead(rotaryPin); //read the value from the sensor:
  digitalWrite(ledPin, HIGH); // turn the ledPin on 
  delay(rotaryvalue); // stop the program for <sensorValue> milliseconds:
  digitalWrite(ledPin, LOW); // turn the ledPin off:
  delay(rotaryvalue); // stop the program for for <sensorValue> milliseconds
}
