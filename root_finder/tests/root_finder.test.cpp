#include "example.hpp"
#include "gcem.hpp"
#include "gtest/gtest.h"

TEST(example_one, first)
{
    constexpr int i {10};
    constexpr int y = gcem::factorial(i);

    Example<36> x;
}
