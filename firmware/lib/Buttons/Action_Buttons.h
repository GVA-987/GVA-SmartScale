#ifndef Action_BUTTONS_H
#define Action_BUTTONS_H

#include <Arduino.h>

class Action_Button
{
private:
    uint8_t _pin;
    unsigned long _lastDebounceTime;
    unsigned long _debounceDelay;
    bool _lastButtonState;
    bool _buttonState;

public:
    // recibe el pin y el tiempo de debounce (50ms estándar)
    Action_Button(uint8_t pin, unsigned long debounceDelay = 50);

    // Configura el pin como entrada con pull-up interno
    void begin();

    // Retorna true solo en el momento que se presiona (flanco de bajada)
    bool isPressed();
};

#endif