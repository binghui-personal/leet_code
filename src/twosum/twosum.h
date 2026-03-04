#pragma once
#include <leet_code/leet_code_exports.h>
#include <vector>

namespace two_sum {

class LEET_CODE_API Solution {
public:
    // Given an array of integers "nums" and an integer "target",
    // return indices of the two numbers such that they add up to target.
    // You may assume that each input would have exactly one solution, and
    // you may not use the same element twice.
    std::vector<int> twoSum(const std::vector<int>& nums, int target);
};

} // namespace two_sum
