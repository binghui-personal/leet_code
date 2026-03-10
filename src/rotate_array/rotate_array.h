#pragma once
#include <leet_code/leet_code_exports.h>
#include <vector>

namespace rotate_array {

class LEET_CODE_API Solution {
public:
  // 给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
  void rotateBruteForce(std::vector<int>& nums, int k);
  void rotateTripleReverse(std::vector<int>& nums, int k);
};

} // namespace rotate_array
