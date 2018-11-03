void setup() {
  Serial.begin(9600);
  int x=0;
  while(x<10){
    Serial.println("Hello");
    x=x+2;
  }

}

void loop() {
 Serial.print("Hello");
 // Serial.println("Hello");
}
