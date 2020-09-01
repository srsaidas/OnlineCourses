#define LED 9
#define LDR A0
int light;
char volt;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  light = analogRead(LDR);
  volt = (5 * light)/1024;
  if(volt < 2)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
  
}
