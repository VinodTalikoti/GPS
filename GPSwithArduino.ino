#include <SoftwareSerial.h>
#include <TinyGPS++.h>
SoftwareSerial gpsSerial(8,9);
TinyGPSPlus gps;
double lattitude,longitude;

void setup() {

 gpsSerial.begin(9600);
 Serial.begin(9600);
  
  }

void loop()
{
  while (gpsSerial.available())
  {
    int data = gpsSerial.read();
    if (gps.encode(data))
    {
      Serial.print("Location: ");
      Serial.print(gps.location.lat(), 6);
      Serial.print(",");
      Serial.println(gps.location.lng(), 6);
    }
  }
}
