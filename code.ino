void setup() {
  delay(3600000);
  pinMode(0, OUTPUT);
}


void loop() {
  digitalWrite(0, HIGH);   // pin 0 high
  delay(1380000);         // wait for 23 minutes
  digitalWrite(0, LOW);    // pin 0 low
  delay(500);  
} 
