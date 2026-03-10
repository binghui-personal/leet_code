#include "rotate_array/rotate_array.h"
#include "gtest/gtest.h"
#include <vector>

using namespace rotate_array;

TEST(RotateArrayTest, BruteForce1) {
    Solution s;
    std::vector<int> nums = {1,2,3,4,5,6,7};
    s.rotate_brute_force(nums, 3);
    std::vector<int> expected = {5,6,7,1,2,3,4};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, BruteForce2) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotate_brute_force(nums, 2);
    std::vector<int> expected = {3,99,-1,-100};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse1) {
    Solution s;
    std::vector<int> nums = {1,2,3,4,5,6,7};
    s.rotate_triple_reverse(nums, 3);
    std::vector<int> expected = {5,6,7,1,2,3,4};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse2) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotate_triple_reverse(nums, 2);
    std::vector<int> expected = {3,99,-1,-100};
    EXPECT_EQ(nums, expected);
}

