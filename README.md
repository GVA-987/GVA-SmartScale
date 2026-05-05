# GVA-SmartScale ⚖️

Este es el desarrollo de una balanza inteligente que combina hardware (ESP32) con una aplicación de escritorio. La idea es tener un sistema de pesaje preciso que no solo muestre el peso en una pantalla local, sino que envíe los datos de forma estructurada a una PC para poder gestionarlos profesionalmente.

## 🛠️ Lo que estoy usando

De momento, el proyecto se divide en el firmware del dispositivo y, más adelante, la app de escritorio.

### Hardware & Firmware

- **Cerebro:** ESP32 (usando el framework de Arduino en PlatformIO).
- **Sensor:** Celda de carga con el módulo HX711.
- **Pantalla:** LCD 16x2 conectada por I2C.
- **Protocolo:** Envío de datos vía Serial en formato JSON.

### Desktop (Próximamente)

- **Interfaz:** C# con WPF.

## 📂 Estructura actual

```text
GVA-SmartScale/
└── firmware/         # Todo el código del ESP32 (C++)
└── desktop-app/      # Proximamente (C# WPF)
```
