#include <cstdint>
#include <gtest/gtest.h>

#include "LedDriver.h"

class Test_LedDriver: public ::testing::Test {
public:
    uint16_t virtualLeds;
    LedDriver led;

    Test_LedDriver() : virtualLeds{0xffff}, led{virtualLeds} {}

private:
};

TEST_F(Test_LedDriver, LedsOffAfterCreate) {
    ASSERT_EQ(0, virtualLeds);
}

TEST_F(Test_LedDriver, TurnOnLedOne) {
    led.TurnOn(1);
    ASSERT_EQ(1, virtualLeds);
}

