#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

// Sensor HX711
#define PINM_HX711_DOUT 16
#define PINM_HX711_SCK 17

// Perifericos de salida
#define PIN_LCD_SDA 21
#define PIN_LCD_SCL 22
#define PIN_BUZZER 25
#define PIN_LED_STATUS 2 // Led interno del ESP32 para indicar estado del sistema (opcional)

// Entradas
#define PIN_BTN_TARA 32  // Boton de Tara
#define PIN_BTN_UNIT 33  // Boton para cambiar unidad (kg/lb)
#define PIN_BTN_RESET 27 // Boton para limpiar errores/Reset

// Parametros de Operacion
#define LCD_ADDR 0x27
const long SERIAL_BAUD = 115200;
const int UPDATE_INTERVAL = 250;

#endif