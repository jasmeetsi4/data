//Library Files
#include <DHT.h>
#include <DHT_U.h> 
#include <Adafruit_Sensor.h>



#define DHTPIN 2     
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE); 

float hum; 
float temp;
void setup()
{
    Serial.begin(9600);
    dht.begin();
}

void loop()
{
  
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(2000);
}
