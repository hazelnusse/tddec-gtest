#ifndef LEDDRIVER_H
#define LEDDRIVER_H

#include <cstdint>

class LedDriver {
public:
    LedDriver(uint16_t& address) {
        address = 0;
    }
private:
};

#endif

