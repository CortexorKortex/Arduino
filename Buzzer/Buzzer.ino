int Buzzerpin = 5; //Buzzer pin
void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzerpin, OUTPUT); //Initialize buzzer as a OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(Buzzerpin, 128);
  delay(1000);
  analogWrite(Buzzerpin, 0);
  delay(0);
}
