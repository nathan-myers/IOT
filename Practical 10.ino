#include<DHT.h>
#include<DHT_U.h>

#define DHTPIN 3
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHT11 Test!!");
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  if(isnan(h) || isnan(t) || isnan(f))
  {
    Serial.println("Failed to read from DHT Sensor!!");
    return;
  }

  Serial.println("Humidity: ");
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print("*C");
  Serial.print("\t");
  Serial.print(f);
  Serial.print("*F\t");
  Serial.print(t);
  Serial.print("\n");

}
