#include "example.hpp"
#include "gtest/gtest.h"

TEST(example_one, first)
{
    Example<5> x;
    ASSERT_EQ(5, x.getN());
}
