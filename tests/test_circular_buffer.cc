// Test list:
// Construct a circular_buffer with capacity of 2
// size method tells how many elements in the CB
// empty method to return true when empty
// push_back() allows
// operator[] for accesssing elements, possibly for setting elements?
// pop_back()
// pop_front()
#include <gtest/gtest.h>

#include "circular_buffer.h"

constexpr int max_size = 5;
class Test_circular_buffer: public ::testing::Test {
public:
    circular_buffer<int, max_size> cb;

private:
};

TEST_F(Test_circular_buffer, EmptyWhenConstructed) {
    ASSERT_TRUE(cb.empty());
    ASSERT_EQ(0, cb.size());
}

TEST_F(Test_circular_buffer, MaxSizeMatchesTemplateSize) {
    ASSERT_EQ(max_size, cb.max_size());
}

TEST_F(Test_circular_buffer, PushBackOne) {
    cb.push_back(1);
    ASSERT_EQ(cb[0], 1);
}

