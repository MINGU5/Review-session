void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    long value = Serial.parseInt();
    Serial.println(value);

    analogWrite(3,value);
  }
}
