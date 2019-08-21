void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int r=255;
  int g=0;
  int b=255;
  analogWrite(11,random(0,255));
  analogWrite(10,random(0,255));
  analogWrite(9,random(0,255));
  delay(100  );
}
