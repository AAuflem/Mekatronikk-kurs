#define LED 3 //Bytt tallet 3 til tallet på den digital porten som du bruker.
#define PushButton 4 //Bytt tallet 4 til tallet på den digital porten som du bruker.

void setup() {
  // put your setup code here, to run once:

  pinMode(LED,OUTPUT);
  pinMode(PushButton,INPUT);
}

void loop() {

  if(digitalRead(PushButton) == HIGH)
  {
    digitalWrite(LED,HIGH);
  } 
  else
  {
    digitalWrite(LED,LOW);
  }

}
