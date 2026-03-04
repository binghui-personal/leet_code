#include "remove_element.h"
#include <unordered_map>
using namespace remove_element;

int Solution::removeElement(std::vector<int>& nums, int val) {
  // 双指针法：一个指针遍历数组，另一个指针记录不等于 val 的元素位置
  int slow = 0;
  for (int fast = 0; fast < nums.size(); ++fast) {
    if (nums[fast] != val) {
      nums[slow++] = nums[fast];
    }
  }

  return slow;
}
