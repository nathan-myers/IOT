void setup() 
{ 
  // put your setup code here, to run once: 
  pinMode(10, OUTPUT);
} 

void loop() 
{ // put your main code here, to run repeatedly: 
  tone(10,261); //Middle C 
  delay(1000);
  tone(10,277); //C# 
  delay(1000);
  tone(10,294); //D delay(1000);
  tone(10,311); //D# delay(1000);
  tone(10,330); //E delay(1000);
  tone(10,349); //F delay(1000);
  tone(10,370); //F# delay(1000);
  tone(10,392,); //G delay(1000);
  tone(10,415); //G# delay(1000);
  tone(10,440); //A delay(1000);
}
