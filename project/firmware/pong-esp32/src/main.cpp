#include <Arduino.h>

float i = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  delay(1500);   // USB natif : laisse le temps au PC de rouvrir le port
}

void loop()
{
  digitalWrite(LED_BUILTIN, LOW);   // LOW allume la LED de la XIAO
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  // HIGH l'éteint
  delay(500);
  i += 0.1;

  Serial.print(">sin:");
  Serial.println(sin(i));

  Serial.print(">cos:");
  Serial.println(cos(i));

  delay(10);
}