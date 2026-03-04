#include "merge_sorted_array/merge_sorted_array.h"
#include "gtest/gtest.h"
#include <vector>

using namespace merge_sorted_array;

TEST(MergeSortedArrayTest, Example1) {
    Solution s;
    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};
    s.merge(nums1, 3, nums2, 3);
    std::vector<int> expected = {1,2,2,3,5,6};
    EXPECT_EQ(nums1, expected);
}

TEST(MergeSortedArrayTest, EmptyNums2) {
    Solution s;
    std::vector<int> nums1 = {1,2,3};
    std::vector<int> nums2 = {};
    s.merge(nums1, 3, nums2, 0);
    std::vector<int> expected = {1,2,3};
    EXPECT_EQ(nums1, expected);
}

TEST(MergeSortedArrayTest, AllNums2Smaller) {
    Solution s;
    std::vector<int> nums1 = {3,4,5,0,0,0};
    std::vector<int> nums2 = {1,2,2};
    s.merge(nums1, 3, nums2, 3);
    std::vector<int> expected = {1,2,2,3,4,5};
    EXPECT_EQ(nums1, expected);
}
