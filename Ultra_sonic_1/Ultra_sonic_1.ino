#include <HCSR04.h>

UltraSonicDistanceSensor distanceSensor(7, 8);  // Initialize sensor that uses digital pins 13 and 12.

void setup () {
    Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
    pinMode(13,OUTPUT);
}

void loop () {
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    int distance = distanceSensor.measureDistanceCm();
    Serial.println(distance);
    if(distance > 100 ){
      digitalWrite(13,LOW);
      }
      else {
      digitalWrite(13,HIGH);
      }
      
      
    delay(500);
}
