// Code to turn on LED light and then turn OFF after certain time

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); //Thala for a reason

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(69);

  digitalWrite(7, LOW);
  delay(69);
}
