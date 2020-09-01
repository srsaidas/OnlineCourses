#include <EEPROM.h>
void setup() {
  // put your setup code here, to run once:
  int i;
  Serial.begin(9600);
  for(i = 0; i < 1024; i++)
  {
    EEPROM.write(i,1);
  }

  for(i = 0; i < 1024; i++)
  {
    Serial.println(EEPROM.read(i),DEC);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
