#include <EEPROM.h>
String operation;
int adr, data;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("** EEPROM **");
  Serial.print("For Read: ");
  Serial.println("read <adr>");
  Serial.print("For Write: ");
  Serial.println("write <adr> <data>");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter the operation : ");
  while(Serial.available()<=0);
  operation=Serial.readStringUntil(' ');
  if(!operation.compareTo("write"))
  {
    adr = Serial.parseInt();
    data = Serial.parseInt(SKIP_ALL,'\n');
    EEPROM.write(adr,data);
    Serial.print("Data ");
    Serial.print(data);
    Serial.print(" write to EEPROM at address ");
    Serial.println(adr);
    
  }
  else if(!operation.compareTo("read"))
  {
    adr = Serial.parseInt(SKIP_NONE,'\n');
    Serial.print("Data retrieved from memory is ");
    Serial.println(EEPROM.read(adr));
  }

}
