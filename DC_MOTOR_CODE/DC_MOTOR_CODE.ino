int potPin =  A0;
int transPin = 10;
int potVal =0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(transPin, OUTPUT);
  pinMode(potPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin)/4;
  analogWrite(transPin, potVal);
}
