//LED Blink
//The LED will turn on for one second and then turn off for one second
int LEDb = 4; // The name of variable is 4 because of the place 
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDb, OUTPUT); // establish that the device is output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDb, HIGH); //Open the LED 
  delay(1000); //How long it will be on in MS
  digitalWrite(LEDb, LOW);
  delay(1000); //How long it will be off in MS
}
