#include <gtest/gtest.h>

constexpr char fill_char = '\xaa';

class Test_sprintf: public ::testing::Test {
public:
    const char* expected;
    char output[100];

    Test_sprintf() : expected(nullptr) {
        memset(output, fill_char, sizeof(output));
    }

    void expect(const char* s) {
        expected = s;
    }

    void given(int charsWritten) {
        int length = strlen(expected);
        ASSERT_EQ(length, charsWritten);
        ASSERT_STREQ(expected, output + 1);
        ASSERT_EQ(fill_char, output[0]);
        ASSERT_EQ(fill_char, output[length + 2]);
    }
};

TEST_F(Test_sprintf, NoFormatOperations) {
    expect("hey");
    given(sprintf(output + 1, "hey"));
}

TEST_F(Test_sprintf, InsertString) {
    expect("Hello World\n");
    given(sprintf(output + 1, "Hello %s\n", "World"));
}


