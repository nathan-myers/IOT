int irSensorPin =7; 
int ledPin = 6;

void setup() 
{ 
  // put your setup code here, to run once: 
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
} 

void loop() 
{ /
  / put your main code here, to run repeatedly: 
  int obstacleDetected = digitalRead(irSensorPin); 
  
  if(obstacleDetected == LOW) //obstacle is detected 
  {
    digitalWrite(ledPin,HIGH); 
    Serial.println("Obstacle Detected...!");
  } 
  
  else 
  {
    digitalWrite(ledPin,LOW); 
    Serial.println("No Obstacle is Detected...!");
  } 
  delay(1000);
}
