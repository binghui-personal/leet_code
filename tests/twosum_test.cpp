#include "gtest/gtest.h"
#include "twosum/twosum.h"
#include <vector>

TEST(TwoSumTest, Example1) {
    Solution s;
    vector<int> nums = {2,7,11,15};
    auto res = s.twoSum(nums, 9);
    EXPECT_EQ(res.size(), 2);
    EXPECT_TRUE((nums[res[0]] + nums[res[1]]) == 9);
}

TEST(TwoSumTest, Example2) {
    Solution s;
    vector<int> nums = {3,2,4};
    auto res = s.twoSum(nums, 6);
    EXPECT_EQ(res.size(), 2);
    EXPECT_TRUE((nums[res[0]] + nums[res[1]]) == 6);
}

TEST(TwoSumTest, NoSolution) {
    Solution s;
    vector<int> nums = {1,2,3};
    auto res = s.twoSum(nums, 7);
    EXPECT_TRUE(res.empty());
}
