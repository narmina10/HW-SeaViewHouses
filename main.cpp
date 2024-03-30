#include "SeaViewHouses.cpp"
#include <gtest/gtest.h>

TEST(SeaViewHousesTest, Test1) {
std::vector<int> heights = {2, 4, 3};
std::vector<int> expected = {1, 2};
std::vector<int> result = findSeaViewHouses(heights);
ASSERT_EQ(result, expected);
}

TEST(SeaViewHousesTest, Test2) {
std::vector<int> heights = {1, 2, 3, 4};
std::vector<int> expected = {3};
std::vector<int> result = findSeaViewHouses(heights);
ASSERT_EQ(result, expected);
}

TEST(SeaViewHousesTest, Test3) {
std::vector<int> heights = {4, 3, 2, 1};
std::vector<int> expected = {0, 1, 2, 3};
std::vector<int> result = findSeaViewHouses(heights);
ASSERT_EQ(result, expected);
}

TEST(SeaViewHousesTest, Test4) {
std::vector<int> heights;
std::vector<int> expected;
std::vector<int> result = findSeaViewHouses(heights);
ASSERT_EQ(result, expected);
}

TEST(SeaViewHousesTest, Test5) {
std::vector<int> heights = {10};
std::vector<int> expected = {0};
std::vector<int> result = findSeaViewHouses(heights);
ASSERT_EQ(result, expected);
}



int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

