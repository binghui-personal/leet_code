#include "summary_ranges.h"
using namespace summary_ranges;

std::vector<std::string> Solution::summaryRanges(std::vector<int>& nums) {
    int n = nums.size();
    if (n == 0) {
        return {};
    }

    int left = 0;
    int right = 0;
    std::vector<std::string> res;
    while (right < n - 1) {
        if (nums[right + 1] - nums[right] == 1) {
            right = right + 1;
            continue;
        } else if (nums[right + 1] - nums[right] > 1) {
            if (left == right) {
                res.push_back(std::to_string(nums[right]));
            } else if (left < right) {
                res.push_back(std::to_string(nums[left]) + "->" + std::to_string(nums[right]));
            }
            else {
                return {""};
            }
            right++;
            left = right;
            continue;
        } else {
            return {};
        }
    }

    if (left == right) {
      res.push_back(std::to_string(nums[left]));
    } else if (left < right) {
      res.push_back(std::to_string(nums[left]) + "->" + std::to_string(nums[right]));
    }
    else {
      return {};
    }

    return res;
}
