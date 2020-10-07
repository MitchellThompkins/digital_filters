#include "hello_world.hpp"
#include "gtest/gtest.h"

TEST(hello_world, first)
{
    static constexpr int h { 5 };
    static constexpr int i { 6 };
    static constexpr int j { 99 };
    static constexpr int k { 6 - j };
    HelloWorld test(h);

    test.increment();
    ASSERT_EQ(test.val(), i);

    test.increment(-99);
    ASSERT_EQ(test.val(), k);
}
