void setup() {
  pinMode(8,INPUT);
  pinMode(13,OUTPUT);
}
void loop() {
  if(digitalRead(8)==HIGH)
  {
    digitalWrite(13,HIGH);
    delay(500);
    }

  else{
    digitalWrite(13,LOW);
    delay(500);
  }
}


