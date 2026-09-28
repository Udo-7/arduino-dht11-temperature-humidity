#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT mySensor(DHTPIN, DHTTYPE);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySensor.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
delay(2000);

// Read humidity and temperature
float humidity = mySensor.readHumidity();
float temperatureC = mySensor.readTemperature();

// Check for sensor reading errors
if(isnan(humidity) || isnan(temperatureC)) {
  Serial.println("Failed to read from DHT sensor!");
  return;
}
// Display readings
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C  Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}








