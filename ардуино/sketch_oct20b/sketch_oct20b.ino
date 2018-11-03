void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  if(analogRead(A0)<500)
    Serial.println("hello");
  if(analogRead(A0)>500)
    Serial.println("bye");
}
