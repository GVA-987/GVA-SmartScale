#include <Arduino.h>
#include "config.h"

unsigned long lastMsg = 0;

void setup()
{
  Serial.begin(SERIAL_BAUD);
  pinMode(PIN_LED_STATUS, OUTPUT);

  Serial.println("\n--- GVA SmartScale Firmware ---");
  Serial.println("System Version: 0.1.0-alpha");
  Serial.println("Status: Initializing...");
}

void loop()
{
  digitalWrite(PIN_LED_STATUS, (millis() / 500) % 2);

  // Enviar mensaje cada cierto tiempo
  if (millis() - lastMsg > 2000)
  {
    Serial.println("Sistema operativo y listo para usar.");
    lastMsg = millis();
  }
}