#pragma once
#include <vector>

namespace merge_sorted_array {

class Solution {
public:
    // Merge nums2 into nums1 as one sorted array. nums1 has size m + n
    // where the first m elements denote the valid elements, and nums2 has n elements.
    void merge(std::vector<int>& nums1, int m, const std::vector<int>& nums2, int n);
};

} // namespace merge_sorted_array
