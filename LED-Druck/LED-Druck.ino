const int buttonPin = 6; //The number of the pushbutton pin
const int ledpin = 4; //The number of the LED pin
int buttonState = 0; //Variable for reading the pushbutton status (beginng off)

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT); //initialize the LED pin as an output
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);  //read the state of the pushbutton value:
  if (buttonState == HIGH) //check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  {
    digitalWrite(ledpin, HIGH);  // turn LED on:
  }
  else
  {
    digitalWrite(ledpin, LOW);    // turn LED off:
  }
}
