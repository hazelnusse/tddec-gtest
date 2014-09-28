#ifndef LEDDRIVER_H
#define LEDDRIVER_H

#include <cstdint>

class LedDriver {
public:
    LedDriver(uint16_t& address) : m_address{address} {
        m_address = 0;
    }

    void TurnOn(int ledNumber) {
        m_address = 1;
    }

    void TurnOff(int ledNumber) {
        m_address = 0;
    }
private:
    uint16_t& m_address;
};

#endif

