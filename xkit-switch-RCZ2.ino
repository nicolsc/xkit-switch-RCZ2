void setup() {
  delay(10000);
  Serial.begin(9600);
  Serial.println("AT$DR=905200000");
  delay(50);
  Serial.println("ATS400=<000001FF><00000000><00000000>,1");
  delay(50);
  Serial.println("AT$WR");

}

void loop() {}
