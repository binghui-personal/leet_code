#include "rotate_array/rotate_array.h"
#include "gtest/gtest.h"
#include <vector>

using namespace rotate_array;

TEST(RotateArrayTest, BruteForce1) {
    Solution s;
    std::vector<int> nums = {1,2,3,4,5,6,7};
    s.rotateBruteForce(nums, 3);
    std::vector<int> expected = {5,6,7,1,2,3,4};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, BruteForce2) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotateBruteForce(nums, 2);
    std::vector<int> expected = {3,99,-1,-100};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, BruteForce3) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotateBruteForce(nums, -3);
    std::vector<int> expected = {99,-1,-100,3};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse1) {
    Solution s;
    std::vector<int> nums = {1,2,3,4,5,6,7};
    s.rotateTripleReverse(nums, 3);
    std::vector<int> expected = {5,6,7,1,2,3,4};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse2) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotateTripleReverse(nums, 2);
    std::vector<int> expected = {3,99,-1,-100};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse3) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotateTripleReverse(nums, 4);
    std::vector<int> expected = {-1,-100,3,99};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse4) {
    Solution s;
    std::vector<int> nums = {};
    s.rotateTripleReverse(nums, 4);
    std::vector<int> expected = {};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse5) {
    Solution s;
    std::vector<int> nums = {};
    s.rotateTripleReverse(nums, 0);
    std::vector<int> expected = {};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse6) {
    Solution s;
    std::vector<int> nums = {};
    s.rotateTripleReverse(nums, -4);
    std::vector<int> expected = {};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse7) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotateTripleReverse(nums, -1);
    std::vector<int> expected = {-100, 3, 99, -1};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse8) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotateTripleReverse(nums, 4);
    std::vector<int> expected = {-1,-100,3,99};
    EXPECT_EQ(nums, expected);
}

TEST(RotateArrayTest, TripleReverse9) {
    Solution s;
    std::vector<int> nums = {-1,-100,3,99};
    s.rotateTripleReverse(nums, 5);
    std::vector<int> expected = {99,-1,-100,3};
    EXPECT_EQ(nums, expected);
}

