#define ledRed 11
#define potRed A0

void setup()
{
  pinMode(ledRed, OUTPUT);

  pinMode(potRed, INPUT);
}

void loop()
{
  analogWrite(ledRed, analogRead(potRed)/4);
  delay(100);
}
