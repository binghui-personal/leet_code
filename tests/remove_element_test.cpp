#include "remove_element/remove_element.h"
#include "gtest/gtest.h"
#include <vector>

using namespace remove_element;

TEST(RemoveElementTest, Example1) {
    Solution s;
    std::vector<int> nums = {3, 2, 2, 3};
    auto res = s.removeElement(nums, 3);
    EXPECT_TRUE(res == 2);
    std::vector<int> actual(nums.begin(), nums.begin() + res);
    std::vector<int> expected = {2, 2};
    EXPECT_EQ(actual, expected);
}

TEST(RemoveElementTest, Example2) {
    Solution s;
    std::vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    auto res = s.removeElement(nums, 2);
    ASSERT_EQ(res, 5);
    std::vector<int> actual(nums.begin(), nums.begin() + res);
    std::vector<int> expected = {0, 1, 3, 0, 4};
    EXPECT_EQ(actual, expected);
}

TEST(RemoveElementTest, Example3) {
    Solution s;
    std::vector<int> nums = {1, 2, 3};
    auto res = s.removeElement(nums, 7);
    EXPECT_TRUE(res == 3);
}

TEST(RemoveElementTest, Example4) {
    Solution s;
    std::vector<int> nums = {2, 2, 2};
    auto res = s.removeElement(nums, 2);
    EXPECT_TRUE(res == 0);
}

TEST(RemoveElementTest, Example5) {
    Solution s;
    std::vector<int> nums = {};
    auto res = s.removeElement(nums, 2);
    EXPECT_TRUE(res == 0);
}
