#define ledPin 3 //Bytt tallet 3 til tallet på den digital porten som du bruker.

#define potPin A0 //Bytt tallet 0 til tallet på den digital porten som du bruker.

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the value from the potentiometer
  int potValue = analogRead(potPin);
  
  // Map the potentiometer value (0-1023) to the brightness range (0-255)
  int brightness = map(potValue, 0, 1023, 0, 255);
  
  // Set the brightness of the LED
  analogWrite(ledPin, brightness);
  
  // Print the potentiometer value and brightness to the serial monitor
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print(", Brightness: ");
  Serial.println(brightness);
  
  // Small delay to stabilize readings
  delay(10);
}
