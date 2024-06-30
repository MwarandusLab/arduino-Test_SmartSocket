uint16_t i;
uint32_t cal;
uint16_t currentReading;
uint16_t maxReading;
uint16_t minReading;
uint16_t offset;


void setup() {
  Serial.begin(9600);

}

void loop() {
  maxReading = 0;
  minReading  = 1024;

  for( i = 0; i <=  99; ++i){
    delay(1);
    currentReading = analogRead(A1);
    if(currentReading > maxReading) maxReading = currentReading;
    if(currentReading > minReading) minReading = currentReading;
  }

  offset = maxReading - minReading;

  Serial.print(minReading);
  Serial.print("\t");
  Serial.print(currentReading);
  Serial.print("\t");
  Serial.print(maxReading);
  Serial.println("\t");
  delay(100);

}
