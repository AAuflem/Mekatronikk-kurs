#define LED 3 //Bytt tallet 3 til tallet på den digital porten som du bruker.
#define PushButton 4 //Bytt tallet 4 til tallet på den digital porten som du bruker.


byte lastButtonState = LOW;
byte ledState = LOW;

void setup() {
  // put your setup code here, to run once:

  pinMode(LED,OUTPUT);
  pinMode(PushButton,INPUT);
}

void loop() {

byte  buttonState = digitalRead(PushButton);
  if (buttonState != lastButtonState) {
    lastButtonState = buttonState;
    if (buttonState == LOW) {
      ledState = (ledState == HIGH) ? LOW: HIGH;
      digitalWrite(LED, ledState);
    }
  }

}
