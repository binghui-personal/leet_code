#include "summary_ranges/summary_ranges.h"
#include "gtest/gtest.h"

using namespace summary_ranges;

TEST(SummaryRangesTest, Example1) {
    Solution s;
    std::vector<int> nums = {0,1,2,4,5,7};
    std::vector<std::string> expected = {"0->2", "4->5", "7"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example2) {
    Solution s;
    std::vector<int> nums = {0, 2, 3, 4, 6, 8, 9};
    std::vector<std::string> expected = {"0", "2->4", "6", "8->9"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example3) {
    Solution s;
    std::vector<int> nums = {0};
    std::vector<std::string> expected = {"0"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example4) {
    Solution s;
    std::vector<int> nums = {};
    std::vector<std::string> expected = {};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example5) {
    Solution s;
    std::vector<int> nums = {1, 2};
    std::vector<std::string> expected = {"1->2"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example6) {
    Solution s;
    std::vector<int> nums = {1, 3, 4};
    std::vector<std::string> expected = {"1", "3->4"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example7) {
    Solution s;
    std::vector<int> nums = {1, 2, 4};
    std::vector<std::string> expected = {"1->2", "4"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example8) {
    Solution s;
    std::vector<int> nums = {1, 2, 4, 5};
    std::vector<std::string> expected = {"1->2", "4->5"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example9) {
    Solution s;
    std::vector<int> nums = {INT_MIN,0,2,3,4,6,8,9};
    std::vector<std::string> expected = {"-2147483648", "0", "2->4", "6", "8->9"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

TEST(SummaryRangesTest, Example10) {
    Solution s;
    std::vector<int> nums = {0,2,3,4,6,8,9, INT_MAX};
    std::vector<std::string> expected = {"0", "2->4", "6", "8->9", "2147483647"};
    auto res = s.summaryRanges(nums);
    EXPECT_EQ(expected, res);
}

