int button = 2;   //pin of the first button
int button1 = 3;  //pin  of the second button
#include<Servo.h> //include the servo library
Servo servo;  //create a servo object


void  setup() {
  // put your setup code here, to run once:
  servo.attach(9);  //pin  used by the servo
  pinMode(button, INPUT_PULLUP);  //define first button as  input pullup
  pinMode(button1, INPUT_PULLUP); //define second button as input  pullup
  /*
  INPUT_PULLUP send to arduino LOW signal, so, when you press  the button, you send a LOW signal to arduino
  */
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) ==  LOW) {
    servo.write(180); //servo goes to variable pos
    delay(5);  //5 milliseconds of delay
  }
  if (digitalRead(button1) == LOW) {
    servo.write(0);  //servo goes to variable pos
    delay(5); //5 milliseconds of delay
  }
}
