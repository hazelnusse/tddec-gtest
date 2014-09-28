#include <gtest/gtest.h>

class Test_sprintf: public ::testing::Test {
public:

};

TEST_F(Test_sprintf, NoFormatOperations) {

    char output[5] = "";

    ASSERT_EQ(3, sprintf(output, "hey"));
    ASSERT_STREQ("hey", output);
}

