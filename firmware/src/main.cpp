#include <Arduino.h>
#include "config.h"
#include "Action_Buttons.h"

Action_Button btnTara(PIN_BTN_TARA);
Action_Button btnUnit(PIN_BTN_UNIT);
Action_Button btnReset(PIN_BTN_RESET);

unsigned long lastMsg = 0;

void setup()
{
  Serial.begin(SERIAL_BAUD);
  btnTara.begin();
  btnUnit.begin();
  btnReset.begin();
  pinMode(PIN_LED_STATUS, OUTPUT);

  Serial.println("\n--- GVA SmartScale Firmware ---");
  Serial.println("System Version: 1.0.0");
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

  if (btnTara.isPressed())
  {
    Serial.println("Accion: Tara ejecutada");
    // lógica para poner a cero el HX711
  }

  if (btnUnit.isPressed())
  {
    Serial.println("Accion: Cambio de Unidad (Kg/Lb)");
    // lógica para cambiar la unidad de peso
  }

  if (btnReset.isPressed())
  {
    Serial.println("Accion: Reinicio de sistema");
    // lógica para reiniciar el sistema
  }
}