#include <gtest/gtest.h>
#include "../src/math.h"

using namespace math;

TEST(MathTest, SumEmptyVector)
{
    std::vector<double> v;
    EXPECT_DOUBLE_EQ(math::sum(v), 0.0);
}

TEST(MathTest, SumSingleElement)
{
    std::vector<double> v = {5.0};
    EXPECT_DOUBLE_EQ(sum(v), 5.0);
}

TEST(MathTest, SumMultipleElements)
{
    std::vector<double> v = {1.0, 2.0, 3.0, 4.0, 5.0};
    EXPECT_DOUBLE_EQ(sum(v), 15.0);
}

TEST(MathTest, SumNegativeElements)
{
    std::vector<double> v = {-1.0, -2.0, -3.0, -4.0, -5.0};
    EXPECT_DOUBLE_EQ(sum(v), -15.0);
}

TEST(MathTest, SumMixedElements)
{
    std::vector<double> v = {-1.0, 2.0, -3.0, 4.0, -5.0};
    EXPECT_DOUBLE_EQ(sum(v), -3.0);
}

TEST(MathTest, FailingTest)
{
    std::vector<double> v = {};
    EXPECT_DOUBLE_EQ(sum(v), 8.0);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}