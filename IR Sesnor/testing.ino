/*
Eight array IR sensor testing code 
where sensors are connected from A0 to A7 pins of arduino board.

© Team HAU MAU
*/

int sensor[] = {A0, A1, A2, A3, A4, A5, A5, A6, A7};
int i;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(i = 0 ; i < 8 ; i++)
  {
    Serial.print("Sensor ");
    Serial.print(i+1);
    Serial.print(analogRead(sensor[i]));
    Serial.print("\t");
  }
    Serial.print("\n");
    delay(200);
}
