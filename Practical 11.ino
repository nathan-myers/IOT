#include <DHT.h> 
#include <DHT_U.h>
#define DHTPIN 3 
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
float maxTemp = -1000; // Initialize to very low temperature 
float minTemp = 1000; // Initialize to very high temperature

void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("DHT11 Test !!"); 
  dht.begin();
}

void loop() 
{ 
  delay(2000); 
  float f = dht.readTemperature(true); // Read temp in Fahrenheit
  // Checking for any failure if occurs 
  if (isnan(f)) 
  { 
    Serial.println("Failed to read from DHT Sensor...!"); 
    return;
}
  
// Update maximum and minimum temperatures 
  if (f > maxTemp) 
  { 
    maxTemp = f;
  }
  
  if (f < minTemp) 
  { 
    minTemp = f;
  }
  
  Serial.print("Temperature: "); 
  Serial.print(f); 
  Serial.print("°F\t"); 
  Serial.print("Max Temp: "); 
  Serial.print(maxTemp); 
  Serial.print("°F\t"); 
  Serial.print("Min Temp: "); 
  Serial.print(minTemp); 
  Serial.println("°F");
}
