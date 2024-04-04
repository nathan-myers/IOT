void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); //Thala for a reason
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

int count = 0;

void loop() {
  // put your main code here, to run repeatedly:
  count += 50;
  if(count<100) {
    digitalWrite(7, HIGH);
    delay(69);
    digitalWrite(7, LOW);
    delay(69);
  }

  else if(count>100 && count <200) {
    digitalWrite(8, HIGH);
    delay(69);
    digitalWrite(8, LOW);
    delay(69);
  }

  else if(count>200 && count<300) {
    digitalWrite(9, HIGH);
    delay(69);
    digitalWrite(9, LOW);
    delay(69);
  }

  else if(count > 300) {
    count = 0;
  }
  
}
