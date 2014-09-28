#include <gtest/gtest.h>

class Test_sprintf: public ::testing::Test {
public:

};

TEST_F(Test_sprintf, NoFormatOperations) {

    char output[5] = "";

    ASSERT_EQ(3, sprintf(output, "hey"));
    ASSERT_STREQ("hey", output);
}

TEST_F(Test_sprintf, InsertString) {

    char output[20] = "";

    ASSERT_EQ(12, sprintf(output, "Hello %s\n", "World"));
    ASSERT_STREQ("Hello World\n", output);
}

