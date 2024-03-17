#define LED 3 //Bytt tallet 3 til tallet på den digital porten som du bruker.

void setup() {
  // put your setup code here, to run once:

  pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);

  delay(500); //Stopper koden i 500ms

  digitalWrite(LED,LOW);

  delay(500); //Stopper koden i 500ms

}
