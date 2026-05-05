#include "Action_Buttons.h"

Action_Button::Action_Button(uint8_t pin, unsigned long debounceDelay)
{
    _pin = pin;
    _debounceDelay = debounceDelay;
    _lastButtonState = HIGH;
    _buttonState = HIGH;
    _lastDebounceTime = 0;
}

void Action_Button::begin()
{
    pinMode(_pin, INPUT_PULLUP);
}

bool Action_Button::isPressed()
{
    bool reading = digitalRead(_pin);
    bool pressed = false;

    // Si el estado cambió (por ruido o presión real)
    if (reading != _lastButtonState)
    {
        _lastDebounceTime = millis();
    }

    // Si ha pasado más tiempo que el delay, es una lectura estable
    if ((millis() - _lastDebounceTime) > _debounceDelay)
    {
        if (reading != _buttonState)
        {
            _buttonState = reading;

            // Si el estado estable es LOW, significa que se presionó
            if (_buttonState == LOW)
            {
                pressed = true;
            }
        }
    }

    _lastButtonState = reading;
    return pressed;
}