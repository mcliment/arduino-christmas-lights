#include <Bounce.h>
#include <SeeeduinoRelay.h>

SeeeduinoRelay RELAY1 = SeeeduinoRelay(1,LOW);
SeeeduinoRelay RELAY2 = SeeeduinoRelay(2,HIGH); 

byte states1[] = { HIGH, HIGH, LOW, LOW, HIGH, LOW, HIGH, LOW };
byte states2[] = { LOW, HIGH, LOW, HIGH, HIGH, HIGH, LOW, LOW };

void setup()
{
  Serial.begin(9600);
  Serial.println("Ready"); 
}

void loop()
{
  for (int i = 0; i < sizeof(states1); i++)
  {
    if (states1[i] == HIGH) { RELAY1.on(); } else { RELAY1.off(); }
    if (states2[i] == HIGH) { RELAY2.on(); } else { RELAY2.off(); }
    
    delay(500);
  }
}
