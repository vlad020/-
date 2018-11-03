int analog;
void setup() {
  pinMode(A1,INPUT);
   pinMode(13,OUTPUT);
   Serial.begin(9600);

}

void loop() {
  analog = analogRead(A1);
  Serial.println(analog);
  if(analog>2&&analog<800) {
    digitalWrite(A1,HIGH);
  }
  else{
    digitalWrite(A1,LOW);
  }
if(analog<200){
  digitalWrite(A1,LOW);
if(200<analog<800){
  digitalWrite(A1,HIGH);
  delay(500);
if(analog>800){
  digitalWrite(A1,HIGH);
}
}
}
}
