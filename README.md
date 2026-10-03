# Arduino DHT11 Temperature and Humidity

Reads temperature (°C) and relative humidity (%) from a DHT11 sensor using an Arduino and prints them to the Serial Monitor every 2 seconds.

## Hardware
- Arduino board
- DHT11 sensor

## Wiring
VCC to 5V, GND to GND, DATA to pin 2

## Usage
Install the DHT sensor library (Adafruit) from the Arduino IDE Library Manager, accepting any dependencies it asks for. Upload the sketch and open the Serial Monitor at 9600 baud.

Output looks like this: `Temperature: 23.00 °C  Humidity: 45.00 %`

If the sensor can't be read, it prints `Failed to read from DHT sensor!`, so check the wiring and pin number.
