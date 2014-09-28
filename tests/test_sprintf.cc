#include <cstdio>   // for sprintf
#include <cstring>  // for memset and strlen
#include <gtest/gtest.h>

constexpr char fill_char = '\xaa';

class Test_sprintf: public ::testing::Test {
public:
    const char* expected;
    char* buffer;
    char* output;

    Test_sprintf() : expected(nullptr), buffer(nullptr), output(nullptr) {
    }

    ~Test_sprintf() {
        cleanup();
    }

    void expect(const char* s) {
        cleanup();  // frees memory in the case expect has already been called

        expected = s;
        // Allocate 3 extra chars:
        //   * 1 char before string (to verify it isn't written to by sprintf)
        //   * 1 char null terminator
        //   * 1 char after string (to verify it isn't written to sprintf)
        const int num_chars = strlen(s) + 3;
        buffer = new char[num_chars];
        memset(buffer, fill_char, num_chars);
        output = buffer + 1;
    }

    void given(int charsWritten) {
        int length = strlen(expected);
        ASSERT_EQ(length, charsWritten);
        ASSERT_STREQ(expected, output);
        ASSERT_EQ(fill_char, output[-1]);
        ASSERT_EQ(fill_char, output[length + 1]);
    }

private:

    void cleanup() {
        if (buffer != nullptr) {
            delete[] buffer;
        }
        expected = buffer = output = nullptr;
    }
};

TEST_F(Test_sprintf, NoFormatOperations) {
    expect("hey");
    given(sprintf(output, "hey"));
}

TEST_F(Test_sprintf, InsertString) {
    expect("Hello World\n");
    given(sprintf(output, "Hello %s\n", "World"));
}

TEST_F(Test_sprintf, InsertInteger) {
    expect("Hi 5\n");
    given(sprintf(output, "Hi %d\n", 5));

    expect("5 is my favorite number\n");
    given(sprintf(output, "%d is my favorite number\n", 5));
    given(sprintf(output, "%u is my favorite number\n", 5));
}

