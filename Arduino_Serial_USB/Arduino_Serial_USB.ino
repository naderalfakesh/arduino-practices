
#define BLYNK_PRINT DebugSerial


// You could use a spare Hardware Serial on boards that have it (like Mega)
#include <SoftwareSerial.h>
SoftwareSerial DebugSerial(2, 3); // RX, TX

#include <BlynkSimpleStream.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "d7ovbQa3F_L1J8KyZesbbrmlnfrxQXZK";
#include <Servo.h>
Servo myservo;
void setup()
{
  // Debug console
  DebugSerial.begin(9600);
  myservo.attach(11);

  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
  
}

void loop()
{
  Blynk.run();
}
  int val;
  BLYNK_WRITE(V0){
    val = param.asInt();
    myservo.write(val);
  }
  BLYNK_READ(V5)
  {
    Blynk.virtualWrite(5,val);    
  }  
