#include "hello_world.hpp"
#include "gtest/gtest.h"

TEST(hello_world, first)
{
    static constexpr int h {5};
    static constexpr int i {6};
    HelloWorld test(h);
    test.incrementX();

    ASSERT_EQ(h.val(), i);
}
