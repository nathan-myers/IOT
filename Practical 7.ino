int red=10;
int yellow=9;
int green = 8;
char colour;

void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.print("\t =Enter the color: ");
  while(Serial.available()==0) // Waits for the command
  {
  }
  colour = Serial.read(); // reads the input and stores in 'colour' 
}

void loop()
{
  if(colour == 'b')
  {
    digitalWrite(green, HIGH);
    delay(1000);
    digitalWrite(green, LOW);
    delay(100);
  }
  
  if(colour == 'g')
  {
    digitalWrite(green, HIGH);
    delay(100);
  }

  if(colour == 'y')
  {
    digitalWrite(yellow, HIGH);
    delay(100);
  }

  if(colour == 'r')
  {
    digitalWrite(red, HIGH);
    delay(100);
  }
}
