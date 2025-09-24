#include <gtest/gtest.h>
#include "box_capacity.h"


TEST(CapacityTest, NormalRoom) {
    EXPECT_EQ(Timaty::BoxCapacity(10, 10, 10), 343);
    EXPECT_EQ(Timaty::BoxCapacity(30, 40, 50), 24420);
}

TEST(CapacityTest, ZeroRoom) {
    EXPECT_EQ(Timaty::BoxCapacity(0, 0, 0), 0);
    EXPECT_EQ(Timaty::BoxCapacity(30, 40, 0), 0);
    EXPECT_EQ(Timaty::BoxCapacity(0, 30, 40), 0);
    EXPECT_EQ(Timaty::BoxCapacity(30, 0, 40), 0);
}

TEST(CapacityTest, NegativeRoom) {
    EXPECT_EQ(Timaty::BoxCapacity(-10, 10, 10), 0);
    EXPECT_EQ(Timaty::BoxCapacity(10, -10, 10), 0);
    EXPECT_EQ(Timaty::BoxCapacity(10, 10, -10), 0);
    EXPECT_EQ(Timaty::BoxCapacity(-10, -10, -10), 0);
}

TEST(CapacityTest, BigRoom) {
    EXPECT_EQ(Timaty::BoxCapacity(10000, 10000, 10000), 421875000000);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}