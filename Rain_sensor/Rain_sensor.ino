
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = map(analogRead(A0),0,1023,3,1);
  Serial.println(val);
  delay(100);
  if(val==1){Serial.println("No Rain , No gain");}
  else if(val==2){Serial.println("Partly raining");}
  else Serial.println("Raining cats and dogs");
}
