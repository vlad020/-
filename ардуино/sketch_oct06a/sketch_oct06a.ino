int led=9;
int pot;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pot=analogRead(A0);
  analogWrite(led,pot/4);
  delay(1023);
  Serial.println(pot);
}
